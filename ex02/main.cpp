#include <iostream>
#include <string>

int main(void)
{
    std::string hiThisIs;
    std::string *ptr;
    std::string &ref = hiThisIs;
    
    hiThisIs = "HI THIS IS BRAIN";
    ptr = &hiThisIs;
    std::cout << &hiThisIs << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ref << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;

    return (0);
}