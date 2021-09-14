#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const string name) : name(YELLOW + name + RESET), health(10), energy(10), attackDmg(0) {
    cout << YELLOW + name + RESET << ": I was borned!\n";
}

void ClapTrap::attack(const string &target) {
    cout << name + " attacks " + target + " on " << attackDmg << "\n";
    energy -= 2;
}

void ClapTrap::takeDamage(unsigned int amount) {
    cout << name + " damaged on " << amount << "\n";
    health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    cout << name + " healed on " << amount << "\n";
    health += amount;
}

ClapTrap::~ClapTrap() {
    cout << name + ": I'm dead!\n";
}