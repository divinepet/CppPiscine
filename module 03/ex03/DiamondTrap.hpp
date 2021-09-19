#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	string name;
public:
	DiamondTrap(string name);
	DiamondTrap(const DiamondTrap &obj);
	virtual ~DiamondTrap();

	DiamondTrap &operator=(DiamondTrap const &other);

	virtual void attack(string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void whoAmI();
};

