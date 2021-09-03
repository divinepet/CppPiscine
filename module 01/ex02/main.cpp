#include <iostream>
using std::cout;
using std::string;

int main() {
    string str = "HI THIS IS BRAIN";
    string* stringPTR = &str;
    string& stringREF = str;

    cout << &str << "\n";       // адрес строки в памяти
    cout << stringPTR << "\n";  // адрес строки в памяти с помощью stringPTR
    cout << &stringREF << "\n"; // адрес строки в памяти с помощью stringREF

    cout << *stringPTR << "\n"; // вывод строки с помощью указателя
    cout << stringREF << "\n";  // вывод строки с помощью ссылки
}
