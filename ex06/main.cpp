#include <string>
#include <iostream>
#include "Harl.hpp"

int getLevel(std::string level)
{
    if (level == "DEBUG")
        return (0);
    else if (level == "INFO")
        return (1);
    else if (level == "WARNING")
        return (2);
    else if (level == "ERROR")
        return (3);
    else 
        return (-1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Arguments missing." << std::endl;
        return (1);
    }
    Harl Harl;
    int intLevel;

    intLevel = getLevel(argv[1]);
    Harl.complain(intLevel);
    return (0);
}