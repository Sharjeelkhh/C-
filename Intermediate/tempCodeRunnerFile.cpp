#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{

    int a = 10;

    cout << typeid(float(a)).name();
    return 0;
}
