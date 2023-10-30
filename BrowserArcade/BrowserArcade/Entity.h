#pragma once
#include <string>
struct Position
{
	int X;
	int Y;
};

class Entity {
private:
	Position pos;
	const std::string name;
	const bool crossAbility;
public:
	Entity(Position pos, std::string objName, bool crossAbility) :
		pos(pos), name(objName), crossAbility(crossAbility) {};
	
	Position getPosition();
	std::string getName();
	bool isCrossible();

	void setPosition(int X, int Y);
	void setPosition(Position pos);
};