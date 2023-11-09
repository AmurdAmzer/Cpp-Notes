#include <iostream>
using namespace std;

int main() {
    int input;

    cout << "Enter an integer: ";
    cin >> input;

    // Check if the number is positive, negative, or zero
    if (input > 0) {
        cout << input << " is Positive";
    } else if (input < 0) {
        cout << input << " is Negative";
    } else {
        cout << input << " is Zero";
    }

    // Check if the number is even or odd
    if (input % 2 == 0) {
        cout << " and Even" << endl;
    } else {
        cout << " and Odd" << endl;
    }

    return 0;
}
