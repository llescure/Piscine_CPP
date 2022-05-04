#include "Contact.hpp"

Contact::Contact( string first, string last, string name, string phone,
    string secret): first_name(first), last_name(last), nickname(name),
    phone_number(phone), darkest_secret(secret)
{
        
}

~Contact::Contact(void)
{
    return ;
}