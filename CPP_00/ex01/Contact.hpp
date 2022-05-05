#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact 
{
    public:

        string first_name;
        string last_name;
        string nickname;
        string phone_number;
        string darkest_secret;

        Contact( string first, string last, string name, string phone, string secret );
        ~Contact( void );

        void    add(string first, string last, string name, string phone, string secret);

};

#endif