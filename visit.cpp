#include <iostream>
#include "Visit.h"

void Visit::printVisit() {
    std::cout << this->date.getDay() << " " << this->date.getMonth() << " " << this->date.getYear();
    std::cout << " ";
    std::cout << this->client.getName() << " " << this->client.getLastName() << " " << this->client.getEmail() << " " << this->client.getPhoneNum();
    std::cout << " ";
    std::cout << "isReady: " << isReady << " isReturned: " << isReturned << std::endl;
}

Date Visit::getDate() {
    return date;
}

void Visit::setDate(int d,int m,int y) {
    date.setDay(d);
    date.setMonth(m);
    date.setYear(y);
}

Client Visit::getClient() {
    return client;
}

void Visit::setClient(std::string n, std::string ln, std::string em, std::string tel) {
    client.setName(n);
    client.setLastName(ln);
    client.setEmail(em);
    client.setPhoneNum(tel);
}

bool Visit::getIsReady() {
    return isReady;
}

void Visit::setIsReady(bool p) {
    isReady = p;
}

bool Visit::getIsReturned() {
    return isReturned;
}

void Visit::setIsReturned(bool p) {
    isReturned = p;
}