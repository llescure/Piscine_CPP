#include <iostream>
#include <cstdlib>
#include <cctype>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    string str;

    if (argc == 1)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return (EXIT_SUCCESS);
    }
    for (int i = 1; i < argc; i++)
    {
        str = argv[i];
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str;
    }
    cout << "" << endl;
    return (EXIT_SUCCESS);
}