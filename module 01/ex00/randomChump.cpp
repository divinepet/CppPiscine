#include "Zombie.hpp"

void randomChump(string name) {
    Zombie* zombie = newZombie(name);
    zombie->announce();
    usleep(3000000);
    delete zombie;
}