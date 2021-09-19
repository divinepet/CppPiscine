#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	AMateria **localStorage;
public:
	MateriaSource();
	virtual ~MateriaSource();

	MateriaSource &operator=(MateriaSource const &other);

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
};

