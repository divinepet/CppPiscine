#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &obj);
	virtual ~Cure();

	Cure &operator=(Cure const &other);

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};

std::ostream &operator<<(std::ostream &out, Cure const &other);
