#include "AMateria.hpp"

AMateria::AMateria(const string &type) {
	AMateria::type = type;
}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &obj) {
	this->type = obj.getType();
}

string const &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target) {
	target.getName();
}

AMateria &AMateria::operator=(AMateria const &other) {
	type = other.getType();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, AMateria const &other) {
	return out << other.getType();
}
