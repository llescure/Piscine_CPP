#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int     open_file(std::ifstream *infile, std::ofstream *outfile, const char *file)
{
    std::string     new_file;

    (*infile).open(file);
    if ((*infile).fail())
    {
        std::cout << "Error: couldn't open file" << std::endl;
        return (-1);
    }
    new_file = std::string(file) + std::string(".replace");
    (*outfile).open(new_file.c_str());
    if ((*outfile).fail())
    {
        std::cout << "Error: couldn't create new file" << std::endl;
        return (-1);
    }
    return (0);
}

void    copy_paste_replace(const char* file, const std::string s1, const std::string s2)
{
    std::ifstream   infile;
    std::ofstream   outfile;
    std::string     line;
    std::string     buffer;
    int             pos_s1;

    buffer = "";
    /* Open file, create new file.replace and check for error while opening */
    if (open_file(&infile, &outfile, file) < 0)
    {
        return ;
    }
    /* Copy the content of the file in a buffer */
    while (getline(infile, line))
    {
        buffer.append(line);
        buffer.append("\n");
    }
    buffer.erase(buffer.end() - 1);
    while ((pos_s1 = (int)buffer.find(s1)) != -1)
    {
        buffer[pos_s1] = s2[0];
    }
    outfile << buffer;
    infile.close();
    outfile.close();
}