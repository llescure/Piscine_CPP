#include "Contact.hpp"

Contact::Contact()
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_number = "";
    this->darkest_secret = "";
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::create_contact(void)
{
    while (first_name.compare("") == 0)
    {
        std::cout << "Please enter first name of new contact" << std::endl;
        getline(std::cin, this->first_name);
    }
    while (last_name.compare("") == 0)
    {
        std::cout << "Please enter last name of new contact" << std::endl;
        getline(std::cin, this->last_name);
    }
    while (nickname.compare("") == 0)
    {
        std::cout << "Please enter nickname of new contact" << std::endl;
        getline(std::cin, this->nickname);
    }
    while (phone_number.compare("") == 0)
    {
        std::cout << "Please enter phone number of new contact" << std::endl;
        getline(std::cin, this->phone_number);
    }
    while (darkest_secret.compare("") == 0)
    {
        std::cout << "Please enter darkest secret of new contact" << std::endl;
        getline(std::cin, this->darkest_secret);
    }
    std::cout << std::endl;
}

void    Contact::show_all_contact(const int id)
{
    std::cout << std::setw(11);
    std::cout << id + 1;
    std::cout << "|";
    show_information(this->first_name, true);
    show_information(this->last_name, true);
    show_information(this->nickname, false);
}

void    Contact::show_information(std::string data, const bool display_pipe)
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

void    Contact:: show_particular_contact(void)
{
    std::cout << this->first_name << std::endl;
    std::cout << this->last_name << std::endl;
    std::cout << this->nickname << std::endl;
    std::cout << this->phone_number << std::endl;
    std::cout << this->darkest_secret<< std::endl;
}