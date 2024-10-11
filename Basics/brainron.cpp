#include <iostream>
#include <math.h> // Include this for fmod

int main()
{
    double a = 2;
    double b = 3;
    double c = 4;
    double d = 6;

    double result = fmod((a * b / c), d); // Use fmod for floating-point modulus
    std::cout << "The result is: " << result << std::endl;

    return 0;
}