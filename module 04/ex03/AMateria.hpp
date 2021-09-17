#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

using std::string;
using std::cout;
using std::endl;

class AMateria {
protected:
	string type;
public:
	AMateria(const string & type);
	virtual ~AMateria();
	string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

