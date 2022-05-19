#include <iostream>
#include <string>
#include <fstream>

void    copy_paste_replace(const char *file, const std::string s1, const std::string s2);

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "ERROR: Wrong number of argument" << std::endl;
    }
    copy_paste_replace(argv[1], argv[2], argv[3]);
    return (0);
}