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
	Animal(const Animal &obj);
	virtual ~Animal();

	Animal &operator=(Animal const &other);

	virtual string getType() const;
	virtual void makeSound() const {};
};

std::ostream &operator<<(std::ostream &out, Animal const &other);

