#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <climits>
#include <string>
#include <stdlib.h>

class Scalar
{
    public:

    Scalar(std::string toConvert);
    ~Scalar(void);
    Scalar(Scalar const &src);
    
    Scalar  &operator=(Scalar const &rhs);

    int                getTypeFromString(void);
    std::string const   &getType(void);
    double              convertStringToType(void);
    void                convertToInt(double number);
    void                convertToFloat(double number);
    void                convertToDouble(double number);
    void                convertToChar(double number);

    private:

    std::string const   _originalString;
    std::string         _type;
    int                 _intConversion;
    double              _doubleConversion;
    float               _floatConversion;
    char                _charConversion;

    class NonDisplayable: public std::exception
    {
        public:

        virtual const char * what() const throw();
    };
    class Impossible: public std::exception
    {
        public:

        virtual const char * what() const throw();
    };
};

#endif