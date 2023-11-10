#pragma once
#include "Creature.h"
#include "Weapon.h"

class Hero :Creature {
private:
	int armorHp;
	int armorBlock;
	unsigned int keyCount;
	unsigned int sysadminCount;
	Weapon weapon;

public:
	Hero(Position pos, std::string objName, bool crossAbility,
		int healthPoint, const int damage, const double moveTime, const double reloadAttack,
		int armorHp, int armorBlock, unsigned int keyCount, unsigned int sysadminCount, Weapon weapon) :
		Creature(pos, objName, crossAbility, healthPoint, damage, moveTime, reloadAttack), 
		armorHp(armorHp), armorBlock(armorBlock), keyCount(keyCount), sysadminCount(sysadminCount), weapon(weapon){}

	int getArmorHp() {
		return armorHp;
	}

	int getArmorBlock() {
		return armorBlock;
	}

	unsigned int getKeyCount() {
		return keyCount;
	}

	unsigned int getSysadminCount() {
		return sysadminCount;
	}

	void setArmorHp(int armor) {
		armorHp += armor;
	}
	
	void setArmorBlock(int armor) {
		armorBlock += armor;
	}

	void setSysadminCount(int count) {
		sysadminCount += count;
	}

	void setKeyCount(int count) {
		keyCount += count;
	}
};
