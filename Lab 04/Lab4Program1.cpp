#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, b, e;

    // Absolute value
    cout << "Enter a number to calculate its absolute value: ";
    cin >> x;
    double absolute = abs(x);
    cout << "|" << x << "| = " << absolute << endl;

    // Power
    cout << "Enter the base (b) and exponent (e) to calculate b^e: ";
    cin >> b >> e;
    double power = pow(b, e);
    cout << b << "^" << e << " = " << power << endl;

    // Square root
    cout << "Enter a number to calculate its square root: ";
    cin >> x;
    double squareRoot = sqrt(x);
    cout << "A square root of " << x << " = " << squareRoot << endl;

    // Rounding up
    cout << "Enter a number to round up: ";
    cin >> x;
    double roundedUp = ceil(x);
    cout << "Rounding up " << x << " = " << roundedUp << endl;

    // Rounding down
    cout << "Enter a number to round down: ";
    cin >> x;
    double roundedDown = floor(x);
    cout << "Rounding down " << x << " = " << roundedDown << endl;

    // Rounding to the nearest integer
    cout << "Enter a number to round to the nearest integer: ";
    cin >> x;
    double roundedToNearest = round(x);
    cout << "Rounding " << x << " to the nearest integer = " << roundedToNearest << endl;

    return 0;
}
