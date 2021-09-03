#pragma once
#include <iostream>
using std::string;
using std::cout;
const string debugString = "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
const string infoString = "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
const string warningString = "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
const string errorString = "This is unacceptable, I want to speak to the manager now.\n";

class Karen {
    void debug();
    void info();
    void warning();
    void error();
public:
    void complain(string level);
    Karen();
    ~Karen();
};
