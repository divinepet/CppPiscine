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
	virtual string getType() const;
	virtual void makeSound() const {};
};

