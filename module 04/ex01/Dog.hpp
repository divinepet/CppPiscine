#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	Brain* brain;
public:
	Dog();
	Dog(const Dog &dog);
	virtual ~Dog();

	Dog& operator= (const Dog &dog);

	virtual string getType() const;
	virtual void makeSound() const;
};

std::ostream &operator<<(std::ostream &out, Dog const &other);
