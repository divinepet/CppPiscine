#pragma once
#include <iostream>
#include <string>
#include "User.hpp"
typedef std::string string;
using std::cout;

string getInput();
string parseString(string str);


class User {
    string firstName;
    string lastName;
    string nickName;
    string phone;
    string secret;
public:
    void setFirstName(const string &firstName);
    void setLastName(const string &lastName);
    void setNickName(const string &nickName);
    void setPhone(const string &phone);
    void setSecret(const string &secret);
    string &getFirstName();
    string &getLastName();
    string &getNickName();
    string &getPhone();
    string &getSecret();
    User();
};
