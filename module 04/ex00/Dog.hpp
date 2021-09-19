#pragma once

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &obj);
	virtual ~Dog();

	Dog &operator=(Dog const &other);

	virtual string getType() const;
	virtual void makeSound() const;
};

std::ostream &operator<<(std::ostream &out, Dog const &other);
