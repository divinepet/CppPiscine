#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using std::string;
using std::cout;


class Dog : public Animal {
	Brain* brain;
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &dog);
	Dog& operator= (const Dog &dog);
	virtual string getType() const;
	virtual void makeSound() const;
};

