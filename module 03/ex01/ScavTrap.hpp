#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(string name);
	ScavTrap(const ScavTrap &obj);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &other);

	void attack(string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};

