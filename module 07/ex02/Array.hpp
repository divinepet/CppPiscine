#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::endl;

template <typename T>
class Array {
	T *array;
	int _size;
public:
	Array();
	explicit Array(unsigned int n);
	Array<T>(Array &obj);
	virtual ~Array();

	T& operator[](int index);
	Array<T> &operator=(Array other);

	int size() const;
};

#include "Array.ipp"

template<typename T>
std::ostream &operator<<(std::ostream &out, Array<T> const &other);

