#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(string name);
	FragTrap(const FragTrap &obj);
	~FragTrap();

	FragTrap &operator=(FragTrap const &other);

	void attack(string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys();
};

