#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout << "Constructor" << std::endl;
    Bureaucrat  degaulle("De Gaulle", 3);
    Bureaucrat  hollande("Hollande", 5);
    Form        fisca("2058", 3, 3);
    std::cout << std::endl;

    std::cout << "Test operator << " << std::endl;
    std::cout << degaulle << std::endl;
    std::cout << hollande << std::endl;
    std::cout << fisca << std::endl;
    std::cout << std::endl;

    std::cout << "Test beSigned function member" << std::endl;
    fisca.beSigned(hollande);
    fisca.beSigned(degaulle);
    std::cout << std::endl;

    std::cout << "Test signForm function member" << std::endl;
    hollande.signForm(fisca);
    degaulle.signForm(fisca);
    std::cout << std::endl;

    std::cout << "Test increaseGrade function member" << std::endl;
    hollande.increaseGrade();
    std::cout << std::endl;

    std::cout << "Test destructor" << std::endl;
}