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
    void print(std::string input);
    void println();
    void println(std::string input);
    void printFile(std::string input);
    void printlnFile();
    void printlnFile(std::string input);
    void close();
};

#endif //SUPEROUTPUT_H
