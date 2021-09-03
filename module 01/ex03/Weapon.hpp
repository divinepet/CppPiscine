#pragma once
#include <iostream>
using std::string;


class Weapon {
    string type;
public:
    Weapon(string type);
    ~Weapon();
    string getType();
    void setType(string type);
};

