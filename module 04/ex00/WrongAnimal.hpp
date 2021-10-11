#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;


class WrongAnimal {
protected:
	string type;
public:
	WrongAnimal();
	~WrongAnimal();
	void makeSound() const;
};

