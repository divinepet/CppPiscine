#pragma once

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    AMateria *container[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &other);
    MateriaSource & operator=(MateriaSource const &other);

    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const &type);
};
