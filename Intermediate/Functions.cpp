#include <iostream>
using namespace std;

int mult(int a, int b)
{
    int c = a * b;
    return c;
}

// function prototype -----> Function prototype is a declaration of a function that omits the function body and specifies the function's return type, name, and parameters.
int sub(int, int); // function prototype

int main()
{
    int num1, num2, num3, num4;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The product of " << num1 << " and " << num2 << " is " << mult(num1, num2) << endl;
    cout << "--------------------------------------" << endl;
    cout << "Enter first number: ";
    cin >> num3;
    cout << "Enter second number: ";
    cin >> num4;
    cout << "The subtraction of " << num3 << " and " << num4 << " is " << sub(num3, num4) << endl;
    return 0;
}

int sub(int a, int b)
{
    int c;
    if (a > b)
        c = a - b;
    else
        c = b - a;
    return c;
}


#include <iostream>
using namespace std;

int main()
{
    int a = 55;
    cout << float(a) << endl;
    return 0;
}
