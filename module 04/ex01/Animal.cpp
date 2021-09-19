#include "Animal.hpp"

Animal::Animal() {
	type = "Animal";
	cout << type + " was initialized" << endl;
}

Animal::~Animal() {
	cout << "Parent class was destroyed" << endl;
}

string Animal::getType() const {
	return type;
}

Animal::Animal(Animal const &animal) : type(animal.type) {}

Animal& Animal::operator= (Animal const &animal) {
	if (this == &animal)
		return *this;
	type = animal.type;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Animal const &other) {
	return out << other.getType();
}
