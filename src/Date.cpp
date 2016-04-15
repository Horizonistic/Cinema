#include "Date.h"

using namespace std;

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::getDay()
{
    return this->day;
}

int Date::getMonth()
{
    return this->month;
}

int Date::getYear()
{
    return this->year;
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
    return out << date.getDay() << "/" << date.getMonth() << "/" << date.getYear();
}