#ifndef CINEMA_DATE_H
#define CINEMA_DATE_H

#include <iostream>
#include <ostream>

class Date
{
public:
    Date(int, int, int);
    int getDay();
    int getMonth();
    int getYear();
    bool operator==(Date&);
    bool operator!=(Date&);
    bool operator< (Date&);
    friend std::ostream& operator<<(std::ostream& out, Date& date);
private:
    int day, month, year;
};

#endif //CINEMA_DATE_H