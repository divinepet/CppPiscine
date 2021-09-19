#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	localStorage = new AMateria*[4];
	for (int i = 0; i < 4; ++i) {
		localStorage[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
	delete[] localStorage;
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (localStorage[i] == nullptr) {
			localStorage[i] = m;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(const string &type) {
	for (int i = 0; i < 4; ++i) {
		if (localStorage[i] != nullptr) {
			if (localStorage[i]->getType() == type) {
				return localStorage[i];
			}
		}
	}
	return nullptr;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other) {
	localStorage = other.localStorage;
	return (*this);
}
