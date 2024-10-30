#include "Includes.h"
#include "obfuscate.h"
#include "Tools.h"
#include "Iconcpp.h"
#include "Font.h"
#include "Icon.h"
#include "fake_dlfcn.h"
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "StrEnc.h"
#include "Spoof.h"
#include "plthook.h"
#include "Items.h"
#include "json.hpp"
#include "CN.h"
#include "Color.h"
#include "KittyMemory/MemoryPatch.h"
#include <stdio.h>
#include "Includes/conio.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include "SDK.hpp"
#include "foxcheats/include/ScanEngine.hpp"
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"
#include "Includes/Logger.h"
#include "Offset64.h"
#include "RandomColor-DARKESPYT.h"
#include "Includes/Utils.h"
#include "Includes/Toast.hpp"
#include "Includes/Macros.h"
#include <list>
#include <vector>
#include <cstring>
#include <cstdio>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/wait.h>
#include <sys/limits.h>
#include <sys/mman.h>

#define targetLibName OBFUSCATE("libanort.so")
#define targetLibName OBFUSCATE("libanogs.so")

using json = nlohmann::json;
using namespace kFox;
using namespace SDK;

static std::string EXP, name, device, status, floating, ESP, AIM, BulletTrack, Memory, Float_Text, Setting,up_version, OP_Err, bypass, updated;
json items_data;
std::string g_Token, g_Auth;
bool bValid = false;
uintptr_t ANOGS, UE4;
android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
bool isMagic, isHit, Bypass = false, FlagBan = true, Flash, Activeesp, HIDEESP, initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;

static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); // Auto 
        sleep(1);
    }
    if (GEngine) {
        auto ViewPort = GEngine->GameViewport;

        if (ViewPort) {
            return ViewPort->World;
        }
    }
    return 0;
}

TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();
}

std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();

    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();

    struct GovnoArray {
        uintptr_t base;
        int32_t count;
        int32_t max;
    };
    
    static thread_local GovnoArray Actors{};
    Actors = *(((GovnoArray*(*)(uintptr_t))(UE4 + GetActorArray_Offset))(reinterpret_cast<uintptr_t>(PersistentLevel)));

    if (Actors.count <= 0) {
        return {};
    }

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.count; i++) {
        auto Actor = *(uintptr_t *) (Actors.base + (i * sizeof(uintptr_t)));
        if (Actor) {
            actors.push_back(reinterpret_cast<AActor *const>(Actor));
        }
    }
    return actors;
}

enum EAimTarget {
    Head = 0,
    Chest = 1
};

enum EAimTrigger {
    None = 0,
    Shooting = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};

std::map<int, bool> Items;

struct sConfig {
    struct sPlayerESP {
        bool Line, Box, Health, Skeleton, Name, Distance, TeamID, Vehicle, VehicleFuel, VehicleHP, NoBot, Grenade, LootBox, Bp;
    };

    sPlayerESP PlayerESP{0};

    struct sAimMenu {
        bool Enable, AimBot, COMP, IgnoreKnocked, IgnoreBot = true, VisCheck;
        float Cross, Crosss, Size, Meter, Recc, Line, FovEdit;
        EAimTarget Target;
        EAimTrigger Trigger;
    };
    sAimMenu SilentAim{0};
    sAimMenu AimBot{0};
    sAimMenu BulletTracking{0};
    
int Materrs;
    struct sHighRisk {
        bool Shake, Recoil, Instant, HitEffect, Flash, IPad, Parachute, Ammo, Switch, AimB, Damage;
    };
    sHighRisk HighRisk{0};

    struct sOTHER {
        bool FPS, HIDEESP = true;
    };
    sOTHER OTHER{0};
    
    struct sColorsESP {
        float *Line, *Box, *Name, *Distance, *Skeleton, *SkeletonVisible, *Fov, *Fov2, *Vehicle;
    };
    sColorsESP ColorsESP{0};
};
sConfig Config{0};

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};

struct sRegion {
    uintptr_t start, end;
};

std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}

typedef void (*ImGuiDemoMarkerCallback)(const char* file, int line, const char* section, void* user_data);
extern ImGuiDemoMarkerCallback  GImGuiDemoMarkerCallback;
extern void* GImGuiDemoMarkerCallbackUserData;
ImGuiDemoMarkerCallback         GImGuiDemoMarkerCallback = NULL;
void* GImGuiDemoMarkerCallbackUserData = NULL;
#define IMGUI_DEMO_MARKER(section)  do { if (GImGuiDemoMarkerCallback != NULL) GImGuiDemoMarkerCallback(__FILE__, __LINE__, section, GImGuiDemoMarkerCallbackUserData); } while (0)
ImGuiStyle& style = ImGui::GetStyle();
static ImGuiStyle ref_saved_style;

std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}

int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}

FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);
    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;
    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;
    return newViewAngle;
}

FRotator ToRotator(FRotator inRot) {
    FRotator outRot = inRot;
    if (outRot.Pitch > 180)
        outRot.Pitch -= 360;
    if (outRot.Pitch < -180)
        outRot.Pitch += 360;
    if (outRot.Pitch < -75.f)
        outRot.Pitch = -75.f;
    else if (outRot.Pitch > 75.f)
        outRot.Pitch = 75.f;
    while (outRot.Yaw < -180.0f)
        outRot.Yaw += 360.0f;
    while (outRot.Yaw > 180.0f)
        outRot.Yaw -= 360.0f;
    return outRot;
}

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)

bool isInsideFOV(int x, int y) {
if (Config.AimBot.Cross && Config.BulletTracking.FovEdit)
        return true;
    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int red = Config.AimBot.Cross;
    int rad = Config.BulletTracking.FovEdit;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
    return (x - circle_y) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= red * red;
}

auto GetTargetForAimBot() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();
    auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;
    if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;
            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
                auto Target = (ASTExtraPlayerCharacter *) Actor;
                float dist = localPlayer->GetDistanceTo(Target) / 150.0f;    
                if (dist > Config.AimBot.Meter)
                    continue;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.AimBot.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.AimBot.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }

                if (Config.AimBot.IgnoreBot) {
                    if (Player->bEnsure)
                        continue;
                }
                
                if (Config.BulletTracking.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.BulletTracking.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                if (Config.BulletTracking.IgnoreBot) {
                    if (Player->bEnsure)
                        continue;
                }

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;
                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
                        float dist = FVector2D::Distance(v2Middle, v2Loc);
                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        }
    }
    return result;
}

auto GetTargetByPussy() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();
    auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;
    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.SilentAim.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.SilentAim.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                if (Config.SilentAim.IgnoreBot) {
                    if (Player->bEnsure)
                        continue;
                }

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;
                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
                        float dist = FVector2D::Distance(v2Middle, v2Loc);
                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        }
    }
    return result;
}


const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
            break;
        default:
            return "Vehicle";
            break;
    }
    return "Vehicle";
}

