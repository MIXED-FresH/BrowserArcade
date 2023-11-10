#pragma once
#include "Entity.h";

class Item :public Entity {
private:
	const int changeHp;

public:
	Item(Position pos, std::string objName, bool crossAbility, const int changeHp):
	Entity(pos, objName, crossAbility), changeHp(changeHp){}

	int getChangeHp() {
		return changeHp;
	}
};