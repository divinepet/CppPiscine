#pragma once
#include <iostream>
#include <string>
#include <unistd.h>
using std::string;
using std::cout;

class Zombie;
Zombie* newZombie(string name);
void randomChump(string name);

class Zombie {
    string name;
public:
    void announce();
    Zombie(string name);
    ~Zombie();
};