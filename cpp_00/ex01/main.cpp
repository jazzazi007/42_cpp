#include "PhoneBook.hpp"

int main ()
{
    std::string Types;
    std::string data_contact[5];
    bool num_check = true;
    while(42)
    {
        std::cout << "Type ADD, or SEARCH, or EXIT...\n";
        std::cin >> Types;
        if (Types == "ADD")
        {
            std::cout << "First name: ";
            std::cin >> data_contact[0];
            std::cout << "Last name: ";
            std::cin >> data_contact[1];
            std::cout << "Nickname: ";
            std::cin >> data_contact[2];
            std::cout << "Phone number: ";
            while (num_check)
            {
                std::cin >> data_contact[3];
                int i = 0;
                while (data_contact[3][i])
                {
                    if (data_contact[3][i] >= '0' && data_contact[3][i] <= '9')
                        num_check = false;
                    else
                    {
                        num_check = true;
                        std::cout << "Please Enter JUST NUMBERS\n";
                        std::cout << "Phone Number: ";
                        break;
                    }
                    i++;
                }
            }
            std::cout << "Darkest Secret: ";
            std::cin >> data_contact[4];
        }
        else if (Types == "SEARCH")
        {
            std::cout << "search\n";
        }
        else if (Types == "EXIT")
            break;
        else
            std::cout << "Invalid input\n";
    }
    return 0;  
}