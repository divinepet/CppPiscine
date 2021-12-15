#include <iostream>

int main(int ac, char **av) {
	if (ac > 1) {
		while (*++av)
			while (*(*av))
				std::cout << (char)std::toupper(*(*av)++);
	} else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	endl(std::cout);
	return 0;
}
