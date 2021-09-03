#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) {
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::attack() {
    cout << name << " attacks with his " << weapon->getType() << "\n";
}

