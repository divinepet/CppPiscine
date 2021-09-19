#include "Animal.hpp"

Animal::Animal() {
	type = "???";
	cout << type + " was initialized" << endl;
}

Animal::Animal(const Animal &obj) {
	this->type = obj.type;
}

Animal::~Animal() {
	cout << "Parent class was destroyed" << endl;
}

string Animal::getType() const {
	return type;
}

Animal &Animal::operator=(Animal const &other) {
	type = other.type;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Animal const &other) {
	return out << other.getType();
}