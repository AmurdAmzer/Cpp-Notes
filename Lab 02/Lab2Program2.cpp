#include <iostream>
using namespace std;

int main() {
    const int password = 1123;
    int attempt;

    while (attempt != -1) {
        cout << "Enter the password (or -1 to exit): ";
        cin >> attempt;
            
            // Exit the loop and the program
        if (attempt == password) {
            cout << "Password is correct." << endl;
            break;  
            
            // Exit the loop and the program
        } else {
            cout << "Password is incorrect." << endl;
        }
    }

    return 0;
}
