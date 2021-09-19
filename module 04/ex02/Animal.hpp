#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal {
protected:
	string type;
public:
	Animal();
	virtual ~Animal();
	Animal(Animal const &animal);
	Animal& operator= (Animal const &animal);
	virtual string getType() const = 0;
	virtual void makeSound() const = 0;
};

std::ostream &operator<<(std::ostream &out, Animal const &other);

