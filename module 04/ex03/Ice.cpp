#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &other) {
    *this = other;
}

Ice &Ice::operator=(const Ice &other) {
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

AMateria *Ice::clone() const {
    Ice *tmp = new Ice();
    *tmp = *this;
    return (tmp);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
