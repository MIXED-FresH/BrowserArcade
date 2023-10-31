#pragma once
#include "Block.h"

class SkipLevelBlock : public Block {
private:
    const unsigned short skipLevelAmount;
public:
    SkipLevelBlock(Position pos, std::string objName, bool crossAbility, unsigned short skipAmount)
        : Block(pos, objName, crossAbility), skipLevelAmount(skipAmount) {}

    unsigned short getSkipLevelAmount() const;
};