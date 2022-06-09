#include "Span.hpp"

int main()
{
    /* Example from subject */
    std::cout << "// Example from subject: //" << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << std::endl;
    std::cout << "Add number failure:" << std::endl;
    sp.addNumber(23);

    // sp.printArray();
    std::cout << std::endl;
    std::cout << "Shortest span is : ";
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << "Longest span is : ";
    std::cout << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    /* Example with 1 number */
    std::cout << "// Example with 1 number: //" << std::endl;
    Span failure = Span(1);
    failure.addNumber(6);
    std::cout << std::endl;
    std::cout << "Shortest span is : ";
    if (failure.shortestSpan() != 0)
    {
        std::cout << failure.shortestSpan() << std::endl;
    }
    std::cout << "Longest span is : ";
    if (failure.longestSpan() != 0)
    {
        std::cout << failure.longestSpan() << std::endl;
    }
    std::cout << std::endl;

    /* Example with 10 000 numbers */
    std::cout << "// Example with 10 000 numbers: //" << std::endl;
    std::vector<int> vct(10000);   
    sp.addSeveralNumber();
    return 0;
}