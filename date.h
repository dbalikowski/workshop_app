#ifndef WORKSHOP_DATE_H
#define WORKSHOP_DATE_H
#include <ctime>

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date();
    Date(int d, int m, int y) : day(d), month(m), year(y) {};
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay();
    int getMonth();
    int getYear();
};


#endif //WORKSHOP_DATE_H