#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

using std::string;
using std::cout;


class WrongCat : public WrongAnimal {
public:
	WrongCat();
	virtual ~WrongCat();
	virtual void makeSound() const;
};

