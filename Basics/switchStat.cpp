#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter your grade: ";
    cin >> ch;
    switch (ch)
    {
    case 'A':
        cout << "You did great";
        break;
    case 'B':
        cout << "You did Well";
        break;
    case 'C':
        cout << "You did Okay";
        break;
    case 'D':
        cout << "You need improvement";
        break;
    default:
        cout << "Enter correct grade";
    }
}