#include "SkipBlockManager.h"

void SkipBlockManager::addPosition(Position newPos) {
    skipLevelBlocksPositions.push_back(newPos);
}

void SkipBlockManager::addBlock(SkipLevelBlock* newBlock) {
    skipLevelBlocksPointers.push_back(newBlock);
    addPosition(newBlock->getPosition());
}

void SkipBlockManager::clearManager() {
    skipLevelBlocksPointers.clear();
    skipLevelBlocksPositions.clear();
}