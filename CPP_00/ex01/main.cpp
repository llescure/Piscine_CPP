#include <Phonebook.hpp>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;



int main(void)
{
    string      user_input;
    PhoneBook   current_book;

    while (1)
    {
        cout << "Enter a command" << endl;
        cin >> user_input;
        if (strcmp(user_input, "ADD") == 0)
        {
            current_book.add();
        }
        else if (strcmp(user_input, "SEARCH") == 0)
        {
            current_book.search();
        }
        else if (strcmp(user_input, "EXIT") == 0)
        {
            return (EXIT_SUCCESS) ;
        }
        else
        {
            cout << "Wrong command" << endl;
            cout << "Must be ADD, SEARCH or EXIT" << endl;
        }
    }
}