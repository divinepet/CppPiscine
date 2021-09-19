#pragma once

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &obj);
	virtual ~Cat();

	Cat &operator=(Cat const &other);

	virtual string getType() const;
	virtual void makeSound() const;
};

std::ostream &operator<<(std::ostream &out, Cat const &other);

