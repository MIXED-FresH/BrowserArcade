#pragma once
#include <vector>
#include "SkipLevelBlock.h"

class SkipBlockManager{
private:
    std::vector<Position> skipLevelBlocksPositions;
    std::vector<SkipLevelBlock*> skipLevelBlocksPointers;

    void addPosition(Position newPos);
public:
    void addBlock(SkipLevelBlock* newBlock);
    void clearManager();
};