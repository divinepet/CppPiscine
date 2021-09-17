#include "AMateria.hpp"

AMateria::AMateria(const string &type) {
	AMateria::type = type;
}

AMateria::~AMateria() {}

string const &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target) {
	target.getName();
}
