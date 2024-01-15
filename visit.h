#ifndef WARSZTAT_VISIT_H
#define WARSZTAT_VISIT_H
#include <string>
#include "Date.h"
#include "Client.h"


class Visit {
private:
    Date date;
    Client client;
    bool isReady;
    bool isReturned;
public:
    Visit() : isReady(0), isReturned(0) {};
    Visit(int d, int m, int y, std::string n, std::string ln, std::string em, std::string pn, bool rdy, bool rnd) : date(d, m, y), client(n, ln, em, pn), isReady(rdy), isReturned(rnd) {};
    void printVisit();
    Date getDate();
    void setDate(int,int,int);
    Client getClient();
    void setClient(std::string, std::string, std::string, std::string);
    bool getIsReady();
    void setIsReady(bool);
    bool getIsReturned();
    void setIsReturned(bool);
};

#endif //WARSZTAT_VISIT_H
