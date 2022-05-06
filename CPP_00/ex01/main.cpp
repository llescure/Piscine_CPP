#include <Phonebook.hpp>
#include <iostream>
#include <string>
#include <iomanip>

int main(void)
{
    string      user_input;
    PhoneBook   current_book;

    while (1)
    {
        std::cout << "Enter a command" << std::endl;
        std::cin >> user_input;
        if (user_input.compare("ADD"))
        {
            current_book.add();
        }
        else if (user_input.compare("SEARCH"))
        {
            current_book.search();
        }
        else if (user_input.compare("EXIT"))
        {
            return (EXIT_SUCCESS) ;
        }
        else
        {
            std::cout << "Wrong command" << std::endl;
            std::cout << "Must be ADD, SEARCH or EXIT" << std::endl;
        }
    }
}