#pragma once
#include <iostream>
#include <string>
#include <unistd.h>
using std::string;
using std::cout;

class Zombie;
Zombie* zombieHorde(int N, string name);

class Zombie {
    string name;
public:
    void announce();
    explicit Zombie(string name);
    Zombie();
    void setName(string name);
    ~Zombie();
};