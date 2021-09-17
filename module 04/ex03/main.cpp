#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
const string CYAN = "\x1B[3;96m\t\t";
const string RESET = "\033[0m";

int main() {
	cout << CYAN + "SUBJECT TESTS" + RESET << endl;
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
	cout << CYAN + "OWN TESTS" + RESET << endl;
	AMateria* m = tmp->clone();
	cout << tmp->getType() << endl;
	cout << m->getType() << endl;
	bob->unequip(0);
	bob->use(0, *me);
	delete m;
	delete bob;
	delete me;
	delete src;
}
