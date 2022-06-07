#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  valls("Valls", 10);
    Bureaucrat  hollande("Hollande", 1);
    Bureaucrat  poutou("Poutou", 150);
    std::cout << std::endl;
    std::cout << "Try creating a bureaucrat with grade 0:" << std::endl;
    Bureaucrat  hidalgo("Hidalgo", 0);

    std::cout << std::endl;
    std::cout << valls << std::endl;
    std::cout << hollande << std::endl;
    std::cout << poutou << std::endl;
    std::cout << hidalgo << std::endl;
    
    std::cout << std::endl;
    std::cout << "Try incrementing a bureaucrat of grade 1:" << std::endl;
    hollande.increaseGrade();

    std::cout << std::endl;
    std::cout << "Try decrementing a bureaucrat of grade 150:" << std::endl;
    poutou.decreaseGrade();
    std::cout << std::endl;
}