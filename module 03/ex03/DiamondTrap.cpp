#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name"), FragTrap("FragTrap"), ScavTrap("ScavTrap") {
	this->name = CYAN + name + RESET;
	cout << this->name + ": AHAHHA, IM AWAKE NOW!!!\n";
	health = FragTrap::health;
	energy = ScavTrap::energy;
	attackDmg = FragTrap::attackDmg;
}

void DiamondTrap::attack(const string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	cout << name + " was scratched on " << amount << "\n";
	health -= amount;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	cout << name + " took the cure on " << amount << "\n";
	health += amount;
}

void DiamondTrap::whoAmI() {
	cout << "My name is " + this->name << " and my ClapTrapName is " + ClapTrap::name + "\n";
}