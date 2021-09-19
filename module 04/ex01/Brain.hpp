#pragma once

#include <iostream>

using std::cout;
using std::endl;

class Brain {
public:
	Brain();
	virtual ~Brain();
	std::string ideas[100];
};

