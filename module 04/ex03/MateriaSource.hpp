#pragma once

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

using std::string;
using std::cout;
using std::endl;

class MateriaSource : public IMateriaSource {
	AMateria **localStorage;
public:
	MateriaSource();
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
};