void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;
bool qwcifqvs86y8fify = false;
void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {
    if (qwcifqvs86y8fify) {
        qwcifqvs86y8fify = false;
        g_LocalController->bIsPressingFireBtn = false;
        thiz->OwnerShootWeapon->StopFire(EFreshWeaponStateType::FreshWeaponStateType_Idle);
    }
    if (Config.BulletTracking.Enable) {
        ASTExtraPlayerCharacter *Target = GetTargetByPussy();
        if (Target) {
            bool triggerOk = false;
            if (Config.BulletTracking.Trigger != EAimTrigger::None) {
                if (Config.BulletTracking.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.BulletTracking.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.BulletTracking.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.BulletTracking.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.BulletTracking.Target == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
                }
                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();
                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, start);
                    FRotator sex = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                    rot = sex;
                }
            }
        }
    }

    if (Config.SilentAim.Enable) {
        ASTExtraPlayerCharacter *Target = GetTargetByPussy();
        if (Target) {
            bool triggerOk = false;
            if (Config.SilentAim.Trigger != EAimTrigger::None) {
                if (Config.SilentAim.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.SilentAim.Target == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
                }
                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();
                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, start);
                    FRotator sex = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                    rot = sex;
                }
            }
        }
    }
    return orig_shoot_event(thiz, start, rot, weapon, unk1);
}

void DrawBoxEnemy(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, int color) {
    draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}

class FPSCounter {
    protected:
        unsigned int m_fps;
        unsigned int m_fpscount;
        long m_fpsinterval;
    
    public:
        FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {}

    void update() {
        m_fpscount++;
        if (m_fpsinterval < time(0)) {
            m_fps = m_fpscount;
            m_fpscount = 0;
            m_fpsinterval = time(0) + 1;
        }
    }

    unsigned int get() const {
        return m_fps;
    }
};

FPSCounter fps;
void DrawBoxEnemy(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, float rounding, int color) {
    draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}
void Box4Line(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
    // top
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
    // bottom
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}

int DARKESPYT_FLOAT(long int addr, float value) {
    int handle = open("/proc/self/mem", O_RDWR);
    if (handle == -1) {
        std::terminate();
    }
    pwrite64(handle, &value, 4, addr);
    close(handle);
    return 0;
}

