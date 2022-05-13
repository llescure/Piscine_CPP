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
        std::cout << std::endl;
        if (user_input.compare("ADD") == 0)
        {
            current_book.add(nb_iteration);
            nb_iteration++;
        }
        else if (user_input.compare("SEARCH") == 0)
        {
            if (nb_iteration == 0)
            {
                std::cout << "Can't search for a contact. Phonebook is empty" << std::endl;
            }
            else
            {
                current_book.display(nb_iteration);
            }
        }
        else if (user_input.compare("EXIT") == 0)
        {
            return (0) ;
        }
        else
        {
            std::cout << "Wrong command" << std::endl;
            std::cout << "Must be ADD, SEARCH or EXIT\n" << std::endl;
        }
    }
}