#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	cout << type + " was initialized" << endl;
}

Dog::~Dog() {
	cout << type + " was destroyed" << endl;
}

string Dog::getType() const {
	return type;
}

void Dog::makeSound() const {
	cout << type + " said Woof" << endl;
}
