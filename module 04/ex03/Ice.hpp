#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : virtual public AMateria {
public:
    Ice();
    ~Ice();
    Ice(Ice const &other);
    Ice & operator=(Ice const &other);

    AMateria* clone() const;
    void use(ICharacter& target);
};
