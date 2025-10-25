#include <string>
#include <iostream>

int main ()
{
    std::string Types;
    while(42)
    {
        std::cout << "Type ADD, or SEARCH, or EXIT...\n";
        std::cin >> Types;
        if (Types == "ADD")
        {
            std::cout << "yes\n";
        }
    }
    return 0;  
}