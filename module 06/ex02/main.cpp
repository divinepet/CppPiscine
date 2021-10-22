#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
	Base *inventory[] = {new A(), new B(), new C()};
	int index = rand() % 3;
	for (int i = 0; i < 3; i++)
		if (i != index) delete inventory[i];
	return inventory[index];
}

void identify(Base* p) {
	(dynamic_cast<A*>(p) != nullptr) ? cout << "A" << endl : 0;
	(dynamic_cast<B*>(p) != nullptr) ? cout << "B" << endl : 0;
	(dynamic_cast<C*>(p) != nullptr) ? cout << "C" << endl : 0;
}

void identify(Base& p) {
	identify(&p);
}

int main() {
	srand(time(NULL));
	Base *b = generate();
	identify(b);
	identify(*b);
	while (true) {}
	return 0;
}
