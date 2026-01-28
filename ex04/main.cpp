#include <string> 
#include <iostream>
#include <fstream>

bool    checkFiles(std::ifstream &inputFile, std::ofstream &outputFile)
{
    if (inputFile.is_open() && outputFile.is_open())
        return (1);
    return (0);
}

std::string findAndReplace(std::string )

int main(int argc, char **argv)
{
    std::string inputFileN;
    std::string outputFileN;
    if (argc != 4)
    {
        std::cout << "Arguments missing." << std::endl;
        return (1);
    }
    inputFileN = argv[1];
    outputFileN = argv[1] + ".replace";
    std::ifstream inputFile;
    std::ofstream outputFile;
    inputFile.open(inputFileN);
    outputFile.open(outputFileN); 
    if (checkFiles(inputFile, outputFile) == 0)
    {
        std::cout << "Error while openning the files" << std::endl;
        return (1);
    }
    findAndReplace(inputFileN, argv[2], argv[3], inputFile, outputFile);

}