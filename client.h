#ifndef WARSZTAT_CLIENT_H
#define WARSZTAT_CLIENT_H
#include <string>

class Client {
private:
    std::string name;
    std::string lastName;
    std::string email;
    std::string phoneNum;
public:
    Client() : name("John"), lastName("Doe"), email("JD@gmail.com"), phoneNum("506295163") {};
    Client(std::string n, std::string ln, std::string em, std::string pn) : name(n), lastName(ln), email(em), phoneNum(pn) {};
    void setName(std::string);
    void setLastName(std::string);
    void setEmail(std::string);
    void setPhoneNum(std::string);
    std::string getName();
    std::string getLastName();
    std::string getEmail();
    std::string getPhoneNum();
};
#endif //WARSZTAT_CLIENT_H
