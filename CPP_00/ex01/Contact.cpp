#include "Contact.hpp"

Contact::Contact()
{
    this.first_name = "";
    this.last_name = "";
    this.phone_number = "";
    this.darkest_secret = "";

        while (first_name.empty())
    {
        std::cout << "Please enter first name of new contact" << std::endl;
        std::cin >> this.first_name;
    }
    while (last_name.empty())
    {
        std::cout << "Please enter last name of new contact" << std::endl;
        std::cin >> this.last_name;
    }
    while (phone_number.empty())
    {
        std::cout << "Please enter phone number of new contact" << std::endl;
        std::cin >> this.phone_number;
    }
    while (darkest_secret.empty())
    {
        std::cout << "Please enter darkest secret of new contact" << std::endl;
        std::cin >> this.darkest_secret;
    }
}

~Contact::Contact(void)
{
    return ;
}

Contact::show_all_contact(void)
{
    
}

Contact::show_particular_contact(void)
{
    std::cout << this.first_name << std::endl;
    std::cout << this.last_name << std::endl;
    std::cout << this.nickname << std::endl;
    std::cout << this.phone_number << std::endl;
    std::cout << this.darkest_secret<< std::endl;
}