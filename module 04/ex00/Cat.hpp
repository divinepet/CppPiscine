#pragma once

#include <iostream>
#include "Animal.hpp"

using std::string;
using std::cout;


class Cat : public Animal {
public:
	Cat();
	virtual ~Cat();
	virtual string getType() const;
	virtual void makeSound() const;
};

