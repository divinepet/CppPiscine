#include "Zombie.hpp"

void Zombie::announce() {
    cout << "<" << name << "> " << "BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(string name) {
    this->name = name;
}

Zombie::~Zombie() {
    cout << "<" << name << "> " << "* DEAD *\n";
}
