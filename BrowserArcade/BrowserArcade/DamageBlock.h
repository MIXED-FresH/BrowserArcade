#pragma once
#include "Block.h"

class DamageBlock : public Block {
private:
    const int damage;
public:
    DamageBlock(Position pos, std::string objName, bool crossAbility, int damage) :
        Block(pos, objName, crossAbility), damage(damage) {};

    int getDamage() const;
};