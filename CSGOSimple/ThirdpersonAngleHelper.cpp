
#include "ThirdpersonAngleHelper.h"
#include "RuntimeSaver.h"
#include "ConsoleHelper.h"
#include "Resolver.h"
#include "ConfigSystem.h"

void ThirdpersonAngleHelper::SetThirdpersonAngle()
{
    if ( !g_LocalPlayer || !g_LocalPlayer->IsAlive() )
        return;

    g_LocalPlayer->SetVAngles ( g_Saver.FakelagData.ang );
    LastAngle = g_Saver.FakelagData.ang;

    g_Saver.HasChokedLast = g_ClientState->chokedcommands >= 1;
    g_Saver.LastRealAnglesBChoke = g_Saver.AARealAngle;
}

void ThirdpersonAngleHelper::EnemyAnimationFix ( C_BasePlayer* player )
{
    AnimFix2 ( player ); //xD
}

void ThirdpersonAngleHelper::AnimFix()
{
}

void ThirdpersonAngleHelper::AnimFix2 ( C_BasePlayer* entity )
{
}