#include <iostream>
#include "Visit.h"

void Visit::printVisit() {
    std::cout << this->date.getDay() << " " << this->date.getMonth() << " " << this->date.getYear();
    std::cout << " ";
    std::cout << this->client.getName() << " " << this->client.getLastName() << " " << this->client.getEmail() << " " << this->client.getPhoneNum();
    std::cout << " ";
    std::cout << "isReady: " << isReady << " isReturned: " << isReturned;
}