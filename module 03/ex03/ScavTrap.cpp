#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(BLUE + name + RESET) {
	cout << BLUE + name + RESET << ": Transforming into ScavTrap..." << std::endl;
	health = 100;
	energy = 50;
	attackDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj) {}

void ScavTrap::attack(const string &target) {
	cout << name + " damages the " + target + " on " << attackDmg << "\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
	cout << name + " taken " << amount << " damage from someone...\n";
}

void ScavTrap::beRepaired(unsigned int amount) {
	cout << name + " boost his health on " << amount << "\n";
}

void ScavTrap::guardGate() {
	cout << name + ": Now i'm in Gate keeper mode!\n";
}

ScavTrap::~ScavTrap() {
	cout << this->name + ": my ScavTrap shell degrades...\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
	name = other.name;
	health = other.health;
	energy = other.energy;
	attackDmg = other.attackDmg;
	return (*this);
}