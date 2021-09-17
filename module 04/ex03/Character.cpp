#include "Character.hpp"

Character::Character(string const &name) {
	Character::name = name;
	inventory = new AMateria*[4];
}

Character::~Character() {
	freeArray();
}

Character& Character::operator=(const Character & source) {
	if (this == &source)
		return *this;
	freeArray();
	if (source.inventory != nullptr) {
		inventory = new AMateria*[4];
		for (int i = 0; i < 4; ++i)
			inventory[i] = source.inventory[i];
	}
	else
		inventory = nullptr;
	return *this;
}

Character::Character(const Character& source) {
	if (source.inventory != nullptr) {
		inventory = new AMateria*[4];
		for (int i = 0; i < 4; ++i)
			inventory[i] = source.inventory[i];
	}
	else
		inventory = nullptr;
}

string const &Character::getName() const {
	return name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (inventory[i] == nullptr) {
			inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && inventory[idx] != nullptr) {
		inventory[idx] = nullptr;
		return;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && inventory[idx] != nullptr) {
		inventory[idx]->use(target);
		return;
	}
}

void Character::freeArray() {
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
	delete[] inventory;
}
