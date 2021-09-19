#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	cout << type + " was initialized" << endl;
}

Cat::Cat(const Cat &obj) : Animal(obj) {}

Cat::~Cat() {
	cout << type + " was destroyed" << endl;
}

string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	cout << type + " said Meow" << endl;
}

Cat &Cat::operator=(Cat const &other) {
	type = other.getType();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Cat const &other) {
	return out << other.getType();
}