#include <string>
#include "Client.h"

void Client::setName(std::string n) {
    name = n;
}

void Client::setLastName(std::string ln) {
    lastName = ln;
}

void Client::setEmail(std::string em) {
    email = em;
}

void Client::setPhoneNum(std::string pn) {
    phoneNum = pn;
}

std::string Client::getName() {
    return name;
}

std::string Client::getLastName() {
    return lastName;
}

std::string Client::getEmail() {
    return email;
}

std::string Client::getPhoneNum() {
    return phoneNum;
}