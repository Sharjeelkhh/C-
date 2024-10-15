#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()

{
    // Declaring Variables
    double imag1, imag2, real1, real2;

    cout << "==============================================\n";
    cout << "\t\t\b\b\b\b\bComplex Number Calculator\n";
    cout << "==============================================\n";
    cout << "Enter the real part of 1st complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of 1st complex number: ";
    cin >> imag1;
    cout << "Enter the real part of 2nd complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of 2nd complex number: ";
    cin >> imag2;
    cout << "--------------------------------------------------\n";

    // Display first Complex number
    cout << "First Complex No: " << real1;
    if (imag1 >= 0)
        cout << " + " << imag1 << "i" << endl;
    else
        cout << " - " << -imag1 << "i" << endl;

    // Display second Complex number
    cout << "Second Complex No: " << real2;
    if (imag2 >= 0)
        cout << " + " << imag2 << "i" << endl;
    else
        cout << " - " << -imag2 << "i" << endl;

    cout << "--------------------------------------------------\n";

    // Addition of two Complex Numbers
    cout << "Sum of the complex numbers: " << real1 + real2;
    if (imag1 + imag2 >= 0)
        cout << " + " << imag1 + imag2 << "i" << endl;
    else
        cout << " - " << -(imag1 + imag2) << "i" << endl;

    // Difference of two Complex Numbers
    cout << "Difference of the complex numbers: " << real1 - real2;
    if (imag1 - imag2 >= 0)
        cout << " + " << imag1 - imag2 << "i" << endl;
    else
        cout << " - " << -(imag1 - imag2) << "i" << endl;

    // Product of two Complex Numbers
    double prodReal = (real1 * real2) - (imag1 * imag2);
    double prodImag = (real1 * imag2) + (imag1 * real2);
    cout << "Product of the complex numbers: " << prodReal;
    if (prodImag >= 0)
        cout << " + " << prodImag << "i" << endl;
    else
        cout << " - " << -prodImag << "i" << endl;

    // Division of two Complex Numbers
    double denom = (real2 * real2) + (imag2 * imag2); // denominator for division
    if (denom != 0)
    {
        double divReal = (real1 * real2 + imag1 * imag2) / denom;
        double divImag = (imag1 * real2 - real1 * imag2) / denom;
        cout << fixed << setprecision(2) << "Division of the complex numbers: " << divReal;
        if (divImag >= 0)
            cout << " + " << divImag << "i" << endl;
        else
            cout << " - " << -divImag << "i" << endl;
    }
    else
    {
        cout << "Division by zero is undefined." << endl;
    }

    // Modulus of two Complex Numbers
    cout << "Modulus of 1st complex numbers: " << sqrt(real1 * real1 + imag1 * imag1) << endl;
    cout << "Modulus of 2nd complex numbers: " << sqrt(real2 * real2 + imag2 * imag2) << endl;

    // Increment of 1st complex number (incrementing both real and imaginary parts)
    real1++;
    imag1++;
    cout << "Increment of 1st complex number: " << real1;
    if (imag1 >= 0)
        cout << " + " << imag1 << "i" << endl;
    else
        cout << " - " << -imag1 << "i" << endl;

    // Decrement of 2nd complex number (decrementing both real and imaginary parts)
    real2--;
    imag2--;
    cout << "Decrement of 2nd complex number: " << real2;
    if (imag2 >= 0)
        cout << " + " << imag2 << "i" << endl;
    else
        cout << " - " << -imag2 << "i" << endl;

    return 0;
}
