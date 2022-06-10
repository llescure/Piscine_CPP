#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Span
{
    public:

    Span(unsigned int N);
    Span(Span const &src);
    ~Span(void);
    Span    &operator=(Span const &rhs);

    void    addNumber(int const &number);
    void    addSeveralNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
    int     shortestSpan(void) const;
    int     longestSpan(void) const;
    void    printArray(void) const;

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

    class NegativeSize: public std::exception
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