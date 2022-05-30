#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout << "Constructor:" << std::endl;
    Bureaucrat  degaulle("De Gaulle", 3);
    Bureaucrat  hollande("Hollande", 150);
    Form        fisca("2058", 3, 3);
    Form        tax("taxation", 3, 6);
    std::cout << std::endl;

    std::cout << "Test operator << " << std::endl;
    std::cout << degaulle << std::endl;
    std::cout << hollande << std::endl;
    std::cout << fisca << std::endl;

    std::cout << "Test beSigned and signForm false:" << std::endl;
    fisca.beSigned(hollande);
    hollande.signForm(fisca);
    degaulle.signForm(tax);
    std::cout << std::endl;

    std::cout << "Test beSigned and signForm true:" << std::endl;
    fisca.beSigned(degaulle);
    degaulle.signForm(fisca);
    std::cout << std::endl;

    std::cout << "Test decreaseGrade function member:" << std::endl;
    hollande.decreaseGrade();
    std::cout << std::endl;

    std::cout << "Test destructor" << std::endl;
}