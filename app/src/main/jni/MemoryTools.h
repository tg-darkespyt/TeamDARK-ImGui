#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <pthread.h>

struct MAPS
{
	long int addr;
	long int taddr;
	struct MAPS *next;
};

struct RESULT
{
	long int addr;
	struct RESULT *next;
};

struct FREEZE
{
	long int addr; 
	char *value; 
	int type;           
	struct FREEZE *next;
};

#define LEN sizeof(struct MAPS)
#define FRE sizeof(struct FREEZE)
typedef struct MAPS *PMAPS;
typedef struct RESULT *PRES;
typedef struct FREEZE *PFREEZE;

typedef int TYPE;
typedef int RANGE;
typedef int COUNT;
typedef int COLOR;
typedef long int OFFSET;
typedef long int ADDRESS;
typedef char PACKAGENAME;

enum type
{
    WORD,
	QWORD,
	DWORD,
	FLOAT
};

enum Range
{
	ALL, 
	B_BAD,
	V,	
	C_ALLOC,    
	C_BSS,   
	C_DATA,    
	C_HEAP,   
	JAVA_HEAP, 
	A_ANONMYOUS,
	CODE_SYSTEM,
	STACK,   
	ASHMEM,   
	CODE_APP, 
	OTHER
};

enum Color
{
	COLOR_SILVERY,  
	COLOR_RED,        
	COLOR_GREEN,    
	COLOR_YELLOW,     
	COLOR_DARK_BLUE,  
	COLOR_PINK,      
	COLOR_SKY_BLUE,   
	COLOR_WHITE   
};

PMAPS Res=NULL;

PFREEZE Pfreeze=NULL;
PFREEZE pEnd=NULL;
PFREEZE pNew=NULL;
int FreezeCount=0;
int Freeze=0;
pthread_t pth;
char Fbm[64];
long int delay=30000;

int ResCount=0;
int MemorySearchRange=0;

int SetTextColor(int color);
int getRoot(char *argv[]);
int getPID(char bm[64]);

int SetSearchRange(int type);
PMAPS readmaps(char *bm, int type);
PMAPS readmaps_all(char *bm);
PMAPS readmaps_bad(char *bm);
PMAPS readmaps_v(char *bm);
PMAPS readmaps_c_alloc(char *bm);
PMAPS readmaps_c_bss(char *bm);
PMAPS readmaps_c_data(char *bm);
PMAPS readmaps_c_heap(char *bm);
PMAPS readmaps_java_heap(char *bm);
PMAPS readmaps_a_anonmyous(char *bm);
PMAPS readmaps_code_system(char *bm);
PMAPS readmaps_stack(char *bm);
PMAPS readmaps_ashmem(char *bm);
PMAPS readmaps_code_app(char *bm);
PMAPS readmaps_other(char *bm);
//PMAPS readmaps_il2cpp(char *bm);

void BaseAddressSearch(char *bm,char *value,int *gs,int type,long int BaseAddr);
PMAPS BaseAddressSearch_QWORD(char *bm,int value,int *gs,long int BaseAddr,PMAPS pMap);
PMAPS BaseAddressSearch_DWORD(char *bm,int value,int *gs,long int BaseAddr,PMAPS pMap);
PMAPS BaseAddressSearch_FLOAT(char *bm,float value,int *gs,long int BaseAddr,PMAPS pMap);
PMAPS BaseAddressSearch_WORD(char *bm,int value,int *gs,long int BaseAddr,PMAPS pMap);	// WORD

void RangeMemorySearch(char *bm,char *from_value,char *to_value,int *gs,int type);
PMAPS RangeMemorySearch_QWORD(char *bm,int from_value,int to_value,int *gs,PMAPS pMap);
PMAPS RangeMemorySearch_DWORD(char *bm,int from_value,int to_value,int *gs,PMAPS pMap);
PMAPS RangeMemorySearch_FLOAT(char *bm,float from_value,float to_value,int *gs,PMAPS pMap);
PMAPS RangeMemorySearch_WORD(char *bm,int from_value,int to_value,int *gs,PMAPS pMap);

void MemorySearch(char *bm,char *value,int *gs,int TYPE);
PMAPS MemorySearch_QWORD(char *bm,int value,int *gs,PMAPS pMap);
PMAPS MemorySearch_DWORD(char *bm,int value,int *gs,PMAPS pMap);
PMAPS MemorySearch_FLOAT(char *bm,float value,int *gs,PMAPS pMap);
PMAPS MemorySearch_WORD(char *bm,int value, int *gs, PMAPS pMap);

void MemoryOffset(char *bm,char *value,long int offset,int *gs,int type);
PMAPS MemoryOffset_QWORD(char *bm,int value,long int offset,PMAPS pBuff,int *gs);
PMAPS MemoryOffset_DWORD(char *bm,int value,long int offset,PMAPS pBuff,int *gs);
PMAPS MemoryOffset_FLOAT(char *bm,float value,long int offset,PMAPS pBuff,int *gs);
PMAPS MemoryOffset_WORD(char *bm,int value, long int offset, PMAPS pBuff, int *gs);

void RangeMemoryOffset(char *bm,char *from_value,char *to_value,long int offset,int *gs,int type);
PMAPS RangeMemoryOffset_QWORD(char *bm,int from_value,int to_value,long int offset,PMAPS pBuff,int *gs);
PMAPS RangeMemoryOffset_DWORD(char *bm,int from_value,int to_value,long int offset,PMAPS pBuff,int *gs);
PMAPS RangeMemoryOffset_FLOAT(char *bm,float from_value,float to_value,long int offset,PMAPS pBuff,int *gs);
//PMAPS RangeMemoryOffset_WORD(char *bm,float from_value,float to_value,long int offset,PMAPS pBuff,int *gs);

void MemoryWrite(char *bm,char *value,long int offset,int type);
int MemoryWrite_QWORD(char *bm,int value,PMAPS pBuff,long int offset);
int MemoryWrite_DWORD(char *bm,int value,PMAPS pBuff,long int offset);
int MemoryWrite_FLOAT(char *bm,float value,PMAPS pBuff,long int offset);
int MemoryWrite_WORD(char *bm,int value, PMAPS pBuff, long int offset);

void *SearchAddress(char *bm,long int addr);
int WriteAddress(char *bm,long int addr,void *value,int type);
void BypassGameSafe();
void Print();
void ClearResults();
void ClearMaps(PMAPS pMap);

int isapkinstalled(char *bm);
int isapkrunning(char *bm);
int killprocess(char *bm);
char GetProcessState(char *bm);
int killGG();
int killXs();
int uninstallapk(char *bm);
int installapk(char *lj);
int rebootsystem();
int PutDate();
int GetDate(char *date);

PMAPS GetResults();
int AddFreezeItem_All(char *bm,char *Value,int type,long int offset);
int AddFreezeItem(char *bm,long int addr,char *value,int type,long int offset);
int AddFreezeItem_QWORD(char *bm,long int addr,char *value);
int AddFreezeItem_DWORD(char *bm,long int addr,char *value);
int AddFreezeItem_WORD(char *bm,long int addr, char *value);	// WORD
int AddFreezeItem_FLOAT(char *bm,long int addr,char *value);
int RemoveFreezeItem(long int addr);
int RemoveFreezeItem_All();
int StartFreeze(char *bm);
int StopFreeze();
int SetFreezeDelay(long int De);
int PrintFreezeItems();

int SetTextColor(COLOR color)
{
	switch (color)
	{
		case COLOR_SILVERY:
		    printf("\033[30;1m");
		    break;
		case COLOR_RED:
		    printf("\033[31;1m");
		    break;
		case COLOR_GREEN:
		    printf("\033[32;1m");
		    break;
		case COLOR_YELLOW:
		    printf("\033[33;1m");
		    break;
		case COLOR_DARK_BLUE:
		    printf("\033[34;1m");
		    break;
		case COLOR_PINK:
		    printf("\033[35;1m");
		    break;
		case COLOR_SKY_BLUE:
		    printf("\033[36;1m");
		    break;
		case COLOR_WHITE:
		    printf("\033[37;1m");
		    break;
		default:
		    printf("\033[37;1m");
		    break;
	}
	return 0;
}

int getRoot(char *argv[])
{
	char ml[64];
	sprintf(ml,"su -c %s",*argv);
	if (getuid() != 0)
	{
		system(ml);
		exit(1);
	}
}

/*int getPID(PACKAGENAME bm[64])
{
	FILE *fp;
	pid_t pid;
	char log[64];
	sprintf(log,"pidof %s > log.txt",bm);
	system(log);
	if ((fp = fopen("log.txt", "r")) == NULL)
	{
		return -1;
	}
	fscanf(fp, "%d", &pid);
	remove("log.txt");
	return pid;
}*/

