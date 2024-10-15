#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declaration of the prices
    double cheesePrice = 3.5;
    double milkPrice = 1.99;
    double sodaPrice = 2.45;
    double chocolatePrice = 0.99;
    double orangePrice = 1.25;

    // Declaration of the quantities
    int cheeseQty = 2;
    int milkQty = 1;
    int sodaQty = 3;
    int chocolateQty = 1;
    int orangeQty = 2;

    // Declaration of the tax rate
    const double taxRate = 0.10;

    // Declaration of the subtotal and tax
    double subTot = (cheesePrice * cheeseQty) + (milkPrice * milkQty) + (sodaPrice * sodaQty) + (chocolatePrice * chocolateQty) + (orangePrice * orangeQty);
    double taxCalc = (subTot * taxRate);

    cout << "\t\t\"Adam's Mart\""; // Display the name of the store
    cout << "\n\t153 Riddle's St. \\\\New York\\\\USA\n\n";
    cout << "Item\t\tQty\tUnit Price\tTotal Price\n";
    cout << "-----------------------------------------------------\n";
    cout << "Cheese\t\t" << cheeseQty << "\t$" << cheesePrice << "\t\t$" << cheeseQty * cheesePrice << "\n";

    cout << "Milk\t\t" << milkQty << "\t$" << milkPrice << "\t\t$" << milkQty * milkPrice << "\n";

    cout << "Soda\t\t" << sodaQty << "\t$" << sodaPrice << "\t\t$" << sodaQty * sodaPrice << "\n";

    cout << "Chocolate\t" << chocolateQty << "\t$" << chocolatePrice << "\t\t$" << chocolateQty * chocolatePrice << "\n";

    cout << "Orange\t\t" << orangeQty << "\t$" << orangePrice << "\t\t$" << orangeQty * orangePrice << "\n\n";

    cout << "Sub-Total:\t\t\t\t $" << subTot << "\n";
    cout << "Tax (10%):\t\t\t\t $" << fixed << setprecision(2) << taxCalc << "\n";
    cout << "-----------------------------------------------------\n";

    // Printing Total Amount
    cout << "Final Total:\t\t\t\t $" << fixed << setprecision(2) << subTot + taxCalc << "\n\n";
    return 0;
}
