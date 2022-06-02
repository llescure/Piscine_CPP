#include "Scalar.hpp"

/******************/
/* Canonical Form */
/******************/

Scalar::Scalar(std::string toConvert): _originalString(toConvert)
{
    return ;
}

Scalar::~Scalar(void)
{
    return ;
}

Scalar::Scalar(Scalar const &src)
{
    *this = src;
}

Scalar  &Scalar::operator=(Scalar const &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return (*this);
}

/********************/
/* Member functions */
/********************/

std::string const &Scalar::getType(void)
{
    return (this->_type);
}

int    Scalar::getTypeFromString(void)
{
    if ((this->_originalString.find('f') != std::string::npos
        && this->_originalString.find('.') != std::string::npos)
        || this->_originalString == "-inff" || this->_originalString == "+inff"
        || this->_originalString == "nanf")
    {
        this->_type = "float";
    }
    else if (this->_originalString.find('.') != std::string::npos || this->_originalString == "-inf"
        || this->_originalString == "+inf" || this->_originalString == "nan")
    {
        this->_type = "double";
    }
    else if ((this->_originalString.length() == 1)
        && (!(this->_originalString[0] >= '0' && this->_originalString[0] <= '9')))
    {
        this->_type = "char";
    }
    else
    {
        for (unsigned long i = 0; i < this->_originalString.length(); i++)
        {
            if (!(this->_originalString[i] >= '0' && this->_originalString[i] <= '9')
                && this->_originalString[0] != '-')
            {
                std::cout << "Type unknown. You must enter a char, an int, a double or a float" << std::endl;
                return (-1);
            }
        }
        this->_type = "int";
    }
    return (0);
}

double   Scalar::convertStringToType(void)
{
    std::stringstream   temp(this->_originalString);
    char                *pEnd;

    if (this->_type == "float")
    {
        this->_floatConversion = strtod(this->_originalString.c_str(), &pEnd);
        return (static_cast<double>(this->_floatConversion));
    }
    else if (this->_type == "double")
    {
        temp >> this->_doubleConversion;
        return (this->_doubleConversion);
    }
    else if (this->_type == "int")
    {
        temp >> this->_intConversion;
        return (static_cast<double>(this->_intConversion));
    }
    else
    {
        this->_charConversion = this->_originalString[0];
        return (static_cast<double>(this->_charConversion));
    }
}

void    Scalar::convertToInt(double const number)
{
    double  positiveInf = std::numeric_limits<double>::infinity();
    double  negativeInf = positiveInf * -1;
    double  intMax = static_cast<double>(INT_MAX);
    double  intMin = static_cast<double>(INT_MIN);

    std::cout << "int: ";
    try
    {
        if (number >= intMax || number <= intMin)
        {
                throw Impossible();
        }
        else if (number == positiveInf || number == negativeInf
            || this->_originalString == "nan" || this->_originalString == "nanf")
        {
                throw Impossible();
        }
        else
        {
            std::cout << static_cast<int>(number) << std::endl;
        }
    }
    catch(const Scalar::Impossible& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Scalar::convertToFloat(double const number)
{
    int remaining;

    remaining = number - static_cast<int>(number);
    if (this->_type == "int" || this->_type == "char" || remaining == 0)
    {
        std::cout << "float: " << static_cast<float>(number) << ".0f" << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(number) << "f" << std::endl;
    }
}

void    Scalar::convertToDouble(double const number)
{
    int remaining;

    remaining = number - static_cast<int>(number);
    if (this->_type == "int" || this->_type == "char" || remaining == 0)
    {
        std::cout << "double: " << static_cast<double>(number) << ".0" << std::endl;
    }
    else
    {
        std::cout << "double: " << static_cast<double>(number) << std::endl;
    }
}

void    Scalar::convertToChar(double const number)
{
    std::cout << "char: ";
    double  positiveInf = std::numeric_limits<double>::infinity();
    double  negativeInf = positiveInf * -1;

    try
    {
        if (number == positiveInf || number == negativeInf
            || this->_originalString == "nan" || this->_originalString == "nanf")
        {
            throw Impossible();
        }
        else if (!(number >= 32 && number < 127))
        {
            throw NonDisplayable();
        }
        else
        {
            std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
        }
    }
    catch(const Scalar::NonDisplayable& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Scalar::Impossible& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

/*********************/
/* Exception classes */
/*********************/

const char *Scalar::NonDisplayable::what() const throw ()
{
    return ("Non displayable");
}

const char *Scalar::Impossible::what() const throw ()
{
    return ("Impossible");
}