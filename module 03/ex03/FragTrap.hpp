#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap(string name);
	FragTrap(const FragTrap &obj);
	virtual ~FragTrap();

	FragTrap &operator=(FragTrap const &other);

	virtual void attack(string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void highFivesGuys();
};

