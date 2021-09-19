#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(string name);
	ScavTrap(const ScavTrap &obj);
	virtual ~ScavTrap();

	ScavTrap &operator=(ScavTrap const &other);

	virtual void attack(string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void guardGate();
};

