#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Your phonebook is destroyed, you lost all your contacts" << std::endl;
    return ;
}

void    PhoneBook::add(const int nb_iteration)
{
    if (nb_iteration > 7)
    {
        this->contact[0].clean_last_input();
    }
    else
    {
        this->contact[nb_iteration].create_contact();
    }
    return ;
}

void    PhoneBook::display(const int nb_iteration)
{
    int         id;
    std::string getid;
    int         i;

    id = 0;
    i = 0;
    while (i < nb_iteration && i <= 7)
    {
        this->contact[i].show_all_contact(i);
        std::cout << std::endl;
        i++;
    }
    std::cout << std::endl;
    while (id > nb_iteration || id == 0 || id != (int)id || id < 1 || id > 8)
    {
        if (id > nb_iteration && id < 8)
        {
            std::cout << "Sorry but the id given is not associated with any contact" << std::endl;
        }
        std::cout << "Enter the id of the contact you want to display" << std::endl;
        std::cout << "It must be comprised between 1 and 8" << std::endl;
        if (!std::getline(std::cin, getid))
        {
            break ;
        }
        std::istringstream(getid) >> id;
        std::cout << std::endl;
    }
    id = id - 1;
    search(id);
    return ;
}

void    PhoneBook::search(const int id)
{
    for (int i = 0; i < 8; i++)
    {
        if (i == id)
        {
            contact[i].show_particular_contact();
        }
    }
    std::cout << std::endl;
    return ;
}