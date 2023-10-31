#pragma once
#include "Block.h"

class DamageBlock : public Block {
private:
    const unsigned short damage;
public:
    DamageBlock(Position pos, std::string objName, bool crossAbility, unsigned short damage) :
        Block(pos, objName, crossAbility), damage(damage) {}

    unsigned short getDamage() const;
};