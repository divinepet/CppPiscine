#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using std::string;
using std::cout;
using std::endl;

template<typename T>
typename T::iterator easyfind(T &container, int num) {
	return std::find(container.begin(), container.end(), num);
}

template<typename key, typename value>
typename std::map<key, value>::iterator easyfind(std::map<key, value> &container, int num) {
	typename std::map<key, value>::iterator it;
	for (it = container.begin(); it != container.end(); ++it) {
		if (it->first == num)
			return (it);
	}
	return it;
}

template<typename key, typename value>
typename std::multimap<key, value>::iterator easyfind(std::multimap<key, value> &container, int num) {
	typename std::multimap<key, value>::iterator it;
	for (it = container.begin(); it != container.end(); ++it) {
		if (it->first == num)
			return (it);
	}
	return it;
}

int main() {
	std::vector<int> vector;
	std::vector<int>::iterator v_it;

	for (int i = 0; i < 10; ++i)
		vector.push_back(i);
	for (v_it = vector.begin(); v_it != vector.end(); ++v_it)
		cout << *v_it << " ";
	v_it = easyfind(vector, 3);
	cout << endl << *v_it << endl << endl;



	std::map<int, string> map;
	std::map<int, string>::iterator m_it;

	for (int i = 0; i < 4; ++i)
		map.insert(std::make_pair(i, "hi"));
	for (m_it = map.begin(); m_it != map.end(); ++m_it)
		cout << "{" << m_it->first << ": " << m_it->second << "} ";
	cout << endl;
	m_it = easyfind(map, 2);
	cout << m_it->first << ": " << m_it->second << endl;
	m_it = easyfind(map, 4);
	(m_it != map.end())
		? cout << m_it->first << ": " << m_it->second
		: cout << "No such index in map";
	cout << endl << endl;



	std::multimap<int, string> multimap;
	std::multimap<int, string>::iterator ml_it;

	for (int i = 0; i < 4; ++i)
		multimap.insert(std::make_pair(i, "pop-it"));
	for (ml_it = multimap.begin(); ml_it != multimap.end(); ++ml_it)
		cout << "{" << ml_it->first << ": " << ml_it->second << "} ";
	cout << endl;
	ml_it = easyfind(multimap, 2);
	(ml_it != map.end())
	? cout << ml_it->first << ": " << ml_it->second
	: cout << "No such index in map";
	cout << endl << endl;
	
	return 0;
}
