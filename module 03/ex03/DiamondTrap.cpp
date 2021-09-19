#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name"), FragTrap("FragTrap"), ScavTrap("ScavTrap") {
	this->name = CYAN + name + RESET;
	cout << this->name + ": AHAHHA, IM AWAKE NOW!!!\n";
	health = FragTrap::health;
	energy = ScavTrap::energy;
	attackDmg = FragTrap::attackDmg;
}

DiamondTrap::~DiamondTrap() {}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj) {}

void DiamondTrap::attack(const string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	cout << name + " was scratched on " << amount << "\n";
}

void DiamondTrap::beRepaired(unsigned int amount) {
	cout << name + " took the cure on " << amount << "\n";
}

void DiamondTrap::whoAmI() {
	cout << "My name is " + this->name << " and my ClapTrapName is " + ClapTrap::name + "\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other) {
	name = other.name;
	health = other.health;
	energy = other.energy;
	attackDmg = other.attackDmg;
	return (*this);
}