#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (std::size_t i = 0; i < 4; i++)
        this->container[i] = NULL;
}

MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
        return (*this);
    for (std::size_t i = 0; i < 4; i++)
    	this->container[i] = other.container[i];
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
    for (std::size_t i = 0; i < 4; i++) {
    	if (!this->container[i]) {
    		this->container[i] = materia;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	if (type == "ice" || type == "cure") {
		for (std::size_t i = 0; i < 4; i++) {
			if (this->container[i] && this->container[i]->getType() == type) {
				return (this->container[i]->clone());
			}
		}
	}
	return nullptr;
}
