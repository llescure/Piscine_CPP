#include "Contact.hpp"

Contact::Contact()
{
    this->first_name = "";
    this->last_name = "";
    this->phone_number = "";
    this->darkest_secret = "";

        while (first_name.empty())
    {
        std::cout << "Please enter first name of new contact" << std::endl;
        std::cin >> this->first_name;
    }
    while (last_name.empty())
    {
        std::cout << "Please enter last name of new contact" << std::endl;
        std::cin >> this->last_name;
    }
    while (phone_number.empty())
    {
        std::cout << "Please enter phone number of new contact" << std::endl;
        std::cin >> this->phone_number;
    }
    while (darkest_secret.empty())
    {
        std::cout << "Please enter darkest secret of new contact" << std::endl;
        std::cin >> this->darkest_secret;
    }
}

Contact::~Contact(void)
{
    return ;
}

void Contact::show_all_contact(const int id)
{
    std::cout << std::setw(11);
    std::cout << id;
    std::cout << "|";
    show_information(this->first_name, true);
    show_information(this->last_name, true);
    show_information(this->nickname, false);
}

void    show_information(std::string data, const bool display_pipe)
{
    std::cout << std::setw(10);
    if (data.length() <= 10)
    {
        std::cout << data;
    }
    else
    {
        data.resize(10);
        data[9] = '.';
        std::cout << data;
    }
    if (display_pipe == true)
    {
        std::cout << "|";
    }
}

void Contact:: show_particular_contact(void)
{
    std::cout << this->first_name << std::endl;
    std::cout << this->last_name << std::endl;
    std::cout << this->nickname << std::endl;
    std::cout << this->phone_number << std::endl;
    std::cout << this->darkest_secret<< std::endl;
}