void DrawESP(ImDrawList *draw)
{
    if (g_Token.empty() && g_Auth.empty() && g_Token != g_Auth)
        return;
    
    if (!g_Token.empty() && !g_Auth.empty() && g_Token == g_Auth) {
        if(Bypass)
        {
            draw->AddText({((float) density / 15.0f), 50}, IM_COL32(0,255,0, 255),"Online Bypass is Running....");
        }
        
        if(Config.HighRisk.Flash && g_LocalPlayer->Energy.EnergyCurrent >= 60.0f)
        {
            g_LocalPlayer->StandHalfHeight = 80.0f;
            g_LocalPlayer->CrouchHalfHeight = 55.0f;
            MemoryPatch::createWithHex("libUE4.so", 0x50E470, "00 00 00 00"). Modify();
        }
        
        //draw->AddText(NULL, ((float) density / 20.0f),{(float) glWidth / 2 + glWidth / 26,15}, IM_COL32(0,255,0, 250),"EXPIRY TIME -");/*CREDIT : @DARKESPYT*/
        draw->AddText(NULL, ((float) density / 20.0f),{(float) glWidth / 150 + glWidth / 40,650}, IM_COL32(0,255,0, 250),"Expire Time  : ");/*CREDIT : @DARKESPYT*/
        draw->AddText(NULL, ((float) density / 20.0f),{(float) glWidth / 12 + glWidth / 40,650}, IM_COL32(0,255,0, 250),EXP.c_str());/*CREDIT : @DARKESPYT*/
        draw->AddText(NULL, ((float) density / 20.0f),{(float) glWidth / 150 + glWidth / 40,600},IM_COL32(0,255,0, 250),"DEVICE SLOT  - ");/*CREDIT : @DARKESPYT*/
        draw->AddText(NULL, ((float) density / 20.0f),{(float) glWidth / 38 + glWidth / 10,600},IM_COL32(0,255,0, 250),device.c_str());/*CREDIT : @DARKESPYT*/
        draw->AddText(NULL, ((float) density / 20.0f), {(float) glWidth / 150 + glWidth / 40,625}, IM_COL32(0,255,0, 250),"MOD STATUS  : ");/*CREDIT : @DARKESPYT*/
        draw->AddText(NULL, ((float) density / 20.0f), {(float) glWidth / 10 + glWidth / 40,625}, IM_COL32(0,255,0, 250),status.c_str());/*CREDIT : @DARKESPYT*/
        draw->AddText({((float) density / 15.0f), 80}, IM_COL32(255,0,0, 255),floating.c_str());/*CREDIT : @DARKESPYT*/
        std::string credit = "Telegram: @DARKESPYT";
        auto textSize = ImGui::CalcTextSize2(credit.c_str(), 0, ((float) density / 15.0f));
        draw->AddText(NULL, ((float) density / 15.0f), {((float) glWidth / 2) - (textSize.x / 2), 680}, IM_COL32(255, 0, 0, 255), credit.c_str());
        auto Actors = getActors();
        int totalEnemies = 0, totalBots = 0;
        ASTExtraPlayerCharacter *localPlayer = 0;
        ASTExtraPlayerController *localController = 0;
        std::string sFPS = "FPS: ";
        sFPS += std::to_string(fps.get());
        
        if (Config.OTHER.FPS) {
            draw->AddText({((float) density / 10.0f), 40}, IM_COL32(255, 000, 000, 255), sFPS.c_str());
        }

        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
                localController = (ASTExtraPlayerController *) Actor;
                break;
            }
        }
        
        //draw->AddText(NULL, ((float) density / 18.0f),{(float) glWidth / 200 + glWidth / 40,560}, IM_COL32(255, 255, 0, 255),MOD_STATUS.c_str());
        if (localController) {
            for (int i = 0; i < Actors.size(); i++) {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor))
                    continue;

                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                    if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey ==
                        localController->PlayerKey) {
                        localPlayer = (ASTExtraPlayerCharacter *) Actor;
                        break;
                    }
                }
            }

            if (localPlayer) {
                if (localPlayer->PartHitComponent) {
                    auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                    for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
                        ConfigCollisionDistSqAngles[j].Angle = 90.0f;
                    }
                    localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
                }

                if (Config.HighRisk.Recoil || Config.HighRisk.Shake || Config.HighRisk.Instant) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                if (Config.HighRisk.Recoil) {
                                    memset(&ShootWeaponEntityComp->RecoilInfo, 0, sizeof(FSRecoilInfo));
                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;
                                    memset(&ShootWeaponEntityComp->DeviationInfo, 0, sizeof(FSDeviation));
                                    ShootWeaponEntityComp->ShotGunCenterPerc = 0.0f;
                                    ShootWeaponEntityComp->ShotGunVerticalSpread = 0.0f;
                                    ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.0f;
                                    ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                    ShootWeaponEntityComp->GameDeviationAccuracy = 0.0f;
                                    ShootWeaponEntityComp->CrossHairInitialSize = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstSpeed = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 0.0f;
                                    ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 0.0f;
                                    ShootWeaponEntityComp->RecoilKickADS = 0.0f;
                                }

                                if (Config.HighRisk.Shake) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                }

                                if (Config.HighRisk.HitEffect) {
                                    ShootWeaponEntityComp->ExtraHitPerformScale = 16.0f;
                                    ShootWeaponEntityComp->HUDAlphaDecreaseSpeedScale = -400.0f;
                                }
                                if (Config.HighRisk.Switch) {
                                    ShootWeaponEntityComp->SwitchFromBackpackToIdleTime = 0.0f;
                                    ShootWeaponEntityComp->SwitchFromIdleToBackpackTime = 0.0f;
                                }

                                if (Config.HighRisk.Instant) {
                                    ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;
                                }
                                if (Config.HighRisk.Damage) {
                                    ShootWeaponEntityComp->BulletMomentum = 10000000.0f;
                                    ShootWeaponEntityComp->BulletRange = 10000000.0f;
                                    ShootWeaponEntityComp->BaseImpactDamage = 100000000.0f;
                                    ShootWeaponEntityComp->MaxDamageRate = 100000000.0f;
                                    ShootWeaponEntityComp->BulletTrackDistanceFix = 100000000.0f;
                                }
                                
                                if (Config.HighRisk.AimB) {
                                    ShootWeaponEntityComp->WeaponAimFOV = 10000000.0f;
                                    ShootWeaponEntityComp->WeaponAimInTime = 10000000.0f;
                                }
                            }
                        }
                    }
                }
                
                static bool bShooting = false;
                
                if (Config.SilentAim.Enable) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                        if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
                            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                            if (CurrentWeaponReplicated) {
                                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                if (ShootWeaponComponent) {
                                    int shoot_event_idx = 163;
                                    auto VTable = (void **) ShootWeaponComponent->VTable;
                                    auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
                                      static_assert(PAGE_SIZE == 4096);
                                      constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
                                      void* start = reinterpret_cast<void*>(addr & -page_size);
                                      uintptr_t end = (addr + len + page_size - 1) & -page_size;
                                      return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
                                    };
                                    if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
                                        orig_shoot_event = decltype(orig_shoot_event)(
                                                VTable[shoot_event_idx]);
                                        f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
                                        VTable[shoot_event_idx] = (void *) shoot_event;
                                    }
                                }
                            }
                        }
                    }
                }
                
                if (Config.BulletTracking.Enable) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                        if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
                            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                            if (CurrentWeaponReplicated) {
                                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                if (ShootWeaponComponent) {
                                    int shoot_event_idx = 165;
                                    auto VTable = (void **) ShootWeaponComponent->VTable;
                                    auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
                                      static_assert(PAGE_SIZE == 4096);
                                      constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
                                      void* start = reinterpret_cast<void*>(addr & -page_size);
                                      uintptr_t end = (addr + len + page_size - 1) & -page_size;
                                      return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
                                    };
                                    if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
                                        orig_shoot_event = decltype(orig_shoot_event)(
                                                VTable[shoot_event_idx]);
                                        f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
                                        VTable[shoot_event_idx] = (void *) shoot_event;
                                    }
                                }
                            }
                        }
                    }
                }

                if (Config.AimBot.Enable) {
                    ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
                    if (Target) {
                        bool triggerOk = false;
                        if (Config.AimBot.Trigger != EAimTrigger::None) {
                            if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                                triggerOk = localPlayer->bIsWeaponFiring;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                                triggerOk = localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                                triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                                triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
                            }
                        } else triggerOk = true;
                        
                        if (triggerOk) {
                            FVector targetAimPos = Target->GetBonePos("Head", {});
                            if (Config.AimBot.Target == EAimTarget::Chest) {
                                targetAimPos.Z -= 25.0f;
                            }

                            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                            if (WeaponManagerComponent) {
                                auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                if ((int) propSlot.GetValue() >= 1 &&
                                    (int) propSlot.GetValue() <= 3) {
                                    auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                    if (CurrentWeaponReplicated) {
                                        auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                        if (ShootWeaponComponent) {
                                            UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                            if (ShootWeaponEntityComponent) {
                                                ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                                if (CurrentVehicle) {
                                                    FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                                } else {
                                                    FVector Velocity = Target->GetVelocity();
                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                                                }
                                                
                                                if (Config.AimBot.COMP) {
                                                    if (g_LocalPlayer->bIsGunADS) {
                                                        if (g_LocalPlayer->bIsWeaponFiring) {
                                                            float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                                            targetAimPos.Z -= dist * float(Config.AimBot.Size);
                                                        }  
                                                    }
                                                }
                                                localController->SetControlRotation(ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos), "");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                for (auto &i : Actors) {
                    auto Actor = i;
                    if (isObjectInvalid(Actor))
                        continue;

                    if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                        auto Actor = i;
                    if (isObjectInvalid(Actor))
                        continue;
                    
                    long PlayerBoxClrCf = IM_COL32(254, 0, 0, 255);
                    long PlayerBoxClrCf2 = IM_COL32(254, 0, 0, 25);
                    auto Player = (ASTExtraPlayerCharacter *) Actor;
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                        PlayerBoxClrCf = IM_COL32(255, 119, 0, 255);
                        PlayerBoxClrCf2 = IM_COL32(255, 119, 0, 25);
                    }

                    float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                    
                    if (Player->PlayerKey == localController->PlayerKey)
                        continue;

                    if (Player->TeamID == localController->TeamID)
                        continue;

                    if (Player->bDead)
                        continue;

                    if (!Player->Mesh)
                        continue;

                    if (Player->bEnsure)
                    {
                        totalBots++;
                        PlayerBoxClrCf = IM_COL32(255, 255, 255, 255);
                        PlayerBoxClrCf2 = IM_COL32(255, 255, 255, 25);
                    } else {
                        totalEnemies++;
                    }
                    
                    if (Config.PlayerESP.NoBot)
                        if (Player->bEnsure)
                            continue;

                    float magic_number = (Distance);
                    float mx = (glWidth / 4) / magic_number;
                    float healthLength = glWidth / 21;
                    if (healthLength < mx)
                        healthLength = mx;

                    auto HeadPos = Player->GetBonePos("Head", {});
                    ImVec2 HeadPosSC;
                    auto RootPos = Player->GetBonePos("Root", {});
                    ImVec2 RootPosSC;
                    auto upper_r = Player->GetBonePos("upperarm_r", {});
                    ImVec2 upper_rPoSC;
                    auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
                    ImVec2 lowerarm_rPoSC;
                    auto hand_r = Player->GetBonePos("hand_r", {});
                    ImVec2 hand_rPoSC;
                    auto upper_l = Player->GetBonePos("upperarm_l", {});
                    ImVec2 upper_lPoSC;
                    auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
                    ImVec2 lowerarm_lSC;
                    auto hand_l = Player->GetBonePos("hand_l", {});
                    ImVec2 hand_lPoSC;
                    auto thigh_l = Player->GetBonePos("thigh_l", {});
                    ImVec2 thigh_lPoSC;
                    auto calf_l = Player->GetBonePos("calf_l", {});
                    ImVec2 calf_lPoSC;
                    auto foot_l = Player->GetBonePos("foot_l", {});
                    ImVec2 foot_lPoSC;
                    auto thigh_r = Player->GetBonePos("thigh_r", {});
                    ImVec2 thigh_rPoSC;
                    auto calf_r = Player->GetBonePos("calf_r", {});
                    ImVec2 calf_rPoSC;
                    auto foot_r = Player->GetBonePos("foot_r", {});
                    ImVec2 foot_rPoSC;
                    auto neck_01 = Player->GetBonePos("neck_01", {});
                    ImVec2 neck_01PoSC;
                    auto Pelvis = Player->GetBonePos("pelvis", {});
                    ImVec2 PelvisPoSC;

                    bool IsVisible = localController->LineOfSightTo(Player, {0, 0, 0}, true);
                    int SCOLOR, SCOLOR2;
                    long curHP_Color = GetRandomColorByIndexX(Player->TeamID, 120);
                    //Random Color For Name

                    if (IsVisible)
                    {
                        SCOLOR = ToColor(Config.ColorsESP.SkeletonVisible);
                        SCOLOR2 = IM_COL32(0, 255, 0, 255);
                    }else{
                        SCOLOR = ToColor(Config.ColorsESP.Skeleton);
                        SCOLOR2 = IM_COL32(255, 255, 255, 255);
                    }

                    if (W2S(HeadPos, (FVector2D *) &HeadPosSC) && W2S(upper_r, (FVector2D *) &upper_rPoSC) && W2S(upper_l, (FVector2D *) &upper_lPoSC) && W2S(lowerarm_r, (FVector2D *) &lowerarm_rPoSC ) && W2S(hand_r, (FVector2D *) &hand_rPoSC ) && W2S(lowerarm_l, (FVector2D *) &lowerarm_lSC ) && W2S(hand_l, (FVector2D *) &hand_lPoSC ) && W2S(thigh_l, (FVector2D *) &thigh_lPoSC ) && W2S(calf_l, (FVector2D *) &calf_lPoSC ) && W2S(foot_l, (FVector2D *) &foot_lPoSC ) && W2S(thigh_r, (FVector2D *) &thigh_rPoSC ) && W2S(calf_r, (FVector2D *) &calf_rPoSC ) && W2S(foot_r, (FVector2D *) &foot_rPoSC ) && W2S(neck_01, (FVector2D *) &neck_01PoSC ) && W2S(Pelvis, (FVector2D *) &PelvisPoSC ) && W2S(RootPos, (FVector2D *) &RootPosSC))
                    {
                        if (totalEnemies > 0 || totalBots > 0) {
                            if (Config.PlayerESP.Line) {
                                draw->AddLine({(float) glWidth / 2, 0}, ImVec2(HeadPosSC.x, HeadPosSC.y - 55.0f), SCOLOR2, 1.5f);
                            }
                            
                            if (Config.PlayerESP.Box) {
                                float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                float boxWidth = boxHeight * 0.65f;
                                ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y};
                                ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};
                                draw->AddRect(vStart, vEnd, PlayerBoxClrCf, 1.5f, 240, 1.7f);
                                draw->AddRectFilled(vStart, vEnd, PlayerBoxClrCf2, 1.5f, 240);
                            }
                            
                            if (Config.PlayerESP.Skeleton) {
                                draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, neck_01PoSC, SCOLOR, 1.5f);
                                draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, neck_01PoSC, SCOLOR, 1.5f);
                                draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, lowerarm_rPoSC, SCOLOR, 1.5f);
                                draw->AddLine({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, hand_rPoSC, SCOLOR , 1.5f);
                                draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, lowerarm_lSC, SCOLOR, 1.5f);
                                draw->AddLine({lowerarm_lSC.x, lowerarm_lSC.y}, hand_lPoSC, SCOLOR, 1.5f);
                                draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, thigh_lPoSC, SCOLOR, 1.5f);
                                draw->AddLine({thigh_lPoSC.x, thigh_lPoSC.y}, calf_lPoSC, SCOLOR, 1.5f);
                                draw->AddLine({calf_lPoSC.x, calf_lPoSC.y}, foot_lPoSC, SCOLOR, 1.5f);
                                draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, calf_rPoSC, SCOLOR, 1.5f);
                                draw->AddLine({calf_rPoSC.x, calf_rPoSC.y}, foot_rPoSC, SCOLOR, 1.5f);
                                draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, PelvisPoSC, SCOLOR, 1.5f);
                                draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, HeadPosSC, SCOLOR, 1.5f);
                            }

                            if (Config.PlayerESP.Health) {
                                float dist = localPlayer->GetDistanceTo(Player) / 100.0f;
                                int CurHP = (int) std::max(0, std::min((int) Player->Health,100));
                                int MaxHP = 100;
                                long DARKESPYTRBG = IM_COL32(255, 255, 255, 200);
                                draw->AddRectFilled({HeadPosSC.x - 95 - dist * .0f, HeadPosSC.y - 28.5 - dist * .0f}, {HeadPosSC.x - 95 - dist * .0f + (1.9 * CurHP), HeadPosSC.y - 29 - dist * .0f},DARKESPYTRBG, 1, 0);
                                if (Player->Health == 0.0f && !Player->bDead) {                               
                                      CurHP = Player->NearDeathBreath;                                   
                                      if (Player->NearDeatchComponent) {
                                             MaxHP = 100;
                                             draw->AddRectFilled({HeadPosSC.x - 95 - dist * .0f, HeadPosSC.y - 28.5 - dist * .0f}, {HeadPosSC.x - 95 - dist * .0f + (1.9 * CurHP), HeadPosSC.y - 29 - dist * .0f},IM_COL32(255, 0, 0, 200), 1, 0);
                                      }
                                }
                            }

                            if (Config.PlayerESP.TeamID) {
                                auto TeamID = Player->TeamID;
                                float dist = localPlayer->GetDistanceTo(Player) / 100.0f;
                                draw->AddRectFilled( {HeadPosSC.x - 95 - dist * .0f, HeadPosSC.y - 58 - dist * .0f}, {HeadPosSC.x - 45 - dist * .0f, HeadPosSC.y - 29 - dist * .0f}, curHP_Color, 1, 0);
                                draw->AddRectFilled( {HeadPosSC.x - 95 - dist * .0f, HeadPosSC.y - 58 - dist * .0f}, {HeadPosSC.x + 95 - dist * .0f, HeadPosSC.y - 29 - dist * .0f},  curHP_Color, 1, 0);
                                draw->AddTriangleFilled(ImVec2(HeadPosSC.x + 20 / 2, HeadPosSC.y - 28.5 ), ImVec2(HeadPosSC.x - 20 / 2, HeadPosSC.y - 28.5), ImVec2(HeadPosSC.x + 0 / 2, HeadPosSC.y - 11), curHP_Color);   
                                std::string s;
                                auto textSize = ImGui::CalcTextSize(s.c_str(), 0, 25);
                                if (Player->TeamID < 10 ) {
                                    s +=" 0";
                                    s += std::to_string(Player->TeamID);
                                    draw->AddText(NULL, 25, ImVec2(HeadPosSC.x - 89 - (textSize.x / 2), HeadPosSC.y - 56), IM_COL32(255, 255, 255, 255), s.c_str());
                                } else if (Player->TeamID < 100) {
                                    s+=" ";
                                    s += std::to_string(Player->TeamID);
                                    draw->AddText(NULL, 25, ImVec2(HeadPosSC.x - 89 - (textSize.x / 2), HeadPosSC.y - 56), IM_COL32(255, 255, 255, 255), s.c_str());
                                } else {
                                    s += std::to_string(Player->TeamID);
                                    draw->AddText(NULL, 25, ImVec2(HeadPosSC.x - 89 - 1 - (textSize.x / 2), HeadPosSC.y - 56), IM_COL32(255, 255, 255, 255), s.c_str());
                                }
                            }

                            if (Config.PlayerESP.Name) {
                                std::string name;                                
                                if (Player->bEnsure) {
                                    name += " Bot";
                                } else {
                                    name = Player->PlayerName.ToString();
                                }
                                draw->AddText(NULL, 0, ImVec2(HeadPosSC.x - 41, HeadPosSC.y - 53), IM_COL32(255, 255, 255, 255), name.c_str());
                            }

                            if (Config.PlayerESP.Distance) {
                                std::string s;
                                s += "[ ";
                                s += std::to_string((int)Distance);
                                s += " ]";
                                auto textSize = ImGui::CalcTextSize(s.c_str(), 0, ((float) density / 20.0f));
                                draw->AddText(NULL, ((float) density / 20.0f), {HeadPosSC.x - (textSize.x / 2), HeadPosSC.y - 80}, IM_COL32(255, 255, 255, 255), s.c_str());
                            }
                        }
                    }
                }
                
                if (Config.PlayerESP.LootBox) {
                    if (i->IsA(APickUpListWrapperActor::StaticClass())) {
                        auto DeadBox = (APickUpListWrapperActor *) i;
                        auto RootComponent = DeadBox->RootComponent;
                        if (!RootComponent)
                            continue;
                        float Distance = DeadBox->GetDistanceTo(localPlayer) / 100.f;
                        FVector2D DeadBoxPos;
                        if (W2S(DeadBox->K2_GetActorLocation(), &DeadBoxPos)) {
                            std::string s = "Loot Box";
                            s += " (";
                            s += std::to_string((int) Distance);
                            s += ")";
                            draw->AddText(NULL, ((float) density / 25.0f), {DeadBoxPos.X, DeadBoxPos.Y}, IM_COL32(255, 255, 000, 255), s.c_str());
                        }
                    }
                }

                if (Config.PlayerESP.Grenade) {
                    if (i->IsA(ASTExtraGrenadeBase::StaticClass())) {
                        auto Grenade = (ASTExtraGrenadeBase *) i;
                        auto RootComponent = Grenade->RootComponent;
                        if (!RootComponent)
                            continue;
                        float Distance = Grenade->GetDistanceTo(localPlayer) / 70.f;
                        FVector2D grenadePos;
                        if (W2S(Grenade->K2_GetActorLocation(), &grenadePos)) {
                            std::string s = std::to_string((int) Distance);
                            draw->AddText(NULL, ((float) density / 15.0f), {((float)glWidth / 2) - (glWidth / 10), 100}, IM_COL32(255, 0, 0, 255), "!!!...THROWABLE WARNING...!!!");
                            draw->AddText(NULL, ((float) density / 25.0f), {grenadePos.X-10, grenadePos.Y-10}, IM_COL32(255, 0, 0, 255), s.c_str());
                        }
                    }
                }
                
                if (Config.PlayerESP.Vehicle || Config.PlayerESP.VehicleFuel || Config.PlayerESP.VehicleHP) {
                    if (i->IsA(ASTExtraVehicleBase::StaticClass())) {
                        auto Vehicle = (ASTExtraVehicleBase *) i;
                        if (!Vehicle->Mesh)
                            continue;

                        int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->HP, (int) Vehicle->VehicleCommon->HPMax));
                        int MaxHP = (int) Vehicle->VehicleCommon->HPMax;
                        long curHP_Color = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0, 155);
                        float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
                        auto mWidthScale = std::min(0.10f * Distance, 50.f);
                        auto mWidth = 70.f - mWidthScale;
                        auto mHeight = mWidth * 0.15f;
                        FVector2D vehiclePos;
                        
                        if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
                            if(Config.PlayerESP.Vehicle) {
                                std::string s = "[";
                                s += GetVehicleName(Vehicle);
                                s += "-";
                                s += std::to_string((int) Distance);
                                s += "M]";
                                draw->AddText(NULL, ((float) density / 30.0f), {vehiclePos.X, vehiclePos.Y}, ToColor(Config.ColorsESP.Vehicle), s.c_str());
                            }
                            
                            if (Config.PlayerESP.VehicleFuel) {
                                std::string sf;
                                sf += "[Fuel:";
                                sf += std::to_string((int)(100 * Vehicle->VehicleCommon->Fuel / Vehicle->VehicleCommon->FuelMax));
                                sf += "]";
                                draw->AddText(NULL, ((float)density / 30.0f), {vehiclePos.X - (mWidth / 2), vehiclePos.Y + 15.f}, IM_COL32(255, 255, 0, 255), sf.c_str());
                            }
                           
                            if (Config.PlayerESP.VehicleHP) {
                                ImVec2 vStart = {vehiclePos.X - (mWidth / 2), vehiclePos.Y - (mHeight * 1.5f)};
                                ImVec2 vEndFilled = {vStart.x + (CurHP * mWidth / MaxHP), vStart.y + mHeight};
                                ImVec2 vEndRect = {vStart.x + mWidth, vStart.y + mHeight};
                                draw->AddRectFilled(vStart, vEndFilled, curHP_Color, 3.2f, 240);
                                draw->AddRect(vStart, vEndRect, IM_COL32(000, 000, 000, 255), 3.2f, 240);
                            }
                        }
                    }
                }
                
                if (i->IsA(APickUpWrapperActor::StaticClass())) {
                    auto PickUp = (APickUpWrapperActor *) i;
                    if (Items[PickUp->DefineID.TypeSpecificID]) {
                        auto RootComponent = PickUp->RootComponent;
                        if (!RootComponent)
                            continue;

                        float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;
                        FVector2D itemPos;
                        
                        if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
                            std::string s;
                            uint32_t tc = 0xFF000000;
                            
                            for (auto &category: items_data) {
                                for (auto &item: category["Items"]) {
                                    if (item["itemId"] == PickUp->DefineID.TypeSpecificID) {
                                        s = item["itemName"].get<std::string>();
                                        tc = strtoul(item["itemTextColor"].get<std::string>().c_str(), 0, 16);
                                        break;
                                    }
                                }
                            }
                            
                            s += " - ";
                            s += std::to_string((int) Distance);
                            s += "M]";
                            draw->AddText(NULL, ((float) density / 25.0f), {itemPos.X, itemPos.Y}, tc, s.c_str());
                        }
                    }
                }
            }
        }
    }
    
    g_LocalController = localController;
    g_LocalPlayer = localPlayer;
    if (totalEnemies > 0 || totalBots > 0) {
        std::string s = "  ";
        std::string ene = std::to_string((int) totalEnemies);
        std::string noob = std::to_string((int) totalBots);
        s += ene + " | " + noob;
        draw->AddRectFilled(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 + 80, 90), IM_COL32(0, 255, 0, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 72, 50), ImVec2(glWidth / 2 + 72, 90), IM_COL32(0, 255, 0, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 64, 50), ImVec2(glWidth / 2 + 64, 90), IM_COL32(0, 255, 0, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 60, 50), ImVec2(glWidth / 2 + 60, 90), IM_COL32(0, 255, 0, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 56, 50), ImVec2(glWidth / 2 + 56, 90), IM_COL32(0, 255, 0, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 52, 50), ImVec2(glWidth / 2 + 52, 90), IM_COL32(0, 255, 0, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 48, 50), ImVec2(glWidth / 2 + 48, 90), IM_COL32(0, 255, 0, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 44, 50), ImVec2(glWidth / 2 + 44, 90), IM_COL32(0, 255, 0, 38));
        draw->AddText(nullptr, ((float) density / 12.5f), ImVec2(glWidth / 2 - 50.f, 50), IM_COL32(0, 0, 0, 255), s.c_str());
    } else {
        std::string cntclr = "  Clear";
        draw->AddRectFilled(ImVec2(glWidth / 2 - 80, 50), ImVec2(glWidth / 2 + 80, 90), IM_COL32(0, 0, 255, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 72, 50), ImVec2(glWidth / 2 + 72, 90), IM_COL32(0, 0, 255, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 64, 50), ImVec2(glWidth / 2 + 64, 90), IM_COL32(0, 0, 255, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 60, 50), ImVec2(glWidth / 2 + 60, 90), IM_COL32(0, 0, 255, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 56, 50), ImVec2(glWidth / 2 + 56, 90), IM_COL32(0, 0, 255, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 52, 50), ImVec2(glWidth / 2 + 52, 90), IM_COL32(0, 0, 255, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 48, 50), ImVec2(glWidth / 2 + 48, 90), IM_COL32(0, 0, 255, 38));
        draw->AddRectFilled(ImVec2(glWidth / 2 - 44, 50), ImVec2(glWidth / 2 + 44, 90), IM_COL32(0, 0, 255, 38));
        draw->AddText(nullptr, ((float) density / 12.5f), ImVec2(glWidth / 2 - 50.f, 50), IM_COL32(255, 255, 255, 255), cntclr.c_str());
    }
    
    if (Config.AimBot.Enable) {
        draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2), Config.AimBot.Cross, ToColor(Config.ColorsESP.Fov), 0, 1.5f);    
    }
    if (Config.BulletTracking.Enable) {
            draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2), Config.BulletTracking.FovEdit, ToColor(Config.ColorsESP.Fov2), 0, 1.5f);
    }
    fps.update();
    }
}

