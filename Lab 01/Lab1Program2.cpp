#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14; // Define the value of π

    // Prompt the user to enter the radius of the circle
    cout << "Please enter a value for the radius of a circle: ";
    double radius;
    cin >> radius;

    // Calculate diameter, area, and circumference
    double diameter = 2 * radius;
    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;

    // Display the results
    cout << "Diameter = " << diameter << endl;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;
}
