// Copyright (c) 2019 TORExitNode
#include "singleton.hpp"
#include "valve_sdk\csgostructs.hpp"

#pragma once
class Misc : public Singleton<Misc>
{
public:
    void OnCreateMove(CUserCmd* cmd);
    void OnFrameStageNotify(ClientFrameStage_t stage);
private:
    void NoCrouchCooldown(CUserCmd* cmd);
    void NoFlash();
};

