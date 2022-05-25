#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  valls("Valls", 10);
    Bureaucrat  hollande("Hollande", 1);
    Bureaucrat  poutou("Poutou", 150);
    Bureaucrat  hidalgo("Hidalgo", 0);

    std::cout << std::endl;
    std::cout << valls << std::endl;
    std::cout << hollande << std::endl;
    std::cout << poutou << std::endl;
    std::cout << hidalgo << std::endl;
    
    std::cout << std::endl;
    hollande.increaseGrade();
    poutou.decreaseGrade();
    std::cout << std::endl;
}