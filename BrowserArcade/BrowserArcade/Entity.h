#pragma once
struct Position
{
	int X;
	int Y;
};

class Entity {
private:
	int positionX;
	int positionY;
	const bool movementAbility;
public:
	Entity(int posX, int posY, bool movAbility) :
		positionX(posX), positionY(posY), movementAbility(movAbility) {};
	
	Position getPosition();
	bool isMovable();

	void setPosition(int X, int Y);
	void setPosition(Position pos);
};