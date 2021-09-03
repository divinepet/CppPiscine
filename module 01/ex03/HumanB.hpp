#pragma once
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB {
    string name;
    Weapon *weapon;
public:
    HumanB(string name);
    void attack();
    void setWeapon(Weapon &w);
};
