#include "Data.hpp"

uintptr_t   serialize(Data *ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

int main(void)
{
    struct Data test;
    struct Data *afterDeserialize;
    uintptr_t   toKeep;
    test.number = 200;
    test.cara = 'l';
    toKeep = serialize(&test);
    afterDeserialize = deserialize(toKeep);
    if (&test == afterDeserialize)
    {
        std::cout << "It works ! Data value is the same after deserialize" << std::endl;
        std::cout << "afterDeserialize number = " << afterDeserialize->number << std::endl;
        std::cout << "afterDeserialize cara = " << afterDeserialize->cara << std::endl;
    }
    else
    {
        std::cout << "It doesn't work. Data value are different after deserialize" << std::endl;
        return (-1);
    }
    return (0);
}