#include "Movie.h"

Movie::Movie(std::string& name, int year, int month, int day)
{
    this->name = name;
    this->releaseDate = new Date(year, month, day);
}

Movie::Movie(std::string &name, Date &date)
{
    this->name = name;
    this->releaseDate = &date;
}

Date& Movie::getReleaseDate()
{
    return *this->releaseDate;
}

std::string Movie::getName()
{
    return this->name;
}

int Movie::getRating()
{
    return this->rating;
}

bool Movie::operator==(Movie& movie)
{
    return (this->rating == movie.rating);
}

Movie& Movie::operator++()
{
    this->rating++;
    return *this;
}

SuperOutput& operator<<(SuperOutput& so, Movie &movie)
{
    so.println("Name: " + movie.name);
    so.println(movie.getReleaseDate());
}

Movie::Movie()
{
    // todo?
}
