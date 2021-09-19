#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &obj) : AMateria(obj) {}

Cure &Cure::operator=(Cure const &other) {
	type = other.getType();
	return (*this);
}

AMateria *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	cout << "* heals " + target.getName() + "’s wounds *" << endl;
}

std::ostream &operator<<(std::ostream &out, Cure const &other) {
	return out << other.getType();
}