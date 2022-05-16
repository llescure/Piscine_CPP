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
        Contact();
        ~Contact( void );

        void    create_contact(void);
        void    clean_last_input(void);
        void    show_particular_contact(void);
        void    show_all_contact(const int id);

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

        void    show_information(std::string data, const bool display_pipe);
};

#endif