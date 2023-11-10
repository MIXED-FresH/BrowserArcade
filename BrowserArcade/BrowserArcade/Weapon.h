#pragma once
#include "Item.h"

class Weapon : public Item {
private:
	const int damage;
public:
	Weapon(Position pos, std::string objName, bool crossAbility, const int changeHp, const int damage):
	Item(pos, objName, crossAbility, changeHp), damage(damage){}

	const int getDamage() {
		return damage;
	}
};