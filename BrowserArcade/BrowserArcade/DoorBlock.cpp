#include "DoorBlock.h"

bool DoorBlock::isOpen() const {
    return isOpenState;
}

void DoorBlock::changeState() {
    isOpenState = !isOpenState;
}