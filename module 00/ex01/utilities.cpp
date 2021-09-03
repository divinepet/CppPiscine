#include "User.hpp"

string getInput() {
    string s;
    while (std::getline(std::cin, s)) {
        return s;
    }
    return "";
}

string parseString(string str) {
    if (str.length() > 10) {
        str.erase(10);
        str[9] = '.';
    } else {
        int len = 10 - str.length();
        for (int i = 0; i < len; i++) {
            str.insert(0, " ");
        }
    }
    return str;
}