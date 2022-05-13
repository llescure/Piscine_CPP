#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <string>
#include <iomanip>
#include <stdbool.h>

class Contact 
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    
        Contact();
        ~Contact( void );

        void    create_contact(void);
        void    show_particular_contact(void);
        void    show_information(std::string data, const bool display_pipe);
        void    show_all_contact(const int id);
};

#endif