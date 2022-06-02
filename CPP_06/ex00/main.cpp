#include "Scalar.hpp"

int main(int argc, char **argv)
{
    std::string toConvert;
    double      number;

    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (-1);
    }
    toConvert = argv[1];
    Scalar  conversion(toConvert);
    if (conversion.getTypeFromString() == -1)
    {
        return (-1);
    }
    number = conversion.convertStringToType();
    conversion.convertToChar(number);
    conversion.convertToInt(number);
    conversion.convertToFloat(number);
    conversion.convertToDouble(number);
}