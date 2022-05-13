#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string>
#include <iomanip>


class PhoneBook 
{
    public: 
        Contact contact[8];

        PhoneBook(void);
        ~PhoneBook(void);

        void    add(const int nb_iteration);
        void    display(const int nb_iteration);
        void    search(const int);
};

#endif