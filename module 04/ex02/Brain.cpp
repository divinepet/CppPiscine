#include "Brain.hpp"

Brain::Brain() {
    cout << "Brain constructor called" << endl;
}

Brain::~Brain() {
    cout << "Brain destructor called" << endl;
}

Brain::Brain(Brain const &brain) {
    for (size_t i = 0; i < ideas->size(); i++) {
        ideas[i] = brain.ideas[i];
    }
}

Brain& Brain::operator= (const Brain &brain) {
    if (this == &brain)
        return *this;
    for (size_t i = 0; i < ideas->size(); i++) {
        ideas[i] = brain.ideas[i];
    }
    return *this;
}