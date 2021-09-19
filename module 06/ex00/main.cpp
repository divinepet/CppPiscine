#include <iostream>
using std::cout;
using std::endl;

int main(int ac, char **av) {
	if (ac != 2)
		return 0;
	cout.precision(1);
	cout << std::fixed;

	try {
		char c = static_cast<char>(std::stoi(av[1]));
		if (!std::isprint(c))
			cout << "char: Non displayable" << endl;
		else
			cout << "char: '" << c << "'" << endl;
	} catch (std::exception &exception) {
		cout << "char: impossible" << endl;
	}

	try {
		int i = std::stoi(av[1]);
		cout << "int: " << i << endl;
	} catch (std::exception &exception) {
		cout << "int: impossible" << endl;
	}

	try {
		float f = std::stof(av[1]);
		cout << "float: " << f << "f" << endl;
	} catch (std::out_of_range &outOfRange) {
		cout << "float: " << std::numeric_limits<float>::infinity() << "f" << endl;
	} catch (std::exception &exception) {
		cout << "float: impossible" << endl;
	}

	try {
		double d = std::stod(av[1]);
		cout << "double: " << d << endl;
	} catch (std::out_of_range &outOfRange) {
		cout << "double: " << std::numeric_limits<double>::infinity() << endl;
	} catch (std::exception &exception) {
		cout << "double: impossible" << endl;
	}


	return 0;
}