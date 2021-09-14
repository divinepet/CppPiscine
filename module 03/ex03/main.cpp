#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondTrap("DiamondTrap");
	diamondTrap.attack("Super J");
	diamondTrap.takeDamage(4);
	diamondTrap.beRepaired(10);
	diamondTrap.whoAmI();
    return 0;
}
