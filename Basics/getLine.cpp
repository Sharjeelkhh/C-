#include <iostream>
int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << name << std::endl;
    std::cout << name.length();
    return 0;
}
