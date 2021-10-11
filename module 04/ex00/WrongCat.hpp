#pragma once

#include "WrongAnimal.hpp"

using std::string;
using std::cout;


class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
	void makeSound() const;
};

