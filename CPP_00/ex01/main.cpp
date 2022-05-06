#include "Phonebook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int main(void)
{
    std::string      user_input;
    PhoneBook   current_book;
    int         nb_iteration;

    nb_iteration = 0;
    while (1)
    {
        std::cout << "Enter a command" << std::endl;
        std::cin >> user_input;
        if (user_input.compare("ADD"))
        {
            current_book.add();
            nb_iteration++;
        }
        else if (user_input.compare("SEARCH"))
        {
            if (nb_iteration == 0)
            {
                std::cout << "Can't search for a contact. Phonebook is empty" << std::endl;
            }
            current_book.display();
        }
        else if (user_input.compare("EXIT"))
        {
            return (0) ;
        }
        else
        {
            std::cout << "Wrong command" << std::endl;
            std::cout << "Must be ADD, SEARCH or EXIT" << std::endl;
        }
    }
}