#include <iostream>
#include <sstream>
#include "utils/SuperOutput.h"
#include "Date.h"
#include "Movie.h"

using namespace std;

static int stringToInt(string& text)
{
    stringstream integer(text);
    int result;
    return integer >> result ? result : 0;
}

int main()
{
    SuperOutput* so = new SuperOutput("output.txt");

    char buffer[33];
    Date* date = new Date(2, 3, 2016);
    string name = "test";
    Movie* movie = new Movie(name, *date);

    string line = "";
    ifstream file;
    file.open("intput.txt");
    if (file.is_open())
    {
        while (!file.eof())
        {
            getline(file, line);
            int integer = stringToInt(line);

            switch (integer)
            {
                case 1: // Movie
                    // todo
                    break;

                case 2: // Cinema showing
                    // todo
                    break;

                default:
                    break;
            }
        }
    }
}