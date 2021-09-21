#include "Span.hpp"

Span::Span(unsigned int n) : maxSize(n) {}

Span::Span(const Span &obj) {
	array = obj.array;
}

void Span::addNumber(int n) {
	if (maxSize == array.size())
		throw std::out_of_range("Error: Array already full");
	array.push_back(n);
}

template<typename InputIterator>
void Span::addNumber(InputIterator first, InputIterator last) {
	if ((*last - *first) > static_cast<int>(maxSize))
		throw std::out_of_range("Error: Array already full");
	array.insert(array.begin(), first, last);
}

int Span::shortestSpan() {
	if (array.size() < 2)
		throw TooLowArray();
	std::sort(array.begin(), array.end());

	int min = -1;
	vector<int>::iterator prev = array.begin();
	vector<int>::iterator current = array.begin() + 1;
	for (; current != array.end(); ++current, ++prev)
		if ((*current - *prev) < min || min == -1)
			min = *current - *prev;
	return min;
}

int Span::longestSpan() {
	if (array.size() < 2)
		throw TooLowArray();
	int a = *max_element(array.begin(), array.end());
	int b = *min_element(array.begin(), array.end());
	return a - b;
}

void Span::print(std::ostream &out) {
	vector<int>::iterator it;
	for (it = array.begin(); it != array.end(); ++it) {
		out << *it << " ";
	}
}

Span &Span::operator=(Span const &other) {
	array = other.array;
	return (*this);
}

const char* Span::TooLowArray::what() const throw() { return "Error: Array is too low"; }

std::ostream &operator<<(std::ostream &out, Span &other) {
	other.print(out);
	return out;
}
