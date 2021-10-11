#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "???";
	cout << type + " was initialized" << endl;
}

WrongAnimal::~WrongAnimal() {
	cout << "Parent class was destroyed" << endl;
}

void WrongAnimal::makeSound() const {}
