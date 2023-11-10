#pragma once
#include "Item.h"

class Equipment : public Item {
private:
	const int armorHp;
	const int armorBlock;
	const int key;
	const int modem;
public:
	Equipment(Position pos, std::string objName, bool crossAbility, const int changeHp, 
		const int armorHp, const int armorBlock, const int key, const int modem):
	Item(pos, objName, crossAbility, changeHp), armorHp(armorHp), armorBlock(armorBlock), key(key), modem(modem){}

	const int getArmorHp() {
		return armorHp;
	}

	const int getArmorBlock() {
		return armorBlock;
	}

	const int getKey() {
		return key;
	}

	const int getModem() {
		return modem;
	}
};
