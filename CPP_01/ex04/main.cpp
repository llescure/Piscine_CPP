#include <iostream>
#include <string>
#include <fstream>

void    copy_paste_replace(const char *file, const std::string s1, const std::string s2);

int main(void)
{
    copy_paste_replace("test.txt", " ", "/");
    copy_paste_replace("test2.txt", "42", "abcdefghijklmnopqrstu");
    copy_paste_replace("test3.txt", "j'aime le chocolat", "lol");
    copy_paste_replace("truc.txt", "", "21");
    return (0);
}