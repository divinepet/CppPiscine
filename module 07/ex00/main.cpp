#include <iostream>
using std::cout;
using std::endl;

template<typename T>
void swap(T &a, T&b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T &a, T&b) {
	return (a == b) ? b : (a > b) ? b : a;
}

template<typename T>
T max(T &a, T&b) {
	return (a == b) ? b : (a > b) ? a : b;
}

int main() {
	cout.precision(1);
	cout << std::fixed;

	cout << "\tSWAP INT" << endl;
	int a = 4, b = 12;
	cout << "BEFORE: " << "a: " << a << ", b: " << b << endl;
	swap(a, b);
	cout << "AFTER: " << "a: " << a << ", b: " << b << endl;

	cout << "\tSWAP DOUBLE" << endl;
	double c = 4.4, d = 17.7;
	cout << "BEFORE: " << "c: " << c << ", d: " << d << endl;
	swap(c, d);
	cout << "AFTER: " << "c: " << c << ", d: " << d << endl;

	cout << "\tMIN INT" << endl;
	cout << min(a, b) << endl;

	cout << "\tMAX DOUBLE" << endl;
	cout << (double)min(a, b) << endl;

	return 0;
}
