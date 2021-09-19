#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice &obj);
	virtual ~Ice();

	Ice &operator=(Ice const &other);

	AMateria* clone() const;
	void use(ICharacter &target);
};

std::ostream &operator<<(std::ostream &out, Ice const &other);

