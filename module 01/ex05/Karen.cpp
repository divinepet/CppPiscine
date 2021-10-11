#include "Karen.hpp"

void Karen::debug() { cout << debugString; }

void Karen::info() { cout << infoString; }

void Karen::warning() { cout << warningString; }

void Karen::error() { cout << errorString; }

void Karen::complain(string level) {
    void (Karen::*functions[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};    
    string array[4] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++) {
        if (array[i] == level) {
            (this->*functions[i])();
        }
    }
}

Karen::Karen() {}

Karen::~Karen() {}