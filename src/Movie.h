#ifndef CINEMA_MOVIE_H
#define CINEMA_MOVIE_H


#include "Date.h"
#include "utils/SuperOutput.h"

class Movie
{
public:
    Movie(std::string& name, int year, int month, int day);
    Movie(std::string& name, Date& date);
    Date& getReleaseDate();
    std::string getName();
    int getRating();
    bool operator== (Movie &);
    Movie& operator++();
    friend SuperOutput& operator<<(SuperOutput&, Movie&);
private:
    Movie();
    Date* releaseDate;
    std::string name;
    int rating;
};


#endif //CINEMA_MOVIE_H
