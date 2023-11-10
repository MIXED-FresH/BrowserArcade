#pragma once
#include "Entity.h"

class Creature : public Entity {
private:
	int healthPoint;
	const int damage;
	const double moveTime;
	const double reloadAttack;
public:
	Creature(Position pos, std::string objName, bool crossAbility, 
		int healthPoint, const int damage, const double moveTime, const double reloadAttack):
	Entity(pos, objName, crossAbility), 
		healthPoint(healthPoint), damage(damage), moveTime(moveTime), reloadAttack(reloadAttack){}

	int getHealthPoint() {
		return healthPoint;
	}

	bool changeHp(int damage) {
		healthPoint -= damage;
		if (healthPoint <= 0) {
			return true;
		}
		return false;
	}

	const double getMoveTime() {
		return moveTime;
	}

	const double getReloadAttack() {
		return reloadAttack;
	}
};