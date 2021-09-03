#include "Karen.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        Karen* karen = new Karen();
        karen->complain(av[1]);
        delete karen;
    }
    return 0;
}
