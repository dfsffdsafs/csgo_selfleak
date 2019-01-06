// Copyright (c) 2019 TORExitNode
#include "singleton.hpp"
#include "valve_sdk/csgostructs.hpp"

#pragma once
class Fakelag : public Singleton<Fakelag>
{
public:
    void OnCreateMove(CUserCmd* cmd, bool& bSendPacket);
};