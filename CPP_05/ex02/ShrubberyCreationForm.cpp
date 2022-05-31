#include "ShrubberyCreationForm.hpp"

/******************/
/* Canonical Form */
/******************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
        AForm("Shrubbery creation form", 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    this->_target = target;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
        AForm("Shrubbery creation form", 145, 137)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    this->_target = src.getTarget();
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
    return ;
}

/********************/
/* Member functions */
/********************/

std::string const   &ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

void    ShrubberyCreationForm::setAction(void) const
{
    std::string     newFile;
    std::string     tree;
    std::ofstream   outfile;

    newFile = this->_target + "_shrubbery";
    outfile.open(newFile.c_str());
    if (outfile.fail())
    {
        std::cout << "Error: couldn't create " << newFile << std::endl;
        return ;
    }
    tree = create_tree();
    outfile << tree;
    return ;
}

std::string    create_tree(void)
{
    std::string tree;

    tree = " \
        >X< \n \
         A \n \
        d$b \n \
      .d\\$$b. \n \
    .d$i$$\\$$b. \n \
       d$$@b \n \
      d\\$$$ib \n \
    .d$$$\\$$$b \n \
  .d$$@$$$$\\$$ib. \n \
      d$$i$$b \n \
     d\\$$$$@$b \n \
  .d$@$$\\$$$$$@b. \n \
.d$$$$i$$$\\$$$$$$b. \n \
        ### \n \
        ### \n \
        ### \n \
\n \
\n \
\n \
\n \
        _-_ \n \
    /~~   ~~\\ \n \
 /~~         ~~\\ \n \
{               } \n \
 \\  _-     -_  / \n \
   ~  \\\\ //  ~ \n \
_- -   | | _- _ \n \
  _ -  | |   -_ \n \
      // \\\\ \n \
        ";
    return (tree);
}