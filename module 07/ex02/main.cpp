#include "Array.hpp"

int main()
{
	Array<int> array(5);
	for (int i = 0; i < array.size(); ++i)
		array[i] = 5;

	Array<int> intArray2 = array;
	Array<int> intArray3(array);
	Array<int> intArray4(5);
	intArray4 = array;
	cout << intArray2 << endl;
	cout << intArray3 << endl;
	cout << intArray4 << endl;

	Array<string> arr(2);
	arr[0] = "Word is";
	arr[0] = "best IDE";
	try {
		cout << arr[2] << endl;
	} catch (std::out_of_range &e) {
		cout << e.what() << endl;
	}

	return 0;
}