#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;
using std::toupper;

void print(char c) {
    cout << c;
}

int main(int ac, char **av) {
    if (ac > 1) {
        while (*++av) {
            while (*(*av)) {
                print(toupper(*(*av)++));
            }
        }
    } else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    endl (cout);
    return 0;
}