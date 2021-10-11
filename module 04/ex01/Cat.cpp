#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	this->brain = new Brain();
	cout << type + " was initialized" << endl;
}

Cat::~Cat() {
	cout << type + " was destroyed" << endl;
	delete brain;
}

string Cat::getType() const {
	return type;
}

void Cat::makeSound() const {
	cout << type + " said Meow" << endl;
}

Cat::Cat(const Cat &cat) {
	cout << "Not basic cat's copy constructor called" << endl;
	this->type = cat.type;
	brain = new Brain(*cat.brain);
}

Cat& Cat::operator= (const Cat &cat) {
	cout << "Not basic cat's assign operator overload called" << endl;
	if (this == &cat)
		return *this;
	delete brain;
	type = cat.type;
	brain = new Brain(*cat.brain);
	return *this;
}

std::ostream &operator<<(std::ostream &out, Cat const &other) {
	return out << other.getType();
}