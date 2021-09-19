#include <iostream>
using std::cout;
using std::endl;

template <class T>
void iter(T *array, int length, void (*fptr)(T)) {
	for (int i = 0; i < length; ++i) {
		fptr(array[i]);
	}
	cout << endl;
}

template <class T>
void printArray(T elem) {
	cout << elem << " ";
}

int main() {
	int array1[] = { 6, 4, 1, 3, 7 };
	iter(array1, 5, printArray);

	std::string array2[] = { "i", "hate", "the", "pointers", "and", "templates" };
	iter(array2, 6, printArray);
	return 0;
}
