#include <iostream>
#include <complex>

int main()
{
    // Define complex numbers
    std::complex<double> num1(3.0, 4.0);
    std::complex<double> num2(2.0, 1.0);

    // Perform operations
    std::complex<double> sum = num1 + num2;
    std::complex<double> difference = num1 - num2;
    std::complex<double> product = num1 * num2;
    std::complex<double> quotient = num1 / num2;
    num1 += 1.0; // increment num1
    double modulus = std::abs(num1);

    // Display results
    std::cout << "Complex Number 1: " << num1 << std::endl;
    std::cout << "Complex Number 2: " << num2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Incremented Complex Number: " << num1 << std::endl;
    std::cout << "Modulus: " << modulus << std::endl;

    return 0;
}