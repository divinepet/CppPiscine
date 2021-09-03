#include "HumanB.hpp"

HumanB::HumanB(string name) {
    this->name = name;
}

void HumanB::setWeapon(Weapon &w) {
    this->weapon = &w;
}

void HumanB::attack() {
    cout << name << " attacks with his " << weapon->getType() << "\n";
}

