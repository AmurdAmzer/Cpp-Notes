#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    const int Pi = 3.14;

    cout << "Please enter a value for the radius of a circle: " << endl;

    double radius;
    cin >> radius:

    double Diameter = 2 * radius;
    cout << "Diameter = " << Diameter << endl;

    double Area = Pi * radius * radius;
    cout << "Area = " << Area << endl;

    double Circumference = 2 * Pi * radius;
    cout << "Circumference = " << Circumference << endl;


    return 0;

}