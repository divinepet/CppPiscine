#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	cout << type + " was initialized" << endl;
}

Dog::Dog(const Dog &obj) : Animal(obj) {}

Dog::~Dog() {
	cout << type + " was destroyed" << endl;
}

string Dog::getType() const {
	return type;
}

void Dog::makeSound() const {
	cout << type + " said Woof" << endl;
}

Dog &Dog::operator=(Dog const &other) {
	type = other.getType();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Dog const &other) {
	return out << other.getType();
}