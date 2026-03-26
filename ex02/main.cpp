#include <iostream>
#include <string>

int main(void)
{
    std::string hiThisIs;
    std::string *stringPTR;
    std::string &stringREF = hiThisIs;
    
    hiThisIs = "HI THIS IS BRAIN";
    stringPTR = &hiThisIs;
    
    std::cout << &hiThisIs << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << hiThisIs << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return (0);
}