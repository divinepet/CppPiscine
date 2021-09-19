#include "Array.hpp"

template<typename T>
Array<T>::Array() {
	array = new T[10];
	_size = 10;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	array = new T[n];
	_size = n;
}

template<typename T>
Array<T>::Array(Array &obj) {
	_size = obj.size();
	array = new T[_size];

	for (int i = 0; i < _size; ++i)
		array[i] = obj[i];
}

template<typename T>
Array<T>::~Array() {
	delete[] array;
}

template <typename T>
int Array<T>::size() const {
	return _size;
}

template<class T>
T& Array<T>::operator[](int index) {
	if (index < 0 || index >= _size)
		throw std::out_of_range ("Error: out of range");
	return array[index];
}

template<class T>
Array<T> &Array<T>::operator=(Array other) {
	if (this == &other)
		return *this;
	delete[] array;
	_size = other.size();
	array = new T[_size];
	for (int i = 0; i < _size; ++i) {
		array[i] = other[i];
	}
	return (*this);
}

template<class T>
std::ostream &operator<<(std::ostream &out, Array<T> &other) {
	int size = other.size();
	for (int i = 0; i < size; ++i) {
		out << other[i];
	}
	return out;
}
