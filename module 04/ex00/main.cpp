#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	cout << "\x1B[0;42m\tTESTS\t\t\033[0m" << endl; /** TESTS with wrong class **/
	const WrongAnimal* meta_t = new WrongAnimal();
	const WrongAnimal* i_t = new WrongCat();
	i_t->makeSound();
	meta_t->makeSound();

	cout << "\x1B[0;41m\tDESTRUCTORS\t\033[0m" << endl; /** Destruct all classes **/
	delete meta, delete j, delete i, delete meta_t, delete i_t;
	return 0;
}
