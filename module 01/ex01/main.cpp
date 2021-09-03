#include "Zombie.hpp"

int main() {
    Zombie* array = zombieHorde(3, "alex");
    usleep(3000000);
    delete[] array;
    return 0;
}