int getPID(PACKAGENAME *PackageName)
{
	DIR *dir=NULL;
	struct dirent *ptr=NULL;
	FILE *fp=NULL;
	char filepath[256];
	char filetext[128];	
	dir = opendir("/proc");		
	if (NULL != dir)
	{
		while ((ptr = readdir(dir)) != NULL)	
		{
			if ((strcmp(ptr->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
				continue;
			if (ptr->d_type != DT_DIR)
				continue;
			sprintf(filepath, "/proc/%s/cmdline", ptr->d_name);	
			fp = fopen(filepath, "r");
			if (NULL != fp)
			{
				fgets(filetext,sizeof(filetext),fp);
				if (strcmp(filetext,PackageName)==0)
				{
					//puts(filepath);
					//printf("packagename:%s\n",filetext);
					break;
				}
				fclose(fp);
			}
		}
	}
	if (readdir(dir) == NULL)
	{
		//puts("Get pid fail");
		return 0;
	}
	closedir(dir);	
	return atoi(ptr->d_name);
}

int SetSearchRange(TYPE type)
{
	switch (type)
	{
		case ALL:
		    MemorySearchRange=0;
		    break;
		case B_BAD:
		    MemorySearchRange=1;
		    break;
		case V:
			MemorySearchRange=2;
			break;
		case C_ALLOC:
		    MemorySearchRange=3;
		    break;
		case C_BSS:
		    MemorySearchRange=4;
		    break;
		case C_DATA:
		    MemorySearchRange=5;
		    break;
		case C_HEAP:
		    MemorySearchRange=6;
		    break;
		case JAVA_HEAP:
		    MemorySearchRange=7;
		    break;
		case A_ANONMYOUS:
		    MemorySearchRange=8;
		    break;
		case CODE_SYSTEM:
		    MemorySearchRange=9;
		    break;
		case STACK:
		    MemorySearchRange=10;
		    break;
		case ASHMEM:
		    MemorySearchRange=11;
		    break;
		case CODE_APP:
		MemorySearchRange=12;
		break;
		case OTHER:
		MemorySearchRange=13;
		break;
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	return 0;
}

PMAPS readmaps(char* bm,TYPE type)
{
	PMAPS pMap=NULL;
	switch (type)
	{
		case ALL:
		    pMap=readmaps_all(bm);
		    break;
		case B_BAD:
		    pMap=readmaps_bad(bm);
		    break;
		case V:
			pMap = readmaps_v(bm);
			break;
		case C_ALLOC:
		    pMap=readmaps_c_alloc(bm);
		    break;
		case C_BSS:
		    pMap=readmaps_c_bss(bm);
		    break;
		case C_DATA:
		    pMap=readmaps_c_data(bm);
		    break;
		case C_HEAP:
		    pMap=readmaps_c_heap(bm);
		    break;
		case JAVA_HEAP:
		    pMap=readmaps_java_heap(bm);
		    break;
		case A_ANONMYOUS:
		    pMap=readmaps_a_anonmyous(bm);
		    break;
		case CODE_SYSTEM:
		    pMap=readmaps_code_system(bm);
		    break;
		case STACK:
		    pMap=readmaps_stack(bm);
		    break;
		case ASHMEM:
		    pMap=readmaps_ashmem(bm);
		    break;
		case CODE_APP:
pMap=readmaps_code_app(bm);
break;
case OTHER:
pMap=readmaps_other(bm);
break;
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	if (pMap == NULL)
	{
		return 0;
	}
	return pMap;
}

PMAPS readmaps_all(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew;
	PMAPS pEnd;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);		
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_bad(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"kgsl-3d0"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}
PMAPS readmaps_v(PACKAGENAME * bm)
{
	PMAPS pHead = NULL;
	PMAPS pNew = NULL;
	PMAPS pEnd = NULL;
	pEnd = pNew = (PMAPS) malloc(LEN);
	FILE *fp;
	int i = 0, flag = 1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff, sizeof(buff), fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff, "/dev/kgsl-3d0"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		if (flag == 1)
		{
			i++;
			if (i == 1)
			{
				pNew->next = NULL;
				pEnd = pNew;
				pHead = pNew;
			}
			else
			{
				pNew->next = NULL;
				pEnd->next = pNew;
				pEnd = pNew;
			}
			pNew = (PMAPS) malloc(LEN);	
		}
	}
	free(pNew);				
	fclose(fp);
	return pHead;
}
PMAPS readmaps_c_alloc(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"[anon:libc_malloc]"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);			
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_c_bss(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"[anon:.bss]"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);			
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_c_data(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"/data/app/"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_c_heap(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"[heap]"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_java_heap(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"/dev/ashmem/"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_a_anonmyous(PACKAGENAME *bm)
{
	PMAPS pHead = NULL;
	PMAPS pNew = NULL;
	PMAPS pEnd = NULL;
	pEnd = pNew = (PMAPS) malloc(LEN);
	FILE *fp;
	int i = 0, flag = 1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL) {
		puts("内存读取失败!");
		return NULL;
	}
	while (!feof(fp)) {
		fgets(buff, sizeof(buff), fp);	
		if 
(strstr(buff, "rw-p") != NULL && !feof(fp) && (strlen(buff) < 46)) {
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			
			flag = 1;
		} else {
			flag = 0;
		}
		if (flag == 1) {
			i++;
			if (i == 1) {
				pNew->next = NULL;
				pEnd = pNew;
				pHead = pNew;
			} else {
				pNew->next = NULL;
				pEnd->next = pNew;
				pEnd = pNew;
			}
			pNew = (PMAPS) malloc(LEN);	
		}
	}
	free(pNew);					
	fclose(fp);					
	return pHead;
}
PMAPS readmaps_code_system(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"/system"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_stack(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"[stack]"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_other(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"[anon:thread signal stack]"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_ashmem(PACKAGENAME *bm)
{
	PMAPS pHead=NULL;
	PMAPS pNew=NULL;
	PMAPS pEnd=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	FILE *fp;
	int i = 0,flag=1;
	char lj[64], buff[256];
	int pid = getPID(bm);
	sprintf(lj, "/proc/%d/maps", pid);
	fp = fopen(lj, "r");
	if (fp == NULL)
	{
		puts("FANSPRO");
		return NULL;
	}
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff, "rw") != NULL && !feof(fp) && strstr(buff,"/dev/ashmem/") && !strstr(buff,"dalvik"))
		{
			sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
			flag=1;
		}
		else
		{
			flag=0;
		}
		if (flag==1)
		{
	    	i++;
	    	if (i==1)
	    	{
	    		pNew->next=NULL;
	    		pEnd=pNew;
	    		pHead=pNew;
	    	}
	    	else
	    	{
	    		pNew->next=NULL;
	    		pEnd->next=pNew;
	    		pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
		}
	}
	free(pNew);
	fclose(fp);
	return pHead;
}

PMAPS readmaps_code_app(PACKAGENAME *bm)
{
PMAPS pHead=NULL;
PMAPS pNew=NULL;
PMAPS pEnd=NULL;
pEnd=pNew=(PMAPS)malloc(LEN);
FILE *fp;
int i = 0,flag=1;
char lj[64], buff[256];
int pid = getPID(bm);
sprintf(lj, "/proc/%d/maps", pid);
fp = fopen(lj, "r");
if (fp == NULL)
{
puts("FANSPRO");
return NULL;
}
while (!feof(fp))
{
fgets(buff,sizeof(buff),fp);
if (strstr(buff, "r-xp") != NULL && !feof(fp) && strstr(buff,"/data/app/"))
{
sscanf(buff, "%lx-%lx", &pNew->addr, &pNew->taddr);
flag=1;
}
else
{
flag=0;
}
if (flag==1)
{
i++;
if (i==1)
{
pNew->next=NULL;
pEnd=pNew;
pHead=pNew;
}
else
{
pNew->next=NULL;
pEnd->next=pNew;
pEnd=pNew;
}
pNew=(PMAPS)malloc(LEN);
}
}
free(pNew);
fclose(fp);
return pHead;
}




void Print()
{
	PMAPS temp = Res;
	int i;
	for (i=0;i<ResCount;i++)
	{
		printf("addr:0x%lX,taddr:0x%lX\n", temp->addr, temp->taddr);
		temp = temp->next;
	}
}

void ClearResults()
{
	PMAPS pHead=Res;
	PMAPS pTemp=pHead;
	int i;
	for (i=0;i<ResCount;i++)
	{
		pTemp=pHead;
		pHead=pHead->next;
		free(pTemp);
	}
}

void BaseAddressSearch(PACKAGENAME *bm,char *value,COUNT *gs,TYPE type,ADDRESS BaseAddr)
{
	PMAPS pHead=NULL;
	PMAPS pMap=NULL;
	switch (MemorySearchRange)
	{
		case ALL:
		    pMap=readmaps(bm,ALL);
		    break;
		case B_BAD:
		    pMap=readmaps(bm,B_BAD);
		    break;
		case V:
			pMap = readmaps_v(bm);
			break;
		case C_ALLOC:
		    pMap=readmaps(bm,C_ALLOC);
		    break;
		case C_BSS:
		    pMap=readmaps(bm,C_BSS);
		    break;
		case C_DATA:
		    pMap=readmaps(bm,C_DATA);
		    break;
		case C_HEAP:
		    pMap=readmaps(bm,C_HEAP);
		    break;
		case JAVA_HEAP:
		    pMap=readmaps(bm,JAVA_HEAP);
		    break;
		case A_ANONMYOUS:
		    pMap=readmaps(bm,A_ANONMYOUS);
		    break;
		case CODE_SYSTEM:
		    pMap=readmaps(bm,CODE_SYSTEM);
		    break;
		case STACK:
		    pMap=readmaps(bm,STACK);
		    break;
		case ASHMEM:
		    pMap=readmaps(bm,ASHMEM);
		    break;
		case CODE_APP:
pMap=readmaps_code_app(bm);
break;
case OTHER:
pMap=readmaps_other(bm);
break;
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	if (pMap == NULL)
	{
		puts("map error");
		return (void)0;
	}
	switch (type)
	{
		case QWORD:
		    pHead=BaseAddressSearch_QWORD(bm,atoi(value),gs,BaseAddr,pMap);
		    break;
		case DWORD:
		    pHead=BaseAddressSearch_DWORD(bm,atof(value),gs,BaseAddr,pMap);
		    break;
		    case FLOAT:
            pHead=BaseAddressSearch_FLOAT(bm,atof(value),gs,BaseAddr,pMap);
            break;
            case WORD:
			   pHead=BaseAddressSearch_WORD(bm,atoi(value),gs,BaseAddr,pMap);
			   break;
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	if (pHead == NULL)
	{
		puts("search error");
		return (void)0;
	}
	ResCount=*gs;
	Res=pHead;
}

PMAPS BaseAddressSearch_QWORD(PACKAGENAME *bm,int value,COUNT *gs,ADDRESS BaseAddr,PMAPS pMap)
{
	*gs=0;
	//printf("BaseAddress:%lX\n",BaseAddr);
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	PMAPS e,n;
	e=n=(PMAPS)malloc(LEN);
	PMAPS pBuff=n;
	int iCount=0;
	long int c,ADDR;
	int handle;
	char lj[64];
	sprintf(lj, "/proc/%d/mem", pid);
	handle = open(lj, O_RDWR);
	lseek(handle, 0, SEEK_SET);
	void *BUF[8];
	PMAPS pTemp=pMap;
	while (pTemp != NULL)
	{
		c=(pTemp->taddr-pTemp->addr)/4096;
		for (int j=0;j<c;j++)
		{
			ADDR=pTemp->addr+j*4096+BaseAddr;
			pread64(handle,BUF,8,ADDR);
			if (*(int*)&BUF[0] == value)
			{
				iCount++;
				*gs+=1;
		    	ResCount+=1;
			    n->addr=ADDR;
			    //printf("addr:%lx,val:%d,buff=%d\n",n->addr,value,buff[i]);
			    if (iCount==1)
		        {
		            n->next=NULL;
		            e=n;
		            pBuff=n;
	            }
	            else
	            {
	                n->next=NULL;
	            	e->next=n;
		            e=n;
	            }
	            n=(PMAPS)malloc(LEN);
			}
		}
		pTemp=pTemp->next;
	}
	close(handle);
	return pBuff;
}
PMAPS BaseAddressSearch_WORD(PACKAGENAME *bm,int value, COUNT *gs,ADDRESS BaseAddr,PMAPS pMap)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return NULL;
	}
	*gs=0;
	PMAPS e,n;
	e=n=(PMAPS)malloc(LEN);
	PMAPS pBuff=n;
	int iCount=0;
	long int c,ADDR;
	int handle;
	char lj[64];
	sprintf(lj,"/proc/%d/mem",pid);
	handle = open(lj, O_RDWR);
	lseek(handle, 0, SEEK_SET);
	void *BUF[8];
	PMAPS pTemp=pMap;
	while (pTemp != NULL)
	{
		c=(pTemp->taddr-pTemp->addr)/4096;
		for (int j=0;j<c;j++)
		{
			ADDR=pTemp->addr+j*4096+BaseAddr;
			pread64(handle,BUF,8,ADDR);
			if (*(int*)&BUF[0] == value)
			{
				iCount++;
				*gs+=1;
		    	ResCount+=1;
			    n->addr=ADDR;
			    if (iCount==1)
		        {
		            n->next=NULL;
		            e=n;
		            pBuff=n;
	            }
	            else
	            {
	                n->next=NULL;
	            	e->next=n;
		            e=n;
	            }
	            n=(PMAPS)malloc(LEN);
			}
		}
		pTemp=pTemp->next;
	}
	close(handle);
	return pBuff;
}

PMAPS BaseAddressSearch_DWORD(PACKAGENAME *bm,int value,COUNT *gs,ADDRESS BaseAddr,PMAPS pMap)
{
	*gs=0;
	//printf("BaseAddress:%lX\n",BaseAddr);
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	PMAPS e,n;
	e=n=(PMAPS)malloc(LEN);
	PMAPS pBuff=n;
	int iCount=0;
	long int c,ADDR;
	int handle;
	char lj[64];
	sprintf(lj, "/proc/%d/mem", pid);
	handle = open(lj, O_RDWR);
	lseek(handle, 0, SEEK_SET);
	void *BUF[8];
	PMAPS pTemp=pMap;
	while (pTemp != NULL)
	{
		c=(pTemp->taddr-pTemp->addr)/4096;
		for (int j=0;j<c;j++)
		{
			ADDR=pTemp->addr+j*4096+BaseAddr;
			pread64(handle,BUF,8,ADDR);
			if (*(int*)&BUF[0] == value)
			{
				iCount++;
				*gs+=1;
		    	ResCount+=1;
			    n->addr=ADDR;
			    //printf("addr:%lx,val:%d,buff=%d\n",n->addr,value,buff[i]);
			    if (iCount==1)
		        {
		            n->next=NULL;
		            e=n;
		            pBuff=n;
	            }
	            else
	            {
	                n->next=NULL;
	            	e->next=n;
		            e=n;
	            }
	            n=(PMAPS)malloc(LEN);
			}
		}
		pTemp=pTemp->next;
	}
	close(handle);
	return pBuff;
}

PMAPS BaseAddressSearch_FLOAT(PACKAGENAME *bm,float value,COUNT *gs,ADDRESS BaseAddr,PMAPS pMap)
{
*gs=0;
pid_t pid=getPID(bm);
if (pid == 0)
{
puts("can not get pid");
return 0;
}
PMAPS e,n;
e=n=(PMAPS)malloc(LEN);
PMAPS pBuff=n;
long int c,ADDR;
int handle;
int iCount=0;
char lj[64];
sprintf(lj, "/proc/%d/mem", pid);
handle = open(lj, O_RDWR);
lseek(handle, 0, SEEK_SET);
void *BUF[8];
PMAPS pTemp=pMap;
while (pTemp != NULL)
{
c=(pTemp->taddr-pTemp->addr)/4096;
for (int j=0;j<c;j++)
{
ADDR=pTemp->addr+j*4096+BaseAddr;
pread64(handle,BUF,8,ADDR);
if (*(float*)&BUF[0] == value)
{
iCount++;
*gs+=1;
ResCount+=1;
n->addr=ADDR;
//printf("addr:%lx,val:%d,buff=%d\n",n->addr,value,buff[i]);
if (iCount==1)
{
n->next=NULL;
e=n;
pBuff=n;
}
else
{
n->next=NULL;
e->next=n;
e=n;
}
n=(PMAPS)malloc(LEN);
}
}
pTemp=pTemp->next;
}
close(handle);
return pBuff;
}

void RangeMemorySearch(PACKAGENAME *bm,char *from_value,char *to_value,COUNT *gs,TYPE type)
{
	PMAPS pHead=NULL;
	PMAPS pMap=NULL;
	switch (MemorySearchRange)
	{
		case ALL:
		    pMap=readmaps(bm,ALL);
		    break;
		case B_BAD:
		    pMap=readmaps(bm,B_BAD);
		    break;
		case V:
			pMap = readmaps_v(bm);
			break;
		case C_ALLOC:
		    pMap=readmaps(bm,C_ALLOC);
		    break;
		case C_BSS:
		    pMap=readmaps(bm,C_BSS);
		    break;
		case C_DATA:
		    pMap=readmaps(bm,C_DATA);
		    break;
		case C_HEAP:
		    pMap=readmaps(bm,C_HEAP);
		    break;
		case JAVA_HEAP:
		    pMap=readmaps(bm,JAVA_HEAP);
		    break;
		case A_ANONMYOUS:
		    pMap=readmaps(bm,A_ANONMYOUS);
		    break;
		case CODE_SYSTEM:
		    pMap=readmaps(bm,CODE_SYSTEM);
		    break;
		case STACK:
		    pMap=readmaps(bm,STACK);
		    break;
		case ASHMEM:
		    pMap=readmaps(bm,ASHMEM);
		    break;
		case CODE_APP:
pMap=readmaps_code_app(bm);
break;
case OTHER:
pMap=readmaps_other(bm);
break;
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	if (pMap == NULL)
	{
		puts("map error");
		return (void)0;
	}
	switch (type)
	{
		case QWORD:
		    if (atoi(from_value) > atoi(to_value))
		    	pHead=RangeMemorySearch_QWORD(bm,atoi(to_value),atoi(from_value),gs,pMap);
		    else
		        pHead=RangeMemorySearch_QWORD(bm,atoi(from_value),atoi(to_value),gs,pMap);
		    break;
		case DWORD:
		    if (atof(from_value) > atof(to_value))
		    	pHead=RangeMemorySearch_DWORD(bm,atof(to_value),atof(from_value),gs,pMap);
		    else
		        pHead=RangeMemorySearch_DWORD(bm,atof(from_value),atof(to_value),gs,pMap);
		    break;
		    case WORD:
		    if (atof(from_value) > atof(to_value))
		    	pHead=RangeMemorySearch_WORD(bm,atof(to_value),atof(from_value),gs,pMap);
		    else
		        pHead=RangeMemorySearch_WORD(bm,atof(from_value),atof(to_value),gs,pMap);
		    break;
		    case FLOAT:
            if (atof(from_value) > atof(to_value))
                pHead=RangeMemorySearch_FLOAT(bm,atof(to_value),atof(from_value),gs,pMap);
            else
                pHead=RangeMemorySearch_FLOAT(bm,atof(from_value),atof(to_value),gs,pMap);
            break;            
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	if (pHead == NULL)
	{
		puts("RangeSearch Error");
		return (void)0;
	}
	ResCount=*gs;
	Res=pHead;
}

PMAPS RangeMemorySearch_QWORD(PACKAGENAME *bm,int from_value,int to_value,COUNT *gs,PMAPS pMap)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return NULL;
	}
	*gs=0;
	PMAPS pTemp=NULL;
	pTemp=pMap;
	PMAPS n,e;
	e=n=(PMAPS)malloc(LEN);
	PMAPS pBuff;
	pBuff=n;
	int handle;
	int iCount=0;
	int c;
	char lj[64];
	int buff[1024]={0};
	memset(buff,0,4);
	sprintf(lj, "/proc/%d/mem", pid);
	handle = open(lj, O_RDWR);
	lseek(handle, 0, SEEK_SET);
	while (pTemp != NULL)
	{
		c=(pTemp->taddr-pTemp->addr)/4096;
		for (int j=0;j<c;j++)
		{
		    pread64(handle,buff,0x1000,pTemp->addr+j*4096);
		    for (int i=0;i<1024;i++)
	    	{
		    	if (buff[i] >= from_value && buff[i] <= to_value)
		    	{
		    		iCount++;
		    		*gs+=1;
		    		ResCount+=1;
			    	n->addr=(pTemp->addr)+(j*4096)+(i*4);
			    	if (iCount==1)
		            {
		            	n->next=NULL;
		            	e=n;
		            	pBuff=n;
	            	}
	            	else
	                {
	                	n->next=NULL;
	            		e->next=n;
		            	e=n;
	                }
	            	n=(PMAPS)malloc(LEN);
		    	}
	    	}
		}
		pTemp = pTemp->next;
	}
	free(n);
	close(handle);
	return pBuff;
}


PMAPS RangeMemorySearch_DWORD(PACKAGENAME *bm,int from_value,int to_value,COUNT *gs,PMAPS pMap)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return NULL;
	}
	*gs=0;
	PMAPS pTemp=NULL;
	pTemp=pMap;
	PMAPS n,e;
	e=n=(PMAPS)malloc(LEN);
	PMAPS pBuff;
	pBuff=n;
	int handle;
	int iCount=0;
	int c;
	char lj[64];
	int buff[1024]={0};
	memset(buff,0,4);
	sprintf(lj, "/proc/%d/mem", pid);
	handle = open(lj, O_RDWR);
	lseek(handle, 0, SEEK_SET);
	while (pTemp != NULL)
	{
		c=(pTemp->taddr-pTemp->addr)/4096;
		for (int j=0;j<c;j++)
		{
		    pread64(handle,buff,0x1000,pTemp->addr+j*4096);
		    for (int i=0;i<1024;i++)
	    	{
		    	if (buff[i] >= from_value && buff[i] <= to_value)
		    	{
		    		iCount++;
		    		*gs+=1;
		    		ResCount+=1;
			    	n->addr=(pTemp->addr)+(j*4096)+(i*4);
			    	if (iCount==1)
		            {
		            	n->next=NULL;
		            	e=n;
		            	pBuff=n;
	            	}
	            	else
	                {
	                	n->next=NULL;
	            		e->next=n;
		            	e=n;
	                }
	            	n=(PMAPS)malloc(LEN);
		    	}
	    	}
		}
		pTemp = pTemp->next;
	}
	free(n);
	close(handle);
	return pBuff;
}


PMAPS RangeMemorySearch_WORD(PACKAGENAME *bm,int from_value,int to_value,COUNT *gs,PMAPS pMap)
{
	
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return NULL;
	}
	*gs=0;
	PMAPS pTemp=NULL;
	pTemp=pMap;
	PMAPS n,e;
	e=n=(PMAPS)malloc(LEN);
	PMAPS pBuff;
	pBuff=n;
	int handle;
	int iCount=0;
	int c;
	char lj[64];
	int buff[1024]={0};
	memset(buff,0,4);
	sprintf(lj,"/proc/%d/mem",pid);
	handle = open(lj, O_RDWR);
	lseek(handle, 0, SEEK_SET);
	while (pTemp != NULL)
	{
		c=(pTemp->taddr-pTemp->addr)/4096;
		for (int j=0;j<c;j++)
		{
		    pread64(handle,buff,0x1000,pTemp->addr+j*4096);
		    for (int i=0;i<1024;i++)
	    	{
		    	if (buff[i] >= from_value && buff[i] <= to_value)
		    	{
		    		iCount++;
		    		*gs+=1;
		    		ResCount+=1;
			    	n->addr=(pTemp->addr)+(j*4096)+(i*4);
			    	if (iCount==1)
		            {
		            	n->next=NULL;
		            	e=n;
		            	pBuff=n;
	            	}
	            	else
	                {
	                	n->next=NULL;
	            		e->next=n;
		            	e=n;
	                }
	            	n=(PMAPS)malloc(LEN);
		    	}
	    	}
		}
		pTemp = pTemp->next;
	}
	free(n);
	close(handle);
	return pBuff;
}


PMAPS RangeMemorySearch_FLOAT(PACKAGENAME *bm,float from_value,float to_value,COUNT *gs,PMAPS pMap)
{
pid_t pid=getPID(bm);
if (pid == 0)
{
puts("can not get pid");
return NULL;
}
*gs=0;
PMAPS pTemp=NULL;
pTemp=pMap;
PMAPS n,e;
e=n=(PMAPS)malloc(LEN);
PMAPS pBuff;
pBuff=n;
int handle;
int iCount=0;
int c;
char lj[64];
float buff[1024]={0};
sprintf(lj, "/proc/%d/mem", pid);
handle = open(lj, O_RDWR);
lseek(handle, 0, SEEK_SET);
while (pTemp->next != NULL)
{
c=(pTemp->taddr-pTemp->addr)/4096;
for (int j=0;j<c;j+=1)
{
pread64(handle,buff,0x1000,pTemp->addr+(j*4096));
for (int i=0;i<1024;i+=1)
{
if (buff[i] >= from_value && buff[i] <= to_value)
{
iCount++;
*gs+=1;
ResCount+=1;
n->addr=(pTemp->addr)+(j*4096)+(i*4);
if (iCount==1)
{
n->next=NULL;
e=n;
pBuff=n;
}
else
{
n->next=NULL;
e->next=n;
e=n;
}
n=(PMAPS)malloc(LEN);
}
//printf("buff[%d]=%f\n",l,buff[l]);
//usleep(1);
}
//memset(buff,0,4);
}
pTemp = pTemp->next;
}
free(n);
close(handle);
return pBuff;
}


void MemorySearch(PACKAGENAME *bm,char *value,int *gs,TYPE type)
{
	PMAPS pHead=NULL;
	PMAPS pMap=NULL;
	switch (MemorySearchRange)
	{
		case ALL:
		    pMap=readmaps(bm,ALL);
		    break;
		case B_BAD:
		    pMap=readmaps(bm,B_BAD);
		    break;
		case V:
			pMap = readmaps_v(bm);
			break;
		case C_ALLOC:
		    pMap=readmaps(bm,C_ALLOC);
		    break;
		case C_BSS:
		    pMap=readmaps(bm,C_BSS);
		    break;
		case C_DATA:
		    pMap=readmaps(bm,C_DATA);
		    break;
		case C_HEAP:
		    pMap=readmaps(bm,C_HEAP);
		    break;
		case JAVA_HEAP:
		    pMap=readmaps(bm,JAVA_HEAP);
		    break;
		case A_ANONMYOUS:
		    pMap=readmaps(bm,A_ANONMYOUS);
		    break;
		case CODE_SYSTEM:
		    pMap=readmaps(bm,CODE_SYSTEM);
		    break;
		case STACK:
		    pMap=readmaps(bm,STACK);
		    break;
		case ASHMEM:
		    pMap=readmaps(bm,ASHMEM);
		    break;
		case CODE_APP:
pMap=readmaps_code_app(bm);
break;
case OTHER:
pMap=readmaps_other(bm);
break;
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	if (pMap == NULL)
	{
		puts("map error");
		return (void)0;
	}
	switch (type)
	{
		case QWORD:
		    pHead=MemorySearch_QWORD(bm,atoi(value),gs,pMap);
		    break;
		case DWORD:
		    pHead=MemorySearch_DWORD(bm,atof(value),gs,pMap);
		    break;
		    case FLOAT:
            pHead=MemorySearch_FLOAT(bm,atof(value),gs,pMap);
            break;
            case WORD:
			pHead=MemorySearch_WORD(bm,atoi(value),gs,pMap);
			break;
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	if (pHead == NULL)
	{
		puts("search error");
		return (void)0;
	}
	ResCount=*gs;
	Res=pHead;
}

PMAPS MemorySearch_QWORD(PACKAGENAME *bm,int value,COUNT *gs,PMAPS pMap)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return NULL;
	}
	*gs=0;
	PMAPS pTemp=NULL;
	pTemp=pMap;
	PMAPS n,e;
	e=n=(PMAPS)malloc(LEN);
	PMAPS pBuff;
	pBuff=n;
	int handle;
	int iCount=0;
	int c;
	char lj[64];
	int buff[1024]={0};
	memset(buff,0,4);
	sprintf(lj, "/proc/%d/mem", pid);
	handle = open(lj, O_RDWR);
	lseek(handle, 0, SEEK_SET);
	while (pTemp != NULL)
	{
		c=(pTemp->taddr-pTemp->addr)/4096;
		for (int j=0;j<c;j++)
		{
		    pread64(handle,buff,0x1000,pTemp->addr+j*4096);
		    for (int i=0;i<1024;i++)
	    	{
		    	if (buff[i]==value)
		    	{
		    		iCount++;
		    		*gs+=1;
		    		ResCount+=1;
			    	n->addr=(pTemp->addr)+(j*4096)+(i*4);
			    	//printf("addr:%lx,val:%d,buff=%d\n",n->addr,value,buff[i]);
			    	if (iCount==1)
		            {
		            	n->next=NULL;
		            	e=n;
		            	pBuff=n;
	            	}
	            	else
	                {
	                	n->next=NULL;
	            		e->next=n;
		            	e=n;
	                }
	            	n=(PMAPS)malloc(LEN);
		    	}
	    	}
		}
		pTemp = pTemp->next;
	}
	free(n);
	close(handle);
	return pBuff;
}

PMAPS MemorySearch_WORD(PACKAGENAME *bm,int value, COUNT * gs, PMAPS pMap)
	{
		pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return NULL;
	}
	*gs=0;
		PMAPS pTemp = NULL;
		pTemp = pMap;
		PMAPS n, e;
		e = n = (PMAPS) malloc(LEN);
		PMAPS pBuff;
		pBuff = n;
		int handle;
		int iCount = 0;
		int c;
		char lj[64];
		int buff[1024] = { 0 };
		memset(buff, 0, 4);
		sprintf(lj,"/proc/%d/mem",pid);
		handle = open(lj, O_RDWR);
		lseek(handle, 0, SEEK_SET);
		while (pTemp != NULL)
		{
			c = (pTemp->taddr - pTemp->addr) / 4096;
			for (int j = 0; j < c; j++)
			{
				pread64(handle, buff, 0x1000, pTemp->addr + j * 4096);
				for (int i = 0; i < 1024; i++)
				{
					if (buff[i] == value)
					{
						iCount++;
						*gs += 1;
						ResCount += 1;
						n->addr = (pTemp->addr) + (j * 4096) + (i * 4);
						if (iCount == 1)
						{
							n->next = NULL;
							e = n;
							pBuff = n;
						}
						else
						{
							n->next = NULL;
							e->next = n;
							e = n;
						}
						n = (PMAPS) malloc(LEN);
					}
				}
			}
			pTemp = pTemp->next;
		}
		free(n);
		close(handle);
		return pBuff;
}

PMAPS MemorySearch_DWORD(PACKAGENAME *bm,int value,COUNT *gs,PMAPS pMap)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return NULL;
	}
	*gs=0;
	PMAPS pTemp=NULL;
	pTemp=pMap;
	PMAPS n,e;
	e=n=(PMAPS)malloc(LEN);
	PMAPS pBuff;
	pBuff=n;
	int handle;
	int iCount=0;
	int c;
	char lj[64];
	int buff[1024]={0};
	memset(buff,0,4);
	sprintf(lj, "/proc/%d/mem", pid);
	handle = open(lj, O_RDWR);
	lseek(handle, 0, SEEK_SET);
	while (pTemp != NULL)
	{
		c=(pTemp->taddr-pTemp->addr)/4096;
		for (int j=0;j<c;j++)
		{
		    pread64(handle,buff,0x1000,pTemp->addr+j*4096);
		    for (int i=0;i<1024;i++)
	    	{
		    	if (buff[i]==value)
		    	{
		    		iCount++;
		    		*gs+=1;
		    		ResCount+=1;
			    	n->addr=(pTemp->addr)+(j*4096)+(i*4);
			    	//printf("addr:%lx,val:%d,buff=%d\n",n->addr,value,buff[i]);
			    	if (iCount==1)
		            {
		            	n->next=NULL;
		            	e=n;
		            	pBuff=n;
	            	}
	            	else
	                {
	                	n->next=NULL;
	            		e->next=n;
		            	e=n;
	                }
	            	n=(PMAPS)malloc(LEN);
		    	}
	    	}
		}
		pTemp = pTemp->next;
	}
	free(n);
	close(handle);
	return pBuff;
}

PMAPS MemorySearch_FLOAT(PACKAGENAME *bm,float value,COUNT *gs,PMAPS pMap)
{
pid_t pid=getPID(bm);
if (pid == 0)
{
puts("can not get pid");
return NULL;
}
*gs=0;
PMAPS pTemp=NULL;
pTemp=pMap;
PMAPS n,e;
e=n=(PMAPS)malloc(LEN);
PMAPS pBuff;
pBuff=n;
int handle;
int iCount=0;
int c;
char lj[64];
float buff[1024]={0};
sprintf(lj, "/proc/%d/mem", pid);
handle = open(lj, O_RDWR);
lseek(handle, 0, SEEK_SET);
while (pTemp->next != NULL)
{
c=(pTemp->taddr-pTemp->addr)/4096;
for (int j=0;j<c;j+=1)
{
pread64(handle,buff,0x1000,pTemp->addr+(j*4096));
for (int i=0;i<1024;i+=1)
{
if (buff[i]==value)
{
iCount++;
*gs+=1;
ResCount+=1;
n->addr=(pTemp->addr)+(j*4096)+(i*4);
if (iCount==1)
{
n->next=NULL;
e=n;
pBuff=n;
}
else
{
n->next=NULL;
e->next=n;
e=n;
}
n=(PMAPS)malloc(LEN);
}
//printf("buff[%d]=%f\n",l,buff[l]);
//usleep(1);
}
//memset(buff,0,4);
}
pTemp = pTemp->next;
}
free(n);
close(handle);
return pBuff;
}


void MemoryOffset(PACKAGENAME *bm,char *value,OFFSET offset,COUNT *gs,TYPE type)
{
	PMAPS pHead=NULL;
	switch (type)
	{
		case QWORD:
		    pHead=MemoryOffset_QWORD(bm,atoi(value),offset,Res,gs);
		    break;
		case DWORD:
		    pHead=MemoryOffset_DWORD(bm,atof(value),offset,Res,gs);
		    break;
		    case FLOAT:
            pHead=MemoryOffset_FLOAT(bm,atof(value),offset,Res,gs);
            break;
            case WORD:
			pHead = MemoryOffset_WORD(bm,atoi(value),offset,Res,gs);
			break;
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	if (pHead == NULL)
	{
		puts("offset error");
		return (void)0;
	}
	ResCount=*gs;
	ClearResults();
	Res=pHead;
}

PMAPS MemoryOffset_QWORD(PACKAGENAME *bm,int value,OFFSET offset,PMAPS pBuff,COUNT *gs)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	*gs=0;
	PMAPS pEnd=NULL;
	PMAPS pNew=NULL;
	PMAPS pTemp=pBuff;
	PMAPS BUFF=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	BUFF=pNew;
	int iCount=0,handle;
	char lj[64];
	long int all;
	int *buf=(int *)malloc(sizeof(int));
	int jg;
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	lseek(handle,0,SEEK_SET);
	while (pTemp != NULL)
	{
		all=pTemp->addr+offset;
		pread64(handle,buf,4,all);
		jg=*buf;
		if (jg == value)
		{
			iCount++;
			*gs+=1;
			pNew->addr=pTemp->addr;
			if (iCount == 1)
	    	{
		    	pNew->next=NULL;
		    	pEnd=pNew;
		    	BUFF=pNew;
	    	}
	    	else
	    	{
		    	pNew->next=NULL;
		    	pEnd->next=pNew;
		    	pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
	    	if (ResCount==1)
	    	{
	    		free(pNew);
            	close(handle);
            	return BUFF;
	    	}
		}
		/*else
		{
			printf("jg:%d,value:%d\n",jg,value);
		}*/
		pTemp=pTemp->next;
	}
	free(pNew);
	close(handle);
	return BUFF;
}

PMAPS MemoryOffset_WORD(PACKAGENAME *bm,int value, OFFSET offset, PMAPS pBuff, COUNT * gs)
	{
		pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return NULL;
	}
	*gs=0;
		PMAPS pEnd = NULL;
		PMAPS pNew = NULL;
		PMAPS pTemp = pBuff;
		PMAPS BUFF = NULL;
		pEnd = pNew = (PMAPS) malloc(LEN);
		BUFF = pNew;
		int iCount = 0, handle;
		char lj[64];
		long int all;
		int *buf = (int *)malloc(sizeof(int));
		int jg;
		sprintf(lj,"/proc/%d/mem",pid);
		handle = open(lj, O_RDWR);
		lseek(handle, 0, SEEK_SET);
		while (pTemp != NULL)
		{
			all = pTemp->addr + offset;
			pread64(handle, buf, 4, all);
			jg = *buf;
			if (jg == value)
			{
				iCount++;
				*gs += 1;
				pNew->addr = pTemp->addr;
				if (iCount == 1)
				{
					pNew->next = NULL;
					pEnd = pNew;
					BUFF = pNew;
				}
				else
				{
					pNew->next = NULL;
					pEnd->next = pNew;
					pEnd = pNew;
				}
				pNew = (PMAPS) malloc(LEN);
				if (ResCount == 1)
				{
					free(pNew);
					close(handle);
					return BUFF;
				}
			}
			pTemp = pTemp->next;
		}
		free(pNew);
		close(handle);
		return BUFF;
	}

PMAPS MemoryOffset_DWORD(PACKAGENAME *bm,int value,OFFSET offset,PMAPS pBuff,COUNT *gs)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	*gs=0;
	PMAPS pEnd=NULL;
	PMAPS pNew=NULL;
	PMAPS pTemp=pBuff;
	PMAPS BUFF=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	BUFF=pNew;
	int iCount=0,handle;
	char lj[64];
	long int all;
	int *buf=(int *)malloc(sizeof(int));
	int jg;
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	lseek(handle,0,SEEK_SET);
	while (pTemp != NULL)
	{
		all=pTemp->addr+offset;
		pread64(handle,buf,4,all);
		jg=*buf;
		if (jg == value)
		{
			iCount++;
			*gs+=1;
			pNew->addr=pTemp->addr;
			if (iCount == 1)
	    	{
		    	pNew->next=NULL;
		    	pEnd=pNew;
		    	BUFF=pNew;
	    	}
	    	else
	    	{
		    	pNew->next=NULL;
		    	pEnd->next=pNew;
		    	pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
	    	if (ResCount==1)
	    	{
	    		free(pNew);
            	close(handle);
            	return BUFF;
	    	}
		}
		/*else
		{
			printf("jg:%d,value:%d\n",jg,value);
		}*/
		pTemp=pTemp->next;
	}
	free(pNew);
	close(handle);
	return BUFF;
}

PMAPS MemoryOffset_FLOAT(PACKAGENAME *bm,float value,OFFSET offset,PMAPS pBuff,COUNT *gs)
{
pid_t pid=getPID(bm);
if (pid == 0)
{
puts("can not get pid");
return 0;
}
*gs=0;
PMAPS pEnd=NULL;
PMAPS pNew=NULL;
PMAPS pTemp=pBuff;
PMAPS BUFF=NULL;
pEnd=pNew=(PMAPS)malloc(LEN);
BUFF=pNew;
int iCount=0,handle;
char lj[64];
long int all;
float *buf=(float *)malloc(sizeof(float));
//int buf[16];
float jg;
sprintf(lj,"/proc/%d/mem",pid);
handle=open(lj,O_RDWR);
lseek(handle,0,SEEK_SET);
while (pTemp != NULL)
{
all=pTemp->addr+offset;
pread64(handle,buf,4,all);
jg=*buf;
if (jg == value)
{
iCount++;
*gs+=1;
//printf("FANSPRO,addr:%lx\n",all);
pNew->addr=pTemp->addr;
if (iCount == 1)
{
pNew->next=NULL;
pEnd=pNew;
BUFF=pNew;
}
else
{
pNew->next=NULL;
pEnd->next=pNew;
pEnd=pNew;
}
pNew=(PMAPS)malloc(LEN);
if (ResCount==1)
{
free(pNew);
close(handle);
return BUFF;
}
}
/*else
{
printf("jg:%e,value:%e\n",jg,value);
}*/
pTemp=pTemp->next;
}
free(pNew);
close(handle);
return BUFF;
}


void RangeMemoryOffset(PACKAGENAME *bm,char *from_value,char *to_value,OFFSET offset,COUNT *gs,TYPE type)
{
	PMAPS pHead=NULL;
	switch (type)
	{
		case QWORD:
		    if (atoi(from_value) > atoi(to_value))
		    	pHead=RangeMemoryOffset_QWORD(bm,atoi(to_value),atoi(from_value),offset,Res,gs);
		    else
		        pHead=RangeMemoryOffset_QWORD(bm,atoi(from_value),atoi(to_value),offset,Res,gs);
		    break;
		case DWORD:
		    if (atof(from_value) > atof(to_value))
		    	pHead=RangeMemoryOffset_DWORD(bm,atof(to_value),atof(from_value),offset,Res,gs);
		    else
		        pHead=RangeMemoryOffset_DWORD(bm,atof(from_value),atof(to_value),offset,Res,gs);
		    break;
		    case FLOAT:
            if (atof(from_value) > atof(to_value))
                pHead=RangeMemoryOffset_FLOAT(bm,atof(to_value),atof(from_value),offset,Res,gs);
            else
                pHead=RangeMemoryOffset_FLOAT(bm,atof(from_value),atof(to_value),offset,Res,gs);
            break;
           /* case WORD:
		    if (atof(from_value) > atof(to_value))
		    	pHead=RangeMemoryOffset_WORD(bm,atof(to_value),atof(from_value),offset,Res,gs);
		    else
		        pHead=RangeMemoryOffset_WORD(bm,atof(from_value),atof(to_value),offset,Res,gs);
		    break;*/
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	if (pHead == NULL)
	{
		puts("RangeOffset error");
		return (void)0;
	}
	ResCount=*gs;
	ClearResults();
	Res=pHead;
}

/*PMAPS RangeMemoryOffset_WORD(PACKAGENAME *bm,int from_value,int to_value,OFFSET offset,PMAPS pBuff,COUNT *gs)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	*gs=0;
	PMAPS pEnd=NULL;
	PMAPS pNew=NULL;
	PMAPS pTemp=pBuff;
	PMAPS BUFF=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	BUFF=pNew;
	int iCount=0,handle;
	char lj[64];
	long int all;
	int *buf=(int *)malloc(sizeof(int));
	int jg;
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	lseek(handle,0,SEEK_SET);
	while (pTemp != NULL)
	{
		all=pTemp->addr+offset;
		pread64(handle,buf,4,all);
		jg=*buf;
		if (jg >= from_value && jg <= to_value)
		{
			iCount++;
			*gs+=1;
			pNew->addr=pTemp->addr;
			if (iCount == 1)
	    	{
		    	pNew->next=NULL;
		    	pEnd=pNew;
		    	BUFF=pNew;
	    	}
	    	else
	    	{
		    	pNew->next=NULL;
		    	pEnd->next=pNew;
		    	pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
	    	if (ResCount==1)
	    	{
	    		free(pNew);
            	close(handle);
            	return BUFF;
	    	}
		}
		pTemp=pTemp->next;
	}
	free(pNew);
	close(handle);
	return BUFF;
}
*/

PMAPS RangeMemoryOffset_QWORD(PACKAGENAME *bm,int from_value,int to_value,OFFSET offset,PMAPS pBuff,COUNT *gs)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	*gs=0;
	PMAPS pEnd=NULL;
	PMAPS pNew=NULL;
	PMAPS pTemp=pBuff;
	PMAPS BUFF=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	BUFF=pNew;
	int iCount=0,handle;
	char lj[64];
	long int all;
	int *buf=(int *)malloc(sizeof(int));
	int jg;
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	lseek(handle,0,SEEK_SET);
	while (pTemp != NULL)
	{
		all=pTemp->addr+offset;
		pread64(handle,buf,4,all);
		jg=*buf;
		if (jg >= from_value && jg <= to_value)
		{
			iCount++;
			*gs+=1;
			pNew->addr=pTemp->addr;
			if (iCount == 1)
	    	{
		    	pNew->next=NULL;
		    	pEnd=pNew;
		    	BUFF=pNew;
	    	}
	    	else
	    	{
		    	pNew->next=NULL;
		    	pEnd->next=pNew;
		    	pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
	    	if (ResCount==1)
	    	{
	    		free(pNew);
            	close(handle);
            	return BUFF;
	    	}
		}
		/*else
		{
			printf("jg:%d,value:%d\n",jg,value);
		}*/
		pTemp=pTemp->next;
	}
	free(pNew);
	close(handle);
	return BUFF;
}

PMAPS RangeMemoryOffset_DWORD(PACKAGENAME *bm,int from_value,int to_value,OFFSET offset,PMAPS pBuff,COUNT *gs)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	*gs=0;
	PMAPS pEnd=NULL;
	PMAPS pNew=NULL;
	PMAPS pTemp=pBuff;
	PMAPS BUFF=NULL;
	pEnd=pNew=(PMAPS)malloc(LEN);
	BUFF=pNew;
	int iCount=0,handle;
	char lj[64];
	long int all;
	int *buf=(int *)malloc(sizeof(int));
	int jg;
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	lseek(handle,0,SEEK_SET);
	while (pTemp != NULL)
	{
		all=pTemp->addr+offset;
		pread64(handle,buf,4,all);
		jg=*buf;
		if (jg >= from_value && jg <= to_value)
		{
			iCount++;
			*gs+=1;
			pNew->addr=pTemp->addr;
			if (iCount == 1)
	    	{
		    	pNew->next=NULL;
		    	pEnd=pNew;
		    	BUFF=pNew;
	    	}
	    	else
	    	{
		    	pNew->next=NULL;
		    	pEnd->next=pNew;
		    	pEnd=pNew;
	    	}
	    	pNew=(PMAPS)malloc(LEN);
	    	if (ResCount==1)
	    	{
	    		free(pNew);
            	close(handle);
            	return BUFF;
	    	}
		}
		/*else
		{
			printf("jg:%d,value:%d\n",jg,value);
		}*/
		pTemp=pTemp->next;
	}
	free(pNew);
	close(handle);
	return BUFF;
}


PMAPS RangeMemoryOffset_FLOAT(PACKAGENAME *bm,float from_value,float to_value,OFFSET offset,PMAPS pBuff,COUNT *gs)
{
pid_t pid=getPID(bm);
if (pid == 0)
{
puts("can not get pid");
return 0;
}
*gs=0;
PMAPS pEnd=NULL;
PMAPS pNew=NULL;
PMAPS pTemp=pBuff;
PMAPS BUFF=NULL;
pEnd=pNew=(PMAPS)malloc(LEN);
BUFF=pNew;
int iCount=0,handle;
char lj[64];
long int all;
float *buf=(float *)malloc(sizeof(float));
//int buf[16];
float jg;
sprintf(lj,"/proc/%d/mem",pid);
handle=open(lj,O_RDWR);
lseek(handle,0,SEEK_SET);
while (pTemp != NULL)
{
all=pTemp->addr+offset;
pread64(handle,buf,4,all);
jg=*buf;
if (jg >= from_value && jg <= to_value)
{
iCount++;
*gs+=1;
//printf("FANSPRO,addr:%lx\n",all);
pNew->addr=pTemp->addr;
if (iCount == 1)
{
pNew->next=NULL;
pEnd=pNew;
BUFF=pNew;
}
else
{
pNew->next=NULL;
pEnd->next=pNew;
pEnd=pNew;
}
pNew=(PMAPS)malloc(LEN);
if (ResCount==1)
{
free(pNew);
close(handle);
return BUFF;
}
}
/*else
{
printf("jg:%e,value:%e\n",jg,value);
}*/
pTemp=pTemp->next;
}
free(pNew);
close(handle);
return BUFF;
}

void MemoryWrite(PACKAGENAME *bm,char *value,OFFSET offset,TYPE type)
{
	switch (type)
	{
		case QWORD:
		    MemoryWrite_QWORD(bm,atoi(value),Res,offset);
		    break;
		case DWORD:
		    MemoryWrite_DWORD(bm,atof(value),Res,offset);
		    break;
		    case FLOAT:
           MemoryWrite_FLOAT(bm,atof(value),Res,offset);
           break;
           case WORD:
			MemoryWrite_WORD(bm,atoi(value),Res,offset);
			break;
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	//ClearResults();
}

int MemoryWrite_QWORD(PACKAGENAME *bm,int value,PMAPS pBuff,OFFSET offset)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	PMAPS pTemp=NULL;
	char lj[64];
	int handle;
	pTemp=pBuff;
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	lseek(handle,0,SEEK_SET);
	int i;
	for (i=0;i<ResCount;i++)
	{
		pwrite64(handle,&value,4,pTemp->addr+offset);
		if (pTemp->next != NULL)
	        pTemp=pTemp->next;
	}
	close(handle);
	return 0;
}

int MemoryWrite_WORD(PACKAGENAME *bm,int value, PMAPS pBuff, OFFSET offset)
	{
	   pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
		PMAPS pTemp = NULL;
		char lj[64];
		int handle;
		pTemp = pBuff;
		sprintf(lj,"/proc/%d/mem",pid);
		handle = open(lj, O_RDWR);
		lseek(handle, 0, SEEK_SET);
		int i;
		for (i = 0; i < ResCount; i++)
	{
		pwrite64(handle, &value, 4, pTemp->addr + offset);
		if (pTemp->next != NULL)
			pTemp = pTemp->next;
	}
	return 0;
}

int MemoryWrite_DWORD(PACKAGENAME *bm,int value,PMAPS pBuff,OFFSET offset)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	PMAPS pTemp=NULL;
	char lj[64];
	int handle;
	pTemp=pBuff;
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	lseek(handle,0,SEEK_SET);
	int i;
	for (i=0;i<ResCount;i++)
	{
		pwrite64(handle,&value,4,pTemp->addr+offset);
		if (pTemp->next != NULL)
	        pTemp=pTemp->next;
	}
	close(handle);
	return 0;
}

