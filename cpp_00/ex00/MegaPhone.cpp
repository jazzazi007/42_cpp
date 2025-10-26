#include <iostream>
#include <string>

int main (int ac, char **av)
{
    if (ac != 2)
        return 1;
    int i = 0;
    std::string sentence = av[1];
    while (sentence[i] != '\0')
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            sentence [i] = sentence[i]-32;
        }
        i++;
    }
    std::cout << sentence << "\n";

    return 0;
}