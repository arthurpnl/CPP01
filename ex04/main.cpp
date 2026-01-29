#include <string> 
#include <iostream>
#include <fstream>

bool    checkFiles(std::ifstream &inputFile, std::ofstream &outputFile)
{
    if (inputFile.is_open() && outputFile.is_open())
        return (1);
    return (0);
}


void findAndReplace(std::string s1, std::string s2, std::ifstream &inputFile, std::ofstream &outputFile)
{
    std::string line;

    while (std::getline(inputFile, line))
    {
        size_t pos = line.find(s1);
        if (pos != std::string::npos)
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        outputFile << line << std::endl; 
    }
}

int main(int argc, char **argv)
{
    std::string inputFileN;
    std::string outputFileN;
    if (argc != 4 || !argv[2][0])
    {
        std::cout << "Arguments missing." << std::endl;
        return (1);
    }
    inputFileN = argv[1];
    outputFileN = std::string(argv[1]) + ".replace";
    std::ifstream inputFile;
    std::ofstream outputFile;
    inputFile.open(inputFileN.c_str());
    outputFile.open(outputFileN.c_str()); 
    if (checkFiles(inputFile, outputFile) == 0)
    {
        std::cout << "Error while openning the files" << std::endl;
        return (1);
    }
    findAndReplace(argv[2], argv[3], inputFile, outputFile);
    return (0);
}