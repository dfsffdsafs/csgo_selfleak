
#include "singleton.hpp"
#include "valve_sdk/csgostructs.hpp"

#pragma once
class HwidSystem : public Singleton<HwidSystem>
{
public:
    /**
    Used for getting hwid to compare for security reasons
    @return the systems current disk hwid
    */
    std::string GetHwid();
};

