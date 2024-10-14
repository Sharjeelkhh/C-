#include <iostream>
using namespace std;

// Structure is a user defined data type which can store different data types
struct student // Here typdef can be used too to save time
{
    int studID;
    char section;
    float Gpa;
}; // ep or any name u want to give it

// Union is similar to structure but it can store only one value at a time
union employee
{
    int empID;
    char empNo;
    float salary;
};

int main()
{
    // Strucutre ----> A structure is a user-defined data type in C/C++ which allows to combine data items of different kinds.
    struct student khan; // Declaring a variable of type student
    khan.studID = 123;
    khan.section = 'A';
    khan.Gpa = 3.5;
    cout << "Student ID: " << khan.studID << endl;
    cout << "Section: " << khan.section << endl;
    cout << "Gpa: " << khan.Gpa << endl;

    union employee bpo;
    bpo.empID = 456;
    bpo.empNo = 'B';
    bpo.salary = 4550.50;
    cout << "-----------------------------------------------------" << endl;
    cout << "Employee ID: " << bpo.empID << endl;
    cout << "Employee No: " << bpo.empNo << endl;
    // In this case we will get garbage value because we are storing only one value at a time
    cout << "Salary: " << bpo.salary << endl;
    cout << "-----------------------------------------------------" << endl;

    enum days
    {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    };

    days d1 = sunday;
    cout << d1 << endl; // Output will be 6

    cout << friday; // Output will be 4

    return 0;
}
