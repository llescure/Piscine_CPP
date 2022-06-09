#include "Span.hpp"

/******************/
/* Canonical Form */
/******************/

Span::Span(unsigned N) : _size(N), _numberOfElementStored(0)
{
    std::vector<int> temp(N);
    this->_array = temp;
    return;
}

Span::Span(Span const &src)
{
    this->_size = src._size;
    this->_numberOfElementStored = src._numberOfElementStored;
    return;
}

Span::~Span(void)
{
    return;
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        this->_size = rhs._size;
        this->_numberOfElementStored = rhs._numberOfElementStored;
    }
    return (*this);
}

/********************/
/* Member functions */
/********************/

void    Span::addNumber(int const &number)
{
    try
    {
        if (this->_numberOfElementStored == this->_size)
        {
            throw SpanFull();
        }
        this->_numberOfElementStored += 1;
        this->_array[this->_numberOfElementStored - 1] = number;
    }
    catch (const Span::SpanFull &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    Span::addSeveralNumber()
{
    return ;
}

int     Span::longestSpan(void) const
{
    try
    {
        if (this->_numberOfElementStored <= 1)
        {
            throw SpanMaxMinImpossible();
        }
        int min = *std::min_element(this->_array.begin(), this->_array.end());
        int max = *std::max_element(this->_array.begin(), this->_array.end());
        return (max - min);
    }
    catch (const Span::SpanMaxMinImpossible &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}

int     Span::shortestSpan(void) const
{
    int min;

    try
    {
        if (this->_numberOfElementStored <= 1)
        {
            throw SpanMaxMinImpossible();
        }
        if (this->_array[0] > this->_array[1])
        {
            min = this->_array[0] - this->_array[1];
        }
        else
        {
            min = this->_array[1] - this->_array[0];
        }
        for (unsigned int j = 0; j < this->_numberOfElementStored; j++)
        {
            if (j == this->_numberOfElementStored - 1)
            {
                for (unsigned int i = 0; i < j; i++)
                {
                    if (min > this->_array[j] - this->_array[i]
                        && this->_array[j] - this->_array[i] > 0)
                    {
                        min = this->_array[j] - this->_array[i];
                    }
                }
            }
            else
            {
                for (unsigned int i = j + 1; i < this->_numberOfElementStored; i++)
                {
                    if (min > this->_array[j] - this->_array[i]
                        && this->_array[j] - this->_array[i] > 0)
                    {
                        min = this->_array[j] - this->_array[i];
                    }
                }
            }
        }
        return (min);
    }
    catch (const Span::SpanMaxMinImpossible &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}

// void    Span::printArray(void) const
// {
//     for (unsigned int i = 0; i < this->_numberOfElementStored; i++)
//     {
//         std::cout << this->_array[i] << std::endl;
//     }
// }

/*************/
/* Exception */
/*************/

const char *Span::SpanMaxMinImpossible::what() const throw()
{
    return ("No span can be found. There weren't enough numbers stored");
}

const char *Span::SpanFull::what() const throw()
{
    return ("No new element can be added. The span is already full");
}