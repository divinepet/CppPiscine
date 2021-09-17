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
	virtual string getType() const;
	virtual void makeSound() const {};
};

