#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using std::string;
using std::cout;


class Cat : public Animal {
	Brain* brain;
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &cat);
	Cat& operator= (const Cat &cat);
	virtual string getType() const;
	virtual void makeSound() const;
};

