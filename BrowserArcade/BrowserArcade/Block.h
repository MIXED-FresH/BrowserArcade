#pragma once
#include "Entity.h"
class Block : public Entity{
public:
    Block(Position pos, std::string objName, bool crossAbility) :
        Entity(pos, objName, crossAbility) {};
};