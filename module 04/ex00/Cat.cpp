#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	cout << type + " was initialized" << endl;
}

Cat::~Cat() {
	cout << type + " was destroyed" << endl;
}

string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	cout << type + " said Meow" << endl;
}
