#pragma once
#include "Creature.h"

class Enemy : public Creature{
private:
	const int hearDistance;
public:
	Enemy(Position pos, std::string objName, bool crossAbility,
		int healthPoint, const int damage, const double moveTime, const double reloadAttack,
		const int hearDistance) : Creature(pos, objName, crossAbility,
			healthPoint, damage, moveTime, reloadAttack), hearDistance(hearDistance){}
	const int getHearDistance() {
		return hearDistance;
	}
};