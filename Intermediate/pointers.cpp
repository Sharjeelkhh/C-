#include <iostream>
using namespace std;

int main()
{
    // Pointer -----> A pointer is a variable of any data type that stores the addres of another variable any data type

    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    // & -----> It is used to get the address of a variable
    int *b = &a;

    cout << "The memory address of a is " << b << endl;
    cout << "The memory address of a is " << &a << endl;

    // * -----> Dereference operator is used to access the value of the variable whose address is stored in the pointer
    // * -----> It is used to get the value of the variable whose address is stored in the pointer
    cout << "The value stored at b is " << *b << endl;

    // sizeof -----> It is used to get the size of a variable in bytes
    cout << "Size of a is " << sizeof(a) << " bytes" << endl;

    // Pointer to pointer -----> A pointer to pointer is a variable that stores the address of another pointer
    int **c = &b;
    cout << "The memory address of b is " << c << endl;
    cout << "The memory address of b is " << &b << endl;
    cout << "The value stored at c is " << **c << endl;

    return 0;
}
