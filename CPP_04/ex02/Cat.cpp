#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_attribute = new Brain;
    return ;
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_type = src.getType();
    this->_attribute = new Brain(*src.getBrain());
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_attribute;
    return ;
}

Cat & Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs.getType();
        this->_attribute = new Brain(*rhs.getBrain());
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << this->_type << ": Miaouuuuuuuuuu" << std::endl;
    return ;
}

void    Cat::addIdea(const std::string idea, const int id) const
{
    std::cout << "Cat has a new idea" << std::endl;
    this->_attribute->ideas[id] = idea;
    return ;
}

void    Cat::showIdeas(void) const
{
    for (int i = 0; i < 100; i++)
    {
        if (this->_attribute->ideas[i].empty() == true)
        {
            return ;
        }
        std::cout << "Cat's idea: " << this->_attribute->ideas[i] << std::endl;
    }
}

Brain   *Cat::getBrain(void) const
{
    return (this->_attribute);
}