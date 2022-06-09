#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
    public:

    Span(int N);
    Span(Span const &src);
    ~Span(void);
    Span    &operator=(Span const &rhs);

    void        addNumber(int const &number) const;
    int const   shortestSpan(void) const;
    int const   longestSpan(void) const;

    class SpanImpossible
    {
        virtual const char * what() const throw();
    };

    private:

    int     _N;
};

#endif