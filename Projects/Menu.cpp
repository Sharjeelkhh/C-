#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // initializing Variables to store prices of the products
    double burgerPrice = 5.99;
    double friesPrice = 2.49;
    double sodaPrice = 1.25;
    const double taxPercent = 0.16; // Fixing tax rate at 16%

    // Variables to store the quantities given by the user
    int burgerQuant, friesQuant, sodaQuant;

    // Printing the whole menu using escape sequences
    cout << "\t\tMENU\n";
    cout << "-------------------------------------\n";
    cout << "Item\t\tPrice\tTax\tTotal\n";
    cout << "-------------------------------------\n";
    cout << fixed << setprecision(2);
    cout << "Burger\t\t$" << burgerPrice << "\t"
         << burgerPrice * taxPercent << "\t$" << burgerPrice + (burgerPrice * taxPercent) << "\n";
    cout << "Fries\t\t$" << friesPrice << "\t"
         << friesPrice * taxPercent << "\t$" << friesPrice * (1 + taxPercent) << "\n";
    cout << "Soda\t\t$" << sodaPrice << "\t"
         << sodaPrice * taxPercent << "\t$" << sodaPrice * (1 + taxPercent) << "\n";

    // Taking input from the user for the quantities
    cout << "\nEnter the quantity of Burgers you want: ";
    cin >> burgerQuant;
    cout << "Enter the quantity of Fries you want: ";
    cin >> friesQuant;
    cout << "Enter the quantity of Sodas you want: ";
    cin >> sodaQuant;

    // Calculating the Subtotal amount
    double subtotal = (burgerQuant * burgerPrice) + (friesQuant * friesPrice) + (sodaQuant * sodaPrice);
    // Calculating the tax on Subtotal amount
    double tax = subtotal * taxPercent;
    // Calculating Grand total after adding tax
    double total = subtotal + tax;

    // Print the total Cost
    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout << "\nSubtotal:\t$" << subtotal << "\n";
    cout << "Tax (16%):\t$" << tax << "\n";
    cout << "----------------------\n";
    cout << "Total:\t\t$" << total << "\n";

    return 0;
}
