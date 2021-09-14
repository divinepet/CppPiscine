#include "FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(PINK + name + RESET) {
	cout << PINK + name + RESET << ": HELLO BITCHES!" << std::endl;
	health = 100;
	energy = 100;
	attackDmg = 30;
}

void FragTrap::attack(const string &target) {
	cout << name + " smash the head of " + target + " and took " << attackDmg << "\n";
	energy -= 2;
}

void FragTrap::takeDamage(unsigned int amount) {
	cout << name + " got a " << amount << " damage. This is nothing for this trap...\n";
	health -= amount;
}

void FragTrap::beRepaired(unsigned int amount) {
	cout << name + " got a health on " << amount << " amount\n";
	health += amount;
}

void FragTrap::highFivesGuys() {
	cout << name + ": Can someone give me a five? Huh? Please...!\n";
}

FragTrap::~FragTrap() {
	cout << name + ": this is my end!\n";
}
