#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
const string BLUE = "\x1B[3;1;44;30m\t";
const string GREEN = "\x1B[3;1;42;30m\t";
const string RED = "\x1B[3;1;41;30m\t";
const string RESET = "\t\t\033[0m";


int main() {
	cout << GREEN + "Basic tests" + RESET << endl;

	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	const Animal* animals[] = {cat, dog};

	cout << BLUE + "Test deep of copies" + RESET << endl;

	Cat cat_1;
	Cat cat2(cat_1);
	cat_1 = cat2;

	cout << RED + "Test of memory freeing" + RESET << endl;
	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}

	return 0;
}
