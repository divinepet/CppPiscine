#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
	cout << type + " was initialized" << endl;
}

Cat::~Cat() {
	delete brain;
	cout << type + " was destroyed" << endl;
}

string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	cout << type + " said Meow" << endl;
}

Cat::Cat(const Cat &cat) {
	cout << "Not basic cat's copy constructor called" << endl;
	if (cat.brain)
		brain = new Brain();
	else
		brain = nullptr;
}

Cat& Cat::operator= (const Cat &cat) {
	cout << "Not basic cat's assign operator overload called" << endl;
	if (this == &cat)
		return *this;
	delete brain;
	if (cat.brain)
		brain = new Brain();
	else
		brain = nullptr;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Cat const &other) {
	return out << other.getType();
}