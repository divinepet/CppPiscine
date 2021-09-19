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
	AMateria(const AMateria &obj);
	virtual ~AMateria();

	AMateria &operator=(AMateria const &other);

	string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

std::ostream &operator<<(std::ostream &out, AMateria const &other);