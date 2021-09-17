#pragma once

#include <iostream>
#include "AMateria.hpp"

using std::string;
using std::cout;
using std::endl;


class Ice : public AMateria {
public:
	Ice();
	virtual ~Ice();
	AMateria* clone() const;
	void use(ICharacter &target);
};

