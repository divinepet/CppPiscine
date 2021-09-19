#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	Brain* brain;
public:
	Cat();
	Cat(const Cat &cat);
	virtual ~Cat();

	Cat& operator= (const Cat &cat);

	virtual string getType() const;
	virtual void makeSound() const;
};

std::ostream &operator<<(std::ostream &out, Cat const &other);
