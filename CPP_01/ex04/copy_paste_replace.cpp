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

void    replace_string(const std::string s1, const std::string s2, std::string *line, int pos_s1)
{
    int             i;
    int             j;
    std::string     to_keep;
    int             final_size;
    int             initial_size;

    i = pos_s1;
    j = 0;
    if (s1.length() == s2.length())
    {
        while (j < (int)s2.length())
        {
            (*line)[i] = s2[j];
            j++;
            i++;
        }
    }

    //Case when s1 and s2 are of different size

    else
    {
        initial_size = (int)(*line).length();
        final_size = initial_size + s2.length() - s1.length();
        to_keep = (*line).substr(pos_s1 + s1.length());
        (*line).resize (final_size);
        while (j < (int)s2.length())
        {
            (*line)[i] = s2[j];
            j++;
            i++;
        }
        j = 0;
        while (i < final_size)
        {
            (*line)[i] = to_keep[j];
            i++;
            j++;
        }
    }
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
        while ((pos_s1 = (int)line.find(s1)) != -1)
        {
            replace_string(s1, s2, &line, pos_s1);
        }
        buffer.append(line);
        buffer.append("\n");
    }
    buffer.erase(buffer.end() - 1);
    outfile << buffer;
    infile.close();
    outfile.close();
}