#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const string name) : name(YELLOW + name + RESET), health(10), energy(10), attackDmg(0) {
    cout << YELLOW + name + RESET + ": I was borned!\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj) : name(obj.name), health(obj.health), energy(obj.energy), attackDmg(obj.attackDmg) {}

void ClapTrap::attack(const string &target) {
    cout << name + " attacks " + target + " on " << attackDmg << "\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
    cout << name + " damaged on " << amount << "\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    cout << name + " healed on " << amount << "\n";
}

ClapTrap::~ClapTrap() {
    cout << name + ": I'm dead!\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other) {
	name = other.name;
	health = other.health;
	energy = other.energy;
	attackDmg = other.attackDmg;
	return (*this);
}
