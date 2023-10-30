#pragma once
#include <string>
struct Position
{
	int X;
	int Y;
};

class Entity {
protected:
	Position pos;
	const std::string name;
	const bool crossAbility;
public:
	Entity(Position pos, std::string objName, bool crossAbility) :
		pos(pos), name(objName), crossAbility(crossAbility) {};
	
	Position getPosition() const;
	std::string getName() const;
	bool isCrossible() const;

	void setPosition(int X, int Y);
	void setPosition(Position pos);
};