#include "Animal.hpp"

Animal::Animal() {
	type = "???";
	cout << type + " was initialized" << endl;
}

Animal::~Animal() {
	cout << "Parent class was destroyed" << endl;
}

string Animal::getType() const {
	return type;
}

