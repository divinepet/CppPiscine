#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	cout << type + " was initialized" << endl;
}

WrongCat::~WrongCat() {
	cout << type + " was destroyed" << endl;
}

void WrongCat::makeSound() const {
	cout << type + " said wrong Meow" << endl;
}
