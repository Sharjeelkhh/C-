#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    // Declaring variables
    double a, b;
    int choice;
    cout << "====================================\n";
    cout << "\tSCIENTIFIC CALCULATOR\n";
    cout << "====================================\n";
    cout << "1. Power of\t\t8. Addition\n";
    cout << "2. Square root\t\t9. Subtraction\n";
    cout << "3. Sin()\t\t10.Multiplication\n";
    cout << "4. Cos()\t\t11.Division\n";
    cout << "5. Tan()\t\t12.Remainder\n";
    cout << "6. Absolute\t\t13.Exit\n";
    cout << "7. log\n";
    cout << "-----------------------------------\n";
    cout << "Please choose an operation: ";
    cin >> choice;
    cout << fixed << setprecision(2);

    // Switch case for the operations
    switch (choice)
    {
    case 1: // Power
        cout << "Enter a base: ";
        cin >> a;
        cout << "Enter a power: ";
        cin >> b;
        cout << a << " to the power of " << b << " is " << pow(a, b);
        break;

    case 2: // Square root
        cout << "Enter a number: ";
        cin >> a;
        if (a > 0)
            cout << "Square root of " << a << " is " << sqrt(a);
        else
            cout << "Square root of a negative number is undefined";
        break;

    case 3: // Sin
        cout << "Enter angle in Degree: ";
        cin >> a;
        a = a * M_PI / 180.0;
        cout << "Sin(" << a << ") is " << sin(a);
        break;

    case 4: // Cos
        cout << "Enter angle in Degree: ";
        cin >> a;
        a = a * M_PI / 180.0;
        cout << "Cos(" << a << ") is " << cos(a);
        break;

    case 5: // Tan
        cout << "Enter angle in Degree: ";
        cin >> a;
        a = a * M_PI / 180.0;
        cout << "Tan(" << a << ") is " << tan(a);
        break;

    case 6: // Absolute
        cout << "Enter a number: ";
        cin >> a;
        cout << "Absolute of " << a << " is " << fabs(a);
        break;

    case 7: // Log
        cout << "Enter a number: ";
        cin >> a;
        if (a > 0)
            cout << "The log of " << a << " is " << log(a);
        else
            cout << "Logarithm is undefined for negative numbers.";
        break;

    case 8: // Addition
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Addition of both numbers is: " << a + b;
        break;

    case 9: // Subtraction
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Subtraction of both numbers is: " << a - b;
        break;

    case 10: // Multiplication
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Multiplication of both numbers is: " << a * b;
        break;

    case 11: // Division
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        if (b == 0)
            cout << "Cannot divide by zero";
        else
            cout << "Division of both numbers is: " << a / b;
        break;

    case 12: // Modulus
        cout << "Enter a dividend: ";
        cin >> a;
        cout << "Enter a divisor: ";
        cin >> b;
        if (b > 0)
            cout << "The remainder is: " << fmod(a, b);
        else
            cout << "Cannot divide by zero";
        break;

    case 13: // Exit
        cout << "Thank You for using the Calculator";
        break;

    default:
        cout << "Invalid Operation";
        break;
    }
    return 0;
}