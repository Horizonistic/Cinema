#include "SuperOutput.h"
#include <iostream>

SuperOutput::SuperOutput(std::string filename)
{
    this->file.open(filename);
}

template<typename T>
void SuperOutput::print(T input)
{
    std::cout << input;
    this->file << input;
}

void SuperOutput::println()
{
    std::cout << "\n";
    this->file << "\n";
}

template<typename T>
void SuperOutput::println(T input)
{
    std::cout << std::endl << input;
    this->file << std::endl << input;
}

template<typename T>
void SuperOutput::printFile(T input)
{
    this->file << input;
}

void SuperOutput::printlnFile()
{
    this->file << std::endl;
}

template<typename T>
void SuperOutput::printlnFile(T input)
{
    this->file << std::endl << input;
}

void SuperOutput::close()
{
    this->file.close();
}

SuperOutput& operator<<(SuperOutput& so, Date& date)
{
    so.println("test");
    return so;
}

SuperOutput& operator<<(SuperOutput& so, const char[])
{
    so.println();
    return so;
}
