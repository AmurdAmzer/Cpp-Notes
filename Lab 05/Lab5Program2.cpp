#include <iostream>

int reversingNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

using namespace std;

int main() {
    int num, reversed;

    cout << "Enter the number: ";
    cin >> num;

    reversed = reversingNumber(num);

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