std::string getClipboardText()
{
    if (!g_App)
        return "";

    auto activity = g_App->activity;
    if (!activity)
        return "";

    auto vm = activity->vm;
    if (!vm)
        return "";

    auto object = activity->clazz;
    if (!object)
        return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    {
        auto ContextClass = env->FindClass("android/content/Context");
        auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
        auto str = env->NewStringUTF("clipboard");
        auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
        env->DeleteLocalRef(str);
        auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
        auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");
        auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
        auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");
        auto text = env->CallObjectMethod(clipboardManager, getText);
        
        if (text) {
            str = (jstring) env->CallObjectMethod(text, toStringMethod);
            result = env->GetStringUTFChars(str, 0);
            env->DeleteLocalRef(str);
            env->DeleteLocalRef(text);
        }

        env->DeleteLocalRef(CharSequenceClass);
        env->DeleteLocalRef(ClipboardManagerClass);
        env->DeleteLocalRef(clipboardManager);
        env->DeleteLocalRef(ContextClass);
    }
    vm->DetachCurrentThread();
    return result;
}

const char *GetAndroidID(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
    jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
    jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());
    auto obj = env->CallObjectMethod(context, getContentResolverMethod);
    auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());
    auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
    jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());
    auto len = strlen(uuid);
    jbyteArray myJByteArray = env->NewByteArray(len);
    env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);
    jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
    jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());
    auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
    auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
    return env->GetStringUTFChars(str, 0);
}

