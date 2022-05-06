#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    return ;
}

~PhoneBook::PhoneBook(void)
{
    std::cout << "Your phonebook is destroyed, you lost all your contacts" << std::endl;
    return ;
}

void    PhoneBook::add()
{
    Contact new_contact;
    
    for(int i = 0, i < 7, i++)
    {
        if (std::is_empty(this.contact[i]) == true)
        {
            this.contact[i] = new_contact;
            return ;
        }
    }
    this.contact[i] = new_contact;
    return ;
}

void    PhoneBook::display()
{
    int id;

    id = 0;
    for (int i = 0, i < 8, i++)
    {
        contact[i].show_all_contact();
    }
    while (id != (int)id && id < 1 && id > 8)
    {
        std::cout << "Enter the id of the contact you want to display" << std::endl;
        std::cout << "It must be comprised between 1 and 8" << std::endl;
        std::cin >> id;
    }
    id = id--;
    search(id);
    return ;
}

void    PhoneBook::search(const int id)
{
    for (int i = 0, i < 8, i++)
    {
        if (i == id)
        {
            contact[i].show_particular_contact();
        }
    }
    return ;
}