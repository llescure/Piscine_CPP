#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <string>
#include <iomanip>

class Contact 
{
    private:
        string first_name;
        string last_name;
        string nickname;
        string phone_number;
        string darkest_secret;

        Contact();
        ~Contact( void );

        void show_all_contact(void);
        void show_particular_contact(void);
};

#endif