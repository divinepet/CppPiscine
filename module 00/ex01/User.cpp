#include "User.hpp"

string &User::getFirstName() {
    return firstName;
}

string &User::getLastName() {
    return lastName;
}

string &User::getNickName() {
    return nickName;
}

string &User::getPhone() {
    return phone;
}

string &User::getSecret() {
    return secret;
}

void User::setFirstName(const string &firstName) {
    User::firstName = firstName;
}

void User::setLastName(const string &lastName) {
    User::lastName = lastName;
}

void User::setNickName(const string &nickName) {
    User::nickName = nickName;
}

void User::setPhone(const string &phone) {
    User::phone = phone;
}

void User::setSecret(const string &secret) {
    User::secret = secret;
}

User::User() {}
