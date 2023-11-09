#include <iostream>

using namespace std;

int main() {
    char c;
    int sum = 0;

    cout << "Enter any texts: ";
    
    while (cin.get(c) && c != '\n') {
        if (c >= '0' && c <= '9') {
            int digit = c - '0';
            cout << digit << " ";
            sum += digit;
        }
    }

    cout << "\nSum of all the digits is: " << sum << endl;

    return 0;
}