int MemoryWrite_FLOAT(PACKAGENAME *bm,float value,PMAPS pBuff,OFFSET offset)
{
pid_t pid=getPID(bm);
if (pid == 0)
{
puts("can not get pid");
return 0;
}
PMAPS pTemp=NULL;
char lj[64];
int handle;
pTemp=pBuff;
sprintf(lj,"/proc/%d/mem",pid);
handle=open(lj,O_RDWR);
lseek(handle,0,SEEK_SET);
int i;
for (i=0;i<ResCount;i++)
{
pwrite64(handle,&value,4,pTemp->addr+offset);
if (pTemp->next != NULL)
pTemp=pTemp->next;
}
close(handle);
return 0;
}

void *SearchAddress(PACKAGENAME *bm,ADDRESS addr)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	char lj[64];
	int handle;
	void *buf=malloc(8);
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	lseek(handle,0,SEEK_SET);
	pread64(handle,buf,8,addr);
	close(handle);
	return buf;
}



int WriteAddress(PACKAGENAME *bm,ADDRESS addr,void *value,TYPE type)
{
	pid_t pid=getPID(bm);
	if (pid == 0)
	{
		puts("can not get pid");
		return 0;
	}
	char lj[64];
	int handle;
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	lseek(handle,0,SEEK_SET);
	switch (type)
	{
		case QWORD:
		    pwrite64(handle,(int*)value,4,addr);
		    break;
		case DWORD:
		    pwrite64(handle,(int*)value,4,addr);
		    break;
		    case FLOAT:
            pwrite64(handle,(float*)value,4,addr);
            break;
         case WORD:
		    pwrite64(handle,(int*)value,4,addr);
		    break;		   
		default:
		    printf("\033[32;1mYou Select A NULL Type!\n");
		    break;
	}
	close(handle);
	return 0;
}

