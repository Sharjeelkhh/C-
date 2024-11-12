#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2, result;
    char op;

    cout << "Enter an operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Enter 2 numbers: ";
        cin >> num1 >> num2;
        result = num1 + num2;
        cout << result << endl;
    case '-':
        result = num1 - num2;
        cout << result << endl;
    case '*':
        result = num1 * num2;
        cout << result << endl;
    }
    return 0;
}
