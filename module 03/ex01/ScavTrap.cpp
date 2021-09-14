#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(BLUE + name + RESET) {
	cout << BLUE + name + RESET << ": Transforming into ScavTrap..." << std::endl;
	health = 100;
	energy = 50;
	attackDmg = 20;
}

void ScavTrap::attack(const string &target) {
	cout << name + " damages the " + target + " on " << attackDmg << "\n";
	energy -= 2;
}

void ScavTrap::takeDamage(unsigned int amount) {
	cout << name + " taken " << amount << " damage from someone...\n";
	health -= amount;
}

void ScavTrap::beRepaired(unsigned int amount) {
	cout << name + " boost his health on " << amount << "\n";
	health += amount;
}

void ScavTrap::guardGate() {
	cout << name + ": Now i'm in Gate keeper mode!\n";
}

ScavTrap::~ScavTrap() {
	cout << name + ": my ScavTrap shell degrades...\n";
}
