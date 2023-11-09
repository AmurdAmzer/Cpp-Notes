#include <iostream>
using namespace std;

int main() {
    double paidAmount, purchasedAmount;
    const double quarterValue = 0.25;
    const double dimeValue = 0.10;
    const double nickelValue = 0.05;
    const double pennyValue = 0.01;

    // Prompt the user to enter the paid amount
    cout << "Please enter total paid amount: ";
    cin >> paidAmount;

    // Prompt the user to enter the purchased amount
    cout << "Please enter total purchased amount: ";
    cin >> purchasedAmount;

    // Calculate the change
    double change = paidAmount - purchasedAmount;

    // Calculate the number of each coin denomination
    int quarters = static_cast<int>(change / quarterValue);
    change -= quarters * quarterValue;

    int dimes = static_cast<int>(change / dimeValue);
    change -= dimes * dimeValue;

    int nickels = static_cast<int>(change / nickelValue);
    change -= nickels * nickelValue;

    int pennies = static_cast<int>(change / pennyValue);

    // Display the denominations of coins for the change
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}
