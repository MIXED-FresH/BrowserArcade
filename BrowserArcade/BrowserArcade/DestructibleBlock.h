#pragma once
#include "Block.h"

class DestructibleBlock : public Block {
private:
    unsigned short healthPoints;
public:
    DestructibleBlock(Position pos, std::string objName, bool crossAbility, unsigned short hp) :
        Block(pos, objName, crossAbility), healthPoints(hp) {}

    // returns true if block should be destroyed
    bool changeHp(short);
};