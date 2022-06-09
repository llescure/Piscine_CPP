#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    public:

    Span(unsigned int N);
    Span(Span const &src);
    ~Span(void);
    Span    &operator=(Span const &rhs);

    void    addNumber(int const &number);
    void    addSeveralNumber();
    int     shortestSpan(void) const;
    int     longestSpan(void) const;
    // void    printArray(void) const;

    class SpanMaxMinImpossible: public std::exception
    {
        public:

        virtual const char * what() const throw();
    };

    class SpanFull: public std::exception
    {
        public:

        virtual const char * what() const throw();
    };


    private:

    unsigned int        _size;
    unsigned int        _numberOfElementStored;
    std::vector<int>    _array;
};

#endif