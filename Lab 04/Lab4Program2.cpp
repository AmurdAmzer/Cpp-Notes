#include <iostream>
using namespace std;

double max(double a, double b) {
    return (a > b) ? a : b;
}

double max(double a, double b, double c) {
    return max(max(a, b), c);
}

double max(double a, double b, double c, double d) {
    return max(max(max(a, b), c), d);
}

int main() {
    double result;

    result = max(10.0, 20.0);
    cout << "Max(10.0, 20.0) = " << result << endl;

    result = max(11.5, 21.2, 5.3);
    cout << "Max(11.5, 21.2, 5.3) = " << result << endl;

    result = max(1.8, 2.2, 1.7, 2.1);
    cout << "Max(1.8, 2.2, 1.7, 2.1) = " << result << endl;

    return 0;
}
