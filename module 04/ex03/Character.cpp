#include "Character.hpp"

Character::Character(std::string name) : name(name) {
    for (std::size_t i = 0; i < 4; i++) {
    	this->container[i] = NULL;
    }
}

Character::~Character() {
    for (size_t i = 0; i < 4; i++) {
    	if (container[i])
    		delete container[i];
    }
}

Character::Character(const Character &other) {
    this->name = other.name;
    for (size_t i = 0; i < 4; i++) {
    	container[i] = other.container[i]->clone();
    }
}

Character &Character::operator=(const Character &other) {
    if (this == &other)
        return (*this);
    for (size_t i = 0; i < 4; i++) {
    	if (container[i])
    		delete container[i];
    	if (other.container[i])
    		container[i] = other.container[i]->clone();
    }
    return (*this);
}

const std::string &Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    for (size_t i = 0; i < 4; i++) {
    	if (this->container[i] == m) {
            std::cout << this->name << " already has " << m->getType() + "\n";
            return;
        }
    }
    for (size_t i = 0; i < 4; i++) {
    	if (!this->container[i]) {
    		container[i] = m;
            std::cout << this->name << " has taken " << m->getType() + "\n";
            return;
        }
    }
}

void Character::unequip(int idx) {
	if (this->container[idx]) {
		this->container[idx] = NULL;
        return;
    }
}

void Character::use(int idx, ICharacter &target) {
	if (this->container[idx]) {
		this->container[idx]->use(target);
        return;
    }
}
