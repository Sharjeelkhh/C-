#include <iostream>
int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    if (name.empty())
    {
        std::cout << "You didn't enter anything";
    }
    else
    {
        std::cout << "You entered: " << name << std::endl;
        std::cout << "The length of your name is: " << name.length() << std::endl;
    }

    name.append("@austd.com"); // append is used to add a string to the end of another string
    std::cout << "Your email is: " << name << std::endl;

    return 0;
}

// .length is used the check the length of the string
//  getline is used to take input of a string with spaces
//  cin is used to take input of a string without spaces