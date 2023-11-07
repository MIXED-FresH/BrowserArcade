#pragma once
#include "Block.h"

class DoorBlock : public Block {
private:
    bool isOpenState;
public:
    DoorBlock(Position pos, std::string objName, bool crossAbility, bool isOpen = false) :
        Block(pos, objName, crossAbility), isOpenState(isOpen) {}

    bool isOpen() const;
    void changeState();
};