struct MemoryStruct {
    char *memory;
    size_t size;
};

static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *) userp;
    mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
    
    if (mem->memory == NULL) {
        return 0;
    }
    
    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;
    return realsize;
}

std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);
    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());
    vm->DetachCurrentThread();
    std::string errMsg;
    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/ StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());
        std::string sRedLink = OBFUSCATE("https://darkespyt.com/connect");
        
        if(sRedLink.length() != 29) {
            std::terminate();
        }
        
        curl_easy_setopt(curl, CURLOPT_URL, sRedLink.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
    	curl_easy_setopt(curl, CURLOPT_USERAGENT, "darkespytAntiddos/1.0");
        char data[4096];
        sprintf(data, "game=PUBG&user_key=%s&serial=%s&verrr=3.4.0", user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
        res = curl_easy_perform(curl);
        
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    EXP = result["data"]["EXP"].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += "JoInTEl3graMD4RkeSpYt";
                        std::string outputAuth = Tools::CalcMD5(auth);
                        g_Token = token;
                        g_Auth = outputAuth;
                        bValid = g_Token == g_Auth;
                        status = result ["data"]["mod_status"];
                        device = result ["data"]["device"];
                        floating = result ["data"]["credit"];
                        name = result["data"]["modname"];
                        if(result["data"]["modname"] == "")
                        {
                            name += "DARKESPYT - LOGIN";
                        }
                        ESP = result[/*@DARKESPYT*/ StrEnc("?8Jy", "\x5B\x59\x3E\x18", 4).c_str()][/*@DARKESPYT*/ StrEnc("0jq", "\x75\x39\x21", 3).c_str()].get<std::string>();
                        AIM = result[/*@DARKESPYT*/ StrEnc("?8Jy", "\x5B\x59\x3E\x18", 4).c_str()][/*@DARKESPYT*/ StrEnc(")le", "\x68\x25\x28", 3).c_str()].get<std::string>();
                        BulletTrack = result[/*@DARKESPYT*/ StrEnc("?8Jy", "\x5B\x59\x3E\x18", 4).c_str()][/*@DARKESPYT*/ StrEnc("9\\zmY\"#EbKR", "\x7B\x29\x16\x01\x3C\x56\x77\x37\x03\x28\x39", 11).c_str()].get<std::string>();
                        Memory = result[/*@DARKESPYT*/ StrEnc("?8Jy", "\x5B\x59\x3E\x18", 4).c_str()][/*@DARKESPYT*/ StrEnc("%YW*1?", "\x68\x3C\x3A\x45\x43\x46", 6).c_str()].get<std::string>();
                        Float_Text = result[/*@DARKESPYT*/ StrEnc("?8Jy", "\x5B\x59\x3E\x18", 4).c_str()][/*@DARKESPYT*/ StrEnc("+JlB)WGk", "\x6D\x26\x03\x23\x5D\x3E\x29\x0C", 8).c_str()].get<std::string>();
                        Setting = result[/*@DARKESPYT*/ StrEnc("?8Jy", "\x5B\x59\x3E\x18", 4).c_str()][/*@DARKESPYT*/ StrEnc("?H@wXC1", "\x6C\x2D\x34\x03\x31\x2D\x56", 7).c_str()].get<std::string>();
						up_version = result["data"]["version"];
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);
    vm->DetachCurrentThread();
    return bValid ? "OK" : errMsg;
}


EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);

EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
    if (glWidth <= 0 || glHeight <= 0)
        return orig_eglSwapBuffers(dpy, surface);

    if (!g_App)
        return orig_eglSwapBuffers(dpy, surface);

    screenWidth = ANativeWindow_getWidth(g_App->window);
    screenHeight = ANativeWindow_getHeight(g_App->window);
    density = AConfiguration_getDensity(g_App->config);
    if (!initImGui) {
        ImGui::CreateContext();
        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowRounding = 6.0f;
        style.FramePadding = ImVec2(6, 6);
        style.FrameRounding = 4.0f;
        style.FrameBorderSize = 2.0f;
        style.TabRounding = 3.0f;
        style.GrabRounding = 6.0f;
        style.WindowTitleAlign = ImVec2(0.5, 0.5);
        style.Colors[ImGuiCol_Text]                  = ImColor(255, 255, 255, 255);
        style.Colors[ImGuiCol_TextDisabled]          = ImVec4(0.60f, 0.60f, 0.60f, 1.00f);
        style.Colors[ImGuiCol_WindowBg]              = ImColor(15, 15, 15, 255);
        style.Colors[ImGuiCol_ChildBg]               = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_PopupBg]               = ImVec4(0.05f, 0.05f, 0.10f, 0.85f);
        style.Colors[ImGuiCol_Border]                = ImVec4(0.15f, 0.15f, 0.15f, 0.65f);
        style.Colors[ImGuiCol_BorderShadow]          = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_FrameBg]               = ImColor(51, 64, 73, 150);
        style.Colors[ImGuiCol_FrameBgActive]         = ImColor(37, 36, 37, 150);
        style.Colors[ImGuiCol_FrameBgHovered]        = ImColor(37, 36, 37, 150);
        style.Colors[ImGuiCol_TitleBg]               = ImColor(0, 0, 0, 255);
        style.Colors[ImGuiCol_TitleBgActive]         = ImColor(0, 0, 0, 255);
        style.Colors[ImGuiCol_TitleBgCollapsed]      = ImColor(0, 0, 0, 130);        
        style.Colors[ImGuiCol_MenuBarBg]             = ImVec4(1.0f, 1.0f, 1.0f, 0.80f);
        style.Colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.20f, 0.25f, 0.30f, 0.60f);
        style.Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.55f, 0.53f, 0.55f, 0.51f);
        style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.56f, 0.56f, 0.56f, 1.00f);
        style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.56f, 0.56f, 0.56f, 0.91f);
        style.Colors[ImGuiCol_CheckMark]             = ImVec4(0.39f, 1.72f, 0.57f, 1.00f);
        style.Colors[ImGuiCol_SliderGrab]            = ImVec4(0.70f, 0.70f, 0.70f, 0.62f);
        style.Colors[ImGuiCol_SliderGrabActive]      = ImVec4(0.30f, 0.30f, 0.30f, 0.84f);
        style.Colors[ImGuiCol_Separator]             = ImColor(70, 70, 70, 255);
        style.Colors[ImGuiCol_SeparatorActive]       = ImColor(76, 76, 76, 255);
        style.Colors[ImGuiCol_SeparatorHovered]      = ImColor(76, 76, 76, 255);
        style.Colors[ImGuiCol_Button]                = ImColor(50, 60, 60, 255);
        style.Colors[ImGuiCol_ButtonActive]          = ImColor(60, 60, 60, 255);
        style.Colors[ImGuiCol_ButtonHovered]         = ImColor(0, 255, 0, 255);
        style.Colors[ImGuiCol_Header]                = ImColor(0, 0, 0, 0);
        style.Colors[ImGuiCol_HeaderActive]          = ImColor(0, 0, 0, 0);
        style.Colors[ImGuiCol_HeaderHovered]         = ImColor(255, 0, 0, 255);
        style.Colors[ImGuiCol_ResizeGrip]            = ImColor(255, 0, 0, 255);
        style.Colors[ImGuiCol_ResizeGripHovered]     = ImColor(255, 0, 0, 255);
        style.Colors[ImGuiCol_ResizeGripActive]      = ImColor(255, 0, 0, 255);
        style.Colors[ImGuiCol_PlotLines]             = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
        style.Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_PlotHistogram]         = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.00f, 0.00f, 1.00f, 0.35f);
        style.ScaleAllSizes(std::max(2.5f, density / 400.0f));
        style.ScrollbarSize /= 1;
        ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");
        ImGuiIO &io = ImGui::GetIO();
        //ImGui::StyleColorsDark();
        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;
        static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
        ImFontConfig icons_config;
        ImFontConfig CustomFont;
        CustomFont.FontDataOwnedByAtlas = false;
        icons_config.MergeMode = true;
        icons_config.PixelSnapH = true;
        icons_config.OversampleH = 2.5;
        icons_config.OversampleV = 2.5;
        io.Fonts->AddFontFromMemoryTTF((void *)BaiduZY_data, BaiduZY_size, 30.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
        io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 25.f, &CustomFont);
        io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 30.0f, &icons_config, icons_ranges);
        ImFontConfig cfg;
        cfg.SizePixels = ((float) density / 20.0f);
        io.Fonts->AddFontDefault(&cfg);
        memset(&Config, 0, sizeof(sConfig));
        
        Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Box = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Name = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Skeleton = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Vehicle = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.SkeletonVisible = CREATE_COLOR(0, 255, 0, 255);
        Config.ColorsESP.Fov = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Fov2 = CREATE_COLOR(255, 255, 0, 255);
        Config.AimBot.Cross  = 300.0f;
        initImGui = true;
        initImGui = true;
    }

    ImGuiIO &io = ImGui::GetIO();
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
    ImGui::NewFrame();
    DrawESP(ImGui::GetBackgroundDrawList());
    ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.38f, (float) glHeight * 0.62f), ImGuiCond_Once);
    if (ImGui::Begin((name.c_str()), 0, ImGuiWindowFlags_NoBringToFrontOnFocus ))
    {
        static bool isLogin = false;
        static std::string err;
        if (!isLogin) {
            ImGui::Text("Please Login! (Copy Key to Clipboard)");
            ImGui::PushItemWidth(-1);
            static char s[64];
            ImGui::InputText("##key", s, sizeof s);
            auto key = getClipboardText();
            strncpy(s, key.c_str(), sizeof s);    
            err = Login(s);
            
            if (err == "OK") {
                isLogin = bValid && g_Auth == g_Token;
            }
            
            ImGui::PopItemWidth();
            ImGui::PushItemWidth(-1);
            
            if (ImGui::Button(" PASTE KEY ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                auto key = getClipboardText();
                strncpy(s, key.c_str(), sizeof s);
            }
            
            ImGui::PopItemWidth();
            ImGui::PushItemWidth(-1);
            
            if (ImGui::Button("LOGIN", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                err = Login(s);
                if (err == "OK") {
                    isLogin = bValid && g_Auth == g_Token;
                }
            }
            
            ImGui::PopItemWidth();
            
            if (!err.empty() && err != "OK") {
                ImGui::Text("KEY Error: =%s", err.c_str());
            }
            
            ImGui::PopItemWidth();
        } else {
            if(up_version != "3.4.0")
            {
                ImGui::Text("Use Official Version of Cheats from @DARKESPYT. Please Download It Again! \n CHECK :- @DARKESPYT");
            } else if (!g_Token.empty() && !g_Auth.empty() && g_Token == g_Auth) {
                if(Activeesp){
                     Config.PlayerESP.Vehicle = true;
                     Config.PlayerESP.LootBox = true;
                     Config.PlayerESP.Grenade = true;
                     Config.PlayerESP.VehicleFuel = true;
                     Config.PlayerESP.VehicleHP = true;
                     Config.PlayerESP.Distance = true;
                     Config.PlayerESP.Name = true;
                     Config.PlayerESP.Health = true;
                     Config.PlayerESP.Skeleton = true;
                     Config.PlayerESP.Line = true;
                     Config.PlayerESP.TeamID = true;
                }
                
                {
                    static int tab = 1;
                    //ImGui::Columns(2);
                    //ImGui::SetColumnOffset(1, 145);
                    {
                        ImGui::SameLine();
                        
                        if(ESP == "on")
                        {
                            if (ImGui::Button("ESP", ImVec2(110,55)))
                                tab = 1;
                            
                            ImGui::SameLine();
                            
                            if (ImGui::Button("ITEMS", ImVec2(110,55)))
                                tab = 2;
                        }
                        
                        ImGui::SameLine();
                        
                        if(AIM == "on")
                        {
                            if (ImGui::Button("AIM", ImVec2(110,55)))
                                tab = 3;
                        }
                        
                        ImGui::SameLine();
                        if(BulletTrack == "on")
                        {
                            if(ImGui::Button("BT", ImVec2(110,55)))
                                tab = 4;
                        }
                        
                        ImGui::SameLine();
                        
                        if(Memory == "on")
                        {
                            if (ImGui::Button("MEM", ImVec2(110,55)))
                                tab = 5;
                        }
                        
                        ImGui::SameLine();
                        if(up_version == "Test")
                        {
                            if(ImGui::Button("Test", ImVec2(110, 55)))
                                tab = 6;
                        }
                    }
                    
                    ImGui::NextColumn();
                    ImGui::NewLine();
                    
                    if(ESP == "on")
                    {
                        if (tab == 1) {
                            if(ImGui::BeginTable("split", 2));
                            {
                                ImGui::Spacing();
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("One Click Esp", &Activeesp);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Bypass", &Bypass);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Vehicle Fuel", &Config.PlayerESP.VehicleFuel);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Vehicle HP", &Config.PlayerESP.VehicleHP);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Line", &Config.PlayerESP.Line);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Skeleton", &Config.PlayerESP.Skeleton);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Health", &Config.PlayerESP.Health);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Name", &Config.PlayerESP.Name);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Distance", &Config.PlayerESP.Distance);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Team ID", &Config.PlayerESP.TeamID);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Vehicle", &Config.PlayerESP.Vehicle);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Grenade Warning", &Config.PlayerESP.Grenade);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("LootBox", &Config.PlayerESP.LootBox);
                            }
                            ImGui::EndTable();
                        }
                        
                        if (tab == 2) {
                            ImGui::Spacing();
                            for (auto &i : items_data) {
                                if (ImGui::TreeNode(i["Category"].get<std::string>().c_str())) {
                                    ImGui::Spacing();
                                    for (auto &item : i["Items"]) {
                                        ImGui::Checkbox(item["itemName"].get<std::string>().c_str(), (bool *) &Items[item["itemId"].get<int>()]);
                                    }
                                    ImGui::TreePop();
                                }
                            }
                        } 
                    }
                    
                    if(Memory == "on")
                    {
                        if (tab == 5) 
                        {
                            if(ImGui::BeginTable("split", 2));
                            {
                                ImGui::Spacing();
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("No Recoil", &Config.HighRisk.Recoil);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Instant HIT", &Config.HighRisk.Instant);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("X-Hit Effect", &Config.HighRisk.HitEffect);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Fast Switch Weapon", &Config.HighRisk.Switch);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("No Shake", &Config.HighRisk.Shake);
                                ImGui::TableNextColumn();
                                ImGui::Checkbox("Flash", &Config.HighRisk.Flash);
                            }
                            ImGui::EndTable();
                        }
                    }
                   
                    if(BulletTrack == "on")
                    {
                        if(tab == 4)
                        {
                            ImGui::Spacing();
                            ImGui::Checkbox("360° Bullet Track", &Config.BulletTracking.Enable);
                            ImGui::ColorEdit3("##FovCol", Config.ColorsESP.Fov2, ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoInputs);
                            ImGui::SameLine();   
                            ImGui::SliderFloat("", &Config.BulletTracking.FovEdit, 0.0f, 600.0f);
                        }
                    }
                    
                    if(AIM == "on")
                    {
                        if (tab == 3)
                        {
                            ImGui::Spacing();
                            ImGui::Checkbox("Enable AimBot", &Config.AimBot.Enable);
                            Config.AimBot.Target = Head;
                            Config.AimBot.COMP = true;
                            ImGui::ColorEdit3("##FovCol", Config.ColorsESP.Fov, ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoInputs);
                            ImGui::SameLine();  
                            ImGui::SliderFloat("", &Config.AimBot.Cross, 0.0f, 400.0f); 
                            Config.AimBot.Size = 1.6;
                            Config.AimBot.Trigger = Any;
                            Config.AimBot.VisCheck = true;
                            Config.AimBot.Meter = 1000;
                            ImGui::Checkbox("Ignore Knocked", &Config.AimBot.IgnoreKnocked);
                            ImGui::Spacing();
                        }
                    }
                }
            }
        }
    }
    ImGui::End();
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    return orig_eglSwapBuffers(dpy, surface);
}

