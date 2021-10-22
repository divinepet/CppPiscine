#include <iostream>
using std::cout;
using std::endl;

struct Data {
	std::string s1;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(&*ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data *data = new Data;

	data->s1 = "hello";
	cout << "ORIGINAL ADDRESS: " << &*data << endl;
	Data *data2 = deserialize(serialize(&*data));
	cout << "NEW COPY ADDRESS: " << data2 << endl;
	cout << "VALUE OF COPY: " << (*data2).s1 << endl;
}
