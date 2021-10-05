#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
const std::string CYAN = "\x1B[3;96m\t\t";
const std::string RESET = "\033[0m";

int main() {
	std::cout << CYAN + "SUBJECT TESTS" + RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << CYAN + "OWN TESTS" + RESET << std::endl;
	AMateria* m = tmp->clone();
	std::cout << tmp->getType() << std::endl;
	std::cout << m->getType() << std::endl;
	bob->unequip(0);
	bob->use(0, *me);
	delete m;
	delete bob;
	delete me;
	delete src;
}