int isapkinstalled(PACKAGENAME *bm)
{
	char LJ[128];
	sprintf(LJ,"/data/data/%s/",bm);
	DIR *dir;
	dir=opendir(LJ);
	if (dir == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int isapkrunning(PACKAGENAME *bm)
{
	DIR *dir=NULL;
	struct dirent *ptr=NULL;
	FILE *fp=NULL;
	char filepath[50];			
	char filetext[128];			
	dir = opendir("/proc/");	
	if (dir != NULL)
	{
		while ((ptr = readdir(dir)) != NULL)
		{
			if ((strcmp(ptr->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
				continue;
			if (ptr->d_type != DT_DIR)
				continue;
			sprintf(filepath, "/proc/%s/cmdline", ptr->d_name);	
			fp = fopen(filepath, "r");	
			if (NULL != fp)
			{
				fgets(filetext,sizeof(filetext),fp);
				if (strcmp(filetext,bm)==0)
				{
					closedir(dir);
					return 1;
				}
				fclose(fp);
			}
		}
	}
	closedir(dir);	
	return 0;
}

int uninstallapk(PACKAGENAME *bm)
{
	char ml[128];
	sprintf(ml,"pm uninstall %s",bm);
	system(ml);
	return 0;
}

int installapk(char *lj)
{
	char ml[128];
	sprintf(ml,"pm install %s",lj);
	system(ml);
	return 0;
}

int killprocess(PACKAGENAME *bm)
{
	int pid=getPID(bm);
	if (pid == 0)
	{
		return -1;
	}
	char ml[32];
	sprintf(ml,"kill %d",pid);
	system(ml);
	return 0;
}

char GetProcessState(PACKAGENAME *bm)
{
	/*
	    D. Kondisi tidur yang tidak dapat tidur (biasanya proses IO);
        R sedang berjalan, dalam antrian interruptible;
        S adalah dalam keadaan tidak aktif, keadaan statis;
        T Berhenti atau dilacak, tunda eksekusi;
        W memasuki swap memori (tidak valid sejak kernel 2.6);
        Proses mati X;
        Z Proses zombie tidak ada tetapi tidak bisa dihilangkan sementara waktu;
        W: Tidak ada cukup memori untuk paging
	*/
	int pid=getPID(bm);
	if (pid == 0)
	{
		return 0;
	}
	FILE *fp;
	char lj[64];
	char buff[64];
	char zt;
	char zt1[16];
	sprintf(lj,"/proc/%d/status",pid);
	fp = fopen(lj,"r");
	if (fp == NULL)
	{
		return 0;
	}
	//puts("loop");
	while (!feof(fp))
	{
		fgets(buff,sizeof(buff),fp);
		if (strstr(buff,"State"))
		{
			sscanf(buff,"State: %c",&zt);
			//printf("state:%c\n",zt);
			//sleep(1);
			//puts("emmmm");
			break;
		}
	}
	//putchar(zt);
	//puts(zt2);
	fclose(fp);
	//puts("loopopp");
	return zt;
}

int rebootsystem()
{
	return system("su -c 'reboot'");
}

int PutDate()
{
	return system("date +%F-%T");
}

int GetDate(char *date)
{
	FILE *fp;
	system("date +%F-%T > log.txt");
	if ((fp = fopen("log.txt", "r")) == NULL)
	{
		return 0;
	}
	fscanf(fp,"%s",date);
	remove("log.txt");
	return 1;
}

//void BypassGameSafe()
//{
//}

int killGG()
{
	DIR *dir=NULL;
	DIR *dirGG=NULL;
	struct dirent *ptr=NULL;
	struct dirent *ptrGG=NULL;
	char filepath[256];	
	char filetext[128];	
	dir = opendir("/data/data");		
	int flag=1;
	if (dir != NULL)
	{
		while (flag && (ptr = readdir(dir)) != NULL)
		{
			if ((strcmp(ptr->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
				continue;
			if (ptr->d_type != DT_DIR)
				continue;
			sprintf(filepath, "/data/data/%s/files", ptr->d_name);
			dirGG = opendir(filepath);
			if (dirGG != NULL)
			{
				while ((ptrGG = readdir(dirGG)) != NULL)
				{
					if ((strcmp(ptrGG->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
				        continue;
			        if (ptrGG->d_type != DT_DIR)
			        	continue;
			        if (strstr(ptrGG->d_name,"GG"))
			        {
			        	int pid;
			        	pid = getPID(ptr->d_name);
			        	if (pid == 0)
			        	    continue;
			        	else
			        		killprocess(ptr->d_name);
			        }
				}
			}
		}
	}
	closedir(dir);	
	closedir(dirGG);
	return 0;
}

int killXs()
{
	DIR *dir=NULL;
	struct dirent *ptr=NULL;
	char filepath[256];		
	char filetext[128];	
	dir = opendir("/data/data");
	FILE *fp=NULL;
	if (NULL != dir)
	{
		while ((ptr = readdir(dir)) != NULL)
		{
			if ((strcmp(ptr->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
				continue;
			if (ptr->d_type != DT_DIR)
				continue;
			sprintf(filepath, "/data/data/%s/lib/libxscript.so", ptr->d_name);
			fp=fopen(filepath,"r");
			if (fp == NULL)
			    continue;
			else
			{
				killprocess(ptr->d_name);
			}
		}
	}
	closedir(dir);
	return 0;
}

/*void RecBypassGameSafe(char *bm)
{
	char ml[80];
	sprintf(ml,"chmod 771 /data/data/%s/files",bm);
	system(ml);
}*/
void *FreezeThread(void* a)
{
	int handle;
	int pid;
	pid=getPID(Fbm);
	if (pid == 0)
	{
		puts("Error -1");
		return (void*)0;
	}
	char lj[64];
	int buf_i;
	float buf_f;
	sprintf(lj,"/proc/%d/mem",pid);
	handle=open(lj,O_RDWR);
	if (handle == -1)
	{
		puts("Error -2");
		return (void*)0;
	}
	lseek(handle,0,SEEK_SET);
	PFREEZE pTemp=Pfreeze;
	while (Freeze == 1)
	{
		for (int i=0;i<FreezeCount;i++)
		{
			switch (pTemp->type)
			{
				case QWORD:
				    buf_i=atoi(pTemp->value);
				    pwrite64(handle,&buf_i,4,pTemp->addr);
				    break;
				case DWORD:
				    buf_i=atoi(pTemp->value);
				    pwrite64(handle,&buf_i,4,pTemp->addr);
				    break;
				    case FLOAT:
                    buf_f=atof(pTemp->value);
                    pwrite64(handle,&buf_f,4,pTemp->addr);
                    break;
                    case WORD:
					buf_i = atoi(pTemp->value);
					pwrite64(handle,&buf_i,4,pTemp->addr);
					break;
				default:
				    break;
			}
			pTemp=pTemp->next;
			usleep(delay);
		}
		pTemp=Pfreeze;
	}
	return NULL;
}

PMAPS GetResults()
{
	if (Res == NULL)
	{
		return NULL;
	}
	else
	{
		return Res;
	}
}

int AddFreezeItem_All(PACKAGENAME *bm,char *Value,TYPE type,OFFSET offset)
{
	if (ResCount == 0)
	{
		return -1;
	}
	PMAPS pTemp=Res;
	for (int i=0;i<ResCount;i++)
	{
		switch (type)
		{
			case QWORD:
			    AddFreezeItem(bm,pTemp->addr,Value,QWORD,offset);
			    break;
			case DWORD:
			    AddFreezeItem(bm,pTemp->addr,Value,DWORD,offset);
			    break;
			    case FLOAT:
                AddFreezeItem(bm,pTemp->addr,Value,FLOAT,offset);
                break;
                case WORD:
				AddFreezeItem(bm,pTemp->addr,Value,WORD,offset);
				break;
			default:
			    SetTextColor(COLOR_SKY_BLUE);
		        puts("You Choose a NULL type");
			    break;
		}
		pTemp=pTemp->next;
	}
	return 0;
}

int AddFreezeItem(PACKAGENAME *bm,ADDRESS addr,char *value,TYPE type,OFFSET offset)
{
	switch (type)
	{
		case QWORD:
		    AddFreezeItem_QWORD(bm,addr+offset,value);
		    break;
		case DWORD:
		    AddFreezeItem_DWORD(bm,addr+offset,value);
		    break;
		    case FLOAT:
            AddFreezeItem_FLOAT(bm,addr+offset,value);
            break;
            case WORD:
			AddFreezeItem_WORD(bm,addr+offset,value);
			break;
		default:
		    SetTextColor(COLOR_SKY_BLUE);
		    puts("You Choose a NULL type");
		    break;
	}
	return 0;
}

int AddFreezeItem_WORD(PACKAGENAME *bm,ADDRESS addr, char *value)
{	
	if (FreezeCount == 0)
	{
		Pfreeze = pEnd = pNew = (PFREEZE) malloc(FRE);	// 分配新空间
		pNew->next = NULL;
		pEnd = pNew;
		Pfreeze = pNew;
		pNew->addr = addr;
		pNew->type = WORD;
		pNew->value = value;
		FreezeCount += 1;
	} 
	else 
	{
		pNew = (PFREEZE) malloc(FRE);	// 分配空间
		pNew->next = NULL;
		pEnd->next = pNew;
		pEnd = pNew;
		pNew->addr = addr;
		pNew->type = WORD;
		pNew->value = value;
		FreezeCount += 1;
	}
	return 0;
}

int AddFreezeItem_QWORD(PACKAGENAME *bm,ADDRESS addr,char *value)
{
	if (FreezeCount == 0)
	{
		Pfreeze=pEnd=pNew=(PFREEZE)malloc(FRE);
		pNew->next=NULL;
		pEnd=pNew;
		Pfreeze=pNew;
		pNew->addr=addr;
		pNew->type=QWORD;
		pNew->value=value;
		FreezeCount+=1;
	}
	else
	{
		pNew=(PFREEZE)malloc(FRE);
		pNew->next=NULL;
		pEnd->next=pNew;
		pEnd=pNew;
		pNew->addr=addr;
		pNew->type=QWORD;
		pNew->value=value;
		FreezeCount+=1;
	}
	return 0;
}

int AddFreezeItem_DWORD(PACKAGENAME *bm,ADDRESS addr,char *value)
{
	if (FreezeCount == 0)
	{
		Pfreeze=pEnd=pNew=(PFREEZE)malloc(FRE);
		pNew->next=NULL;
		pEnd=pNew;
		Pfreeze=pNew;
		pNew->addr=addr;
		pNew->type=DWORD;
		pNew->value=value;
		FreezeCount+=1;
	}
	else
	{
		pNew=(PFREEZE)malloc(FRE);
		pNew->next=NULL;
		pEnd->next=pNew;
		pEnd=pNew;
		pNew->addr=addr;
		pNew->type=DWORD;
		pNew->value=value;
		FreezeCount+=1;
	}
	return 0;
}

int AddFreezeItem_FLOAT(PACKAGENAME *bm,ADDRESS addr,char *value)
{
if (FreezeCount == 0)
{
Pfreeze=pEnd=pNew=(PFREEZE)malloc(FRE);
pNew->next=NULL;
pEnd=pNew;
Pfreeze=pNew;
pNew->addr=addr;
pNew->type=FLOAT;
pNew->value=value;
FreezeCount+=1;
}
else
{
pNew=(PFREEZE)malloc(FRE);
pNew->next=NULL;
pEnd->next=pNew;
pEnd=pNew;
pNew->addr=addr;
pNew->type=FLOAT;
pNew->value=value;
FreezeCount+=1;
}
return 0;
}

int RemoveFreezeItem(ADDRESS addr)
{
	PFREEZE pTemp=Pfreeze;
	PFREEZE p1=NULL;
	PFREEZE p2=NULL;
	for (int i=0;i<FreezeCount;i++)
	{
		p1=pTemp;
		p2=pTemp->next;
		if (pTemp->addr == addr)
		{
			p1->next=p2;
			free(pTemp);
			FreezeCount-=1;
		}
		pTemp=p2;
	}
	return 0;
}

int RemoveFreezeItem_All()
{
	PFREEZE pHead=Pfreeze;
	PFREEZE pTemp=pHead;
	int i;
	for (i=0;i<FreezeCount;i++)
	{
		pTemp=pHead;
		pHead=pHead->next;
		free(pTemp);
		FreezeCount-=1;
	}
	free(Pfreeze);
	FreezeCount-=1;
	return 0;
}

int StartFreeze(PACKAGENAME *bm)
{
	if (Freeze == 1)
	{
		return -1;
	}
	int a;
	strcpy(Fbm,bm);
	Freeze=1;
	pthread_create(&pth,NULL,FreezeThread,NULL);
	return 0;
}

int StopFreeze()
{
	Freeze=0;
	return 0;
}

int SetFreezeDelay(long int De)
{
	delay=De;
	return 0;
}

int PrintFreezeItems()
{
	PFREEZE pTemp=Pfreeze;
	for (int i=0;i<FreezeCount;i++)
	{
		printf("FreezeAddr:%lx,type:%s,value:%s\n",pTemp->addr,pTemp->type == QWORD ? "QWORD":"DWORD",pTemp->value);
		pTemp=pTemp->next;
	}
	return 0;
}
