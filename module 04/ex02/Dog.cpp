#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	cout << type + " was initialized" << endl;
}

Dog::~Dog() {
	delete brain;
	cout << type + " was destroyed" << endl;
}

string Dog::getType() const {
	return type;
}

void Dog::makeSound() const {
	cout << type + " said Woof" << endl;
}

Dog::Dog(const Dog &dog) {
    cout << "Not basic dog's copy constructor called" << endl;
    this->type = dog.type;
    this->brain = new Brain(*dog.brain);
}

Dog& Dog::operator= (const Dog &dog) {
    cout << "Not basic dog's assign operator overload called" << endl;
    if (this == &dog)
        return *this;
    delete brain;
    type = dog.type;
    brain = new Brain(*dog.brain);
    return *this;
}

std::ostream &operator<<(std::ostream &out, Dog const &other) {
	return out << other.getType();
}