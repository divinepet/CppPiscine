#pragma once

#include <iostream>
#include "Animal.hpp"

using std::string;
using std::cout;


class Dog : public Animal {
public:
	Dog();
	virtual ~Dog();
	virtual string getType() const;
	virtual void makeSound() const;
};

