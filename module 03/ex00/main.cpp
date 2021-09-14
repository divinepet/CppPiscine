#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("CLAP-TRAP2000");
	clapTrap.attack("Jack");
	clapTrap.takeDamage(4);
	clapTrap.beRepaired(5);
    return 0;
}
