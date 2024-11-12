// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()

{
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "-";
        }
        cout << endl;
    }

    // for (i = 1; i <= 16; i++)
    // {
    //     for (j = 16; j > i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    return 0;
}