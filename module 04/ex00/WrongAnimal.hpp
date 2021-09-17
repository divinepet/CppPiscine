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
	virtual ~WrongAnimal();
	virtual void makeSound() const;
};

