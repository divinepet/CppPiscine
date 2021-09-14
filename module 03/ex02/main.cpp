#include "FragTrap.hpp"

int main() {
    FragTrap fragTrap("FRAGTRAP_KILLER");
    fragTrap.attack("Best Of Handsome Jack's");
    fragTrap.takeDamage(17);
    fragTrap.beRepaired(10);
    fragTrap.highFivesGuys();
    return 0;
}
