#include "ScavTrap.hpp"

int main() {
    ScavTrap scavTrap("SCAVTRAP");
    scavTrap.attack("HANDSOME JACK");
    scavTrap.takeDamage(17);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();
    return 0;
}
