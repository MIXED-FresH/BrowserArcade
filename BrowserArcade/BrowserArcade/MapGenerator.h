#pragma once

struct mapSize
{
	unsigned short X;
	unsigned short Y;
};

class MapGenerator {
private:
	mapSize mapSize;
	unsigned short roomsAmount;
	unsigned short minRoomSquare;
	int randSeed;

public:
	MapGenerator(unsigned short& sizeX, unsigned short& sizeY,
		unsigned short& roomsAmount, unsigned short& minSquare, int randSeed = 1) :
		mapSize{ sizeX, sizeY }, roomsAmount(roomsAmount),
		minRoomSquare(minSquare), randSeed(randSeed) {};
	void setNewMap(unsigned short& sizeX, unsigned short& sizeY,
		unsigned short& rooms, unsigned short& minSquare);
	void setRandomSeed(int& seed);
};