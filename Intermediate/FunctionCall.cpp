#include <iostream>
using namespace std;

void swap(int, int); // Function prototype
int main()
{
    int x = 2, y = 3;
    swap(x, y);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " b = " << b << endl;
}
