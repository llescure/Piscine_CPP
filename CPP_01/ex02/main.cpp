#include <string>
#include <iostream>

int main(void)
{
    std::string str;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN";
    // Print the address
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    // Print the value
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}