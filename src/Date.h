#ifndef CINEMA_DATE_H
#define CINEMA_DATE_H

#include "utils/SuperOutput.h"
#include <iostream>
#include <ostream>

class Date
{
public:
    int day;
    Date(int, int, int);
    int getDay();
    bool operator==(Date&);
    bool operator!=(Date&);
    bool operator< (Date&);
    friend std::ostream& operator<<(std::ostream& out, Date& date);
private:
    int month, year;
};

#endif //CINEMA_DATE_H