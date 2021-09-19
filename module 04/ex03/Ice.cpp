#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &obj) : AMateria(obj) {}

Ice &Ice::operator=(Ice const &other) {
	type = other.getType();
	return (*this);
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	cout << "* shoots an ice bolt at " + target.getName() + " *" << endl;
}

std::ostream &operator<<(std::ostream &out, Ice const &other) {
	return out << other.getType();
}