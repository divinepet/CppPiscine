#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
    AMateria();
    std::string type;
public:
    AMateria(std::string const &type);
    virtual ~AMateria();
    AMateria(AMateria const &other);
    AMateria & operator=(AMateria const &other);

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

