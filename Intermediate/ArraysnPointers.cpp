#include <iostream>
using namespace std;

int main()
{
    // Array ----> collection of similar data types
    // Feasible and more structured
    // Instead of declaring 1000 variables, we can declare an array of 1000 variables
    int marks[5] = {23, 45, 56, 89, 90};

    cout << "The value of marks[0] is " << marks[0] << endl;
    cout << "The value of marks[1] is " << marks[1] << endl;
    cout << "The value of marks[2] is " << marks[2] << endl;
    cout << "The value of marks[3] is " << marks[3] << endl;
    cout << "The value of marks[4] is " << marks[4] << endl;

    cout << "--------------------------------------------------" << endl;
    cout << "for loop" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks of " << i << " is " << marks[i] << endl;
    }

    cout << "--------------------------------------------------" << endl;
    cout << "while loop" << endl;
    int i = 0;
    while (i < 5)
    {
        cout << "Marks of " << i << " is " << marks[i] << endl;
        i++;
    }

    cout << "--------------------------------------------------" << endl;
    cout << "do while loop" << endl;
    i = 0;
    do
    {
        cout << "Marks of " << i << " is " << marks[i] << endl;
        ++i;
    } while (i < 5); // This ensures i stops when it's 5

    // Pointer to arrays
    cout << "--------------------------------------------------" << endl;
    cout << "\t\tPointer to arrays" << endl;
    cout << "--------------------------------------------------" << endl;
    // The name of the array is the address
    // &array_name is incorrect

    // using *p and *p+1 printing the address
    int *p = marks;
    cout << "The address of marks[1] is " << (p + 1) << endl;
    cout << "The address of marks[2] is " << (p + 2) << endl;
    cout << "The address of marks[3] is " << (p + 3) << endl;

    cout << "--------------------------------------------------" << endl;
    // Using increment
    cout << "The value of marks[0] is " << *p << endl;
    cout << "The value of marks[1] is " << *(p++) << endl;
    cout << "The value of marks[2] is " << *(p++) << endl;
    cout << "The value of marks[3] is " << *(p++) << endl;
    cout << "The value of marks[4] is " << *(p++) << endl;
    return 0;
}
