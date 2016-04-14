#include "Date.h"

Date::Date(int d, int m, int y)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::getDay()
{
    return this->day;
}

bool Date::operator==(Date& date)
{
    if (this->day == date.day)
    {
        if (this->month == date.month)
        {
            if (this->year == date.year)
            {
                return 1;
            }
        }
    }

    return 0;
}

bool Date::operator!=(Date& date)
{
    if (this->day == date.day)
    {
        if (this->month == date.month)
        {
            if (this->year == date.year)
            {
                return 0;
            }
        }
    }

    return 1;
}

bool Date::operator<(Date& date)
{
    if (this->year < date.year)
    {
        return 1;
    }
    else
    {
        if (this->month < date.year)
        {
            return 1;
        }
        else
        {
            if (this->day < date.day)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}

std::ostream& operator<<(std::ostream& out, Date& date)
{
    return std::cout << date.day;
}