#include "Weapon.hpp"

string Weapon::getType() {
    return type;
}

void Weapon::setType(string type) {
    this->type = type;
}

Weapon::Weapon(string type) {
    this->type = type;
}

Weapon::~Weapon() {}
