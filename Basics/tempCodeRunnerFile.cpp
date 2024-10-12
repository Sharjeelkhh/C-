#include <iostream>

int main()
{
    char ch;
    std::cout << "Enter your grade: ";
    std::cin >> ch;
    switch (ch)
    {
    case 'A':
        std::cout << "You did great";
        break;
    case 'B':
        std::cout << "You did Well";
        break;
    case 'C':
        std::cout << "You did Okay";
        break;
    case 'D':
        std::cout << "You need improvement";
        break;
    default:
        std::cout << "Enter correct grade";
    }
}