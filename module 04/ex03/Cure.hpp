#pragma once

#include <iostream>
#include "AMateria.hpp"

using std::string;
using std::cout;
using std::endl;


class Cure : public AMateria {
public:
	Cure();
	virtual ~Cure();
	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};

