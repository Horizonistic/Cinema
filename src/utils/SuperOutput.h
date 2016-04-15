#ifndef SUPEROUTPUT_H
#define SUPEROUTPUT_H

#include <iosfwd>
#include <fstream>
#include "../Date.h"

class SuperOutput
{
private:
    std::ofstream file;
public:
    SuperOutput(std::string filename);
    template<typename T>
    void print(T input);
    void println();
    template<typename T>
    void println(T input);
    template<typename T>
    void printFile(T input);
    void printlnFile();
    template<typename T>
    void printlnFile(T input);
    void close();
    friend SuperOutput& operator<<(SuperOutput& so, Date& date);
};

#endif //SUPEROUTPUT_H
