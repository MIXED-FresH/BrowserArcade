#pragma once
#include "Block.h"

class DoorBlock : public Block {
private:
    bool isOpen;
public:
    DoorBlock(Position pos, std::string objName, bool crossAbility, bool isOpen = false) :
        Block(pos, objName, crossAbility), isOpen(isOpen) {}

    bool isOpen() const;
    void changeState();
};