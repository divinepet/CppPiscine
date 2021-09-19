#pragma once

#include <iostream>

using std::string;
using std::cout;
const string YELLOW = "\x1B[0;93m";
const string PINK = "\x1B[0;95m";
const string BLUE = "\x1B[0;94m";
const string CYAN = "\x1B[0;96m";
const string RESET = "\033[0m";

class ClapTrap {
protected:
    string name;
    int health;
    int energy;
    int attackDmg;
public:
    ClapTrap(const string &name);
    ClapTrap(const ClapTrap &obj);
    virtual ~ClapTrap();

    ClapTrap &operator=(ClapTrap const &other);

	virtual void attack(string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
};