int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
    if (initImGui) {
        ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
    }
    return orig_onInputEvent(app, inputEvent);
}

#define SLEEP_TIME 1000LL / 60LL

void* SuperThread(void*) {
    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
    return nullptr;
}

[[noreturn]] void *maps_thread(void *) {
    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
        std::vector<sRegion> tmp;
        char line[512];
        FILE *f = fopen("/proc/self/maps", "r");
        if (f) {
            while (fgets(line, sizeof line, f)) {
                uintptr_t start, end;
                char tmpProt[16];
                if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {
                    if (tmpProt[0] != 'r') {
                        tmp.push_back({start, end});
                    }
                }
            }
            fclose(f);
        }
        trapRegions = tmp;
        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
    }
}
       
int (*ret_Zero)();

int Hooked_Ret_Zero() {
    return 0;
}

void * hack_thread(void *) {
    LOGI(OBFUSCATE("RISING STARS LIBRARY READY...."));
    do {
        sleep(1);
    } while (!isLibraryLoaded(targetLibName));
    return NULL;
}

void *main_thread(void *) {
    UE4 = Tools::GetBaseAddress("libUE4.so");
    while (!UE4) {
        UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
    }
    ANOGS = Tools::GetBaseAddress("libanogs.so");
    while (!ANOGS) {
        ANOGS = Tools::GetBaseAddress("libanogs.so");
        sleep(1);
    }

    while (!g_App) {
        g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
        sleep(1);
    }

    while (!g_App->onInputEvent)
        sleep(1);

    orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
    g_App->onInputEvent = onInputEvent;
    FName::GNames = GetGNames();
    
    while (!FName::GNames) {
        FName::GNames = GetGNames();
        sleep(1);
    }
    
    UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);
    void *egl = dlopen_ex("libEGL.so", 4);
    
    while (!egl) {
        egl = dlopen_ex("libEGL.so", 4);
        sleep(1);
    }

    void *addr = dlsym_ex(egl, "eglSwapBuffers");
    HOOK(addr, _eglSwapBuffers, &orig_eglSwapBuffers);
    dlclose_ex(egl);
    pthread_t t;
    pthread_create(&t, 0, maps_thread, 0);
    items_data = json::parse(JSON_ITEMS);
    return 0;
}

__attribute__((constructor)) void _init() {
    pthread_t t;
    pthread_create(&t, 0, main_thread, 0);
    pthread_create(&t, NULL, SuperThread, NULL);
}