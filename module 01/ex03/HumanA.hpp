#pragma once
#include <iostream>
#include "Weapon.hpp"
using std::cout;

class HumanA {
    string name;
    Weapon *weapon;
public:
    HumanA(string name, Weapon &weapon);
    void attack();
};

