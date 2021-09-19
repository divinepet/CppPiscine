#pragma once

#include <iostream>

using std::string;
using std::cout;
const string YELLOW = "\x1B[0;93m";
const string RESET = "\033[0m";

class ClapTrap {
    string name;
    int health;
    int energy;
    int attackDmg;
public:
    ClapTrap(const string name);
    ClapTrap(const ClapTrap &obj);
    ~ClapTrap();

    ClapTrap &operator=(ClapTrap const &other);

    void attack(string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
