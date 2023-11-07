#include "DestructibleBlock.h"

bool DestructibleBlock::changeHp(short &damage) {
    if (healthPoints - damage < 0) {
        return true;
    }
    else {
        healthPoints -= damage;
        return false;
    }
}