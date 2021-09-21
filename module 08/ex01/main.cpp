#include <list>
#include "Span.hpp"

int main() {
	Span store = Span(1);
	store.addNumber(4);
	cout << "Array: " << store << endl;
	try { store.addNumber(5); }
	catch (std::exception &e) { cout << e.what() << endl; }

	try { cout << store.shortestSpan(); }
	catch (std::exception &e) { cout << e.what() << endl; }

	try { cout << store.longestSpan(); }
	catch (std::exception &e) { cout << e.what() << endl << endl; }


	Span store1 = Span(2521);
	store1.addNumber(4);
	store1.addNumber(17);
	store1.addNumber(33);
	store1.addNumber(634);
	store1.addNumber(77);
	cout << "Array: " << store1 << endl;
	cout << "shortest: " << store1.shortestSpan() << endl;
	cout << "longest: " << store1.longestSpan() << endl << endl;


	std::list<int> list;
	std::list<int>::iterator it_list;

	for (int i = 0; i < 10000; ++i)
		list.push_back(i);
	Span store2 = Span(10000);
	store2.addNumber(list.begin(), list.end());
	cout << "Array: 0 1 2 ... 9999" << endl;
	cout << "shortest: " << store2.shortestSpan() << endl;
	cout << "longest: " << store2.longestSpan() << endl << endl;

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	cout << "Array: " << sp << endl;
	cout << "shortest: " << sp.shortestSpan() << endl;
	cout << "longest: " << sp.longestSpan() << endl;
	return 0;
}
