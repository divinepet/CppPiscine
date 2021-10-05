#pragma once

#include <iostream>

using std::cout;
using std::endl;

class Brain {
public:
    Brain();
    virtual ~Brain();
    Brain(Brain const &brain);
    Brain& operator= (const Brain &brain);
    std::string ideas[100];
};

