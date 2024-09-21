#include <iostream>
using namespace std;

namespace first
{
    int a = 6;
}
namespace second
{
    int a = 7;
}

int main()
{
    // integer data type
    int a = 5;
    int marks = 20;
    int age = 43;

    // double data type
    double pi = 3.14;
    double height = 5.9;

    // character data type
    char grade = 'A';
    char gender = 'M';

    // boolean data type
    bool isStudent = true;
    bool isTeacher = false;

    // string data type
    string name = "John Doe";

    // constant variable
    const int gravity = 9.8;

    // printing the variables
    cout << "Integer: " << a << endl;
    cout << "Double: " << pi << endl;
    cout << "Character: " << grade << endl;
    cout << "Boolean: " << isStudent << endl;
    cout << "String: " << name << endl;
    cout << "Constant: " << gravity << endl;
    cout << "Namespace first: " << first::a << " Namespace first: " << second::a << endl;
    return 0;
}