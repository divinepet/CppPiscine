#pragma once

#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Span {
	std::vector<int>	array;
	unsigned int		maxSize;
public:
	Span(unsigned int n);
	Span(const Span &obj);
	virtual ~Span() {};

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
	void	print(std::ostream &out);
			template<typename InputIterator>
	void	addNumber(InputIterator first, InputIterator last);

	Span &operator=(Span const &other);
	class TooLowArray: public std::exception { virtual const char* what() const throw(); };
};

#include "Span.ipp"
std::ostream &operator<<(std::ostream &out, Span &other);