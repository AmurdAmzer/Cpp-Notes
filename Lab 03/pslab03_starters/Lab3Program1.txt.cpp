#include <iostream>
using namespace std;

int main() {

    int rows;
    int character;

    cout << "Enter one character for the blocks of pyramid: ";
    cin >> character;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
