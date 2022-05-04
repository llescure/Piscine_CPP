#include <Phonebook.hpp>
#include <iostream>
#include <string>
#include <iomanip>

using namespace <std>

int main(void)
{
    str user_input;

    while (1)
    {
        cout << "Enter a command" << endl;
        cin >> user_input;
        if (strcmp(user_input, "ADD") == 0)
        {
            add_function();
        }
        else if (strcmp(user_input, "SEARCH") == 0)
        {
            search_function();
        }
        else if (strcmp(user_input, "EXIT") == 0)
        {
            exit_function();
            return (EXIT_SUCCESS) ;
        }
        else
        {
            cout << "Wrong command" << endl;
            cout << "Must be ADD, SEARCH or EXIT" << endl;
        }
    }
}