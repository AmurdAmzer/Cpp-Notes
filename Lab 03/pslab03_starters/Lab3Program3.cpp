#include <iostream>

using namespace std;

int main() {
    char choice;
    
    do {
        int number;
        
        cout << "Please enter a 4-digit number: ";
        cin >> number;
        
        // Check if the number is a 4-digit number
        if (number < 1000 || number > 9999) {
            cout << "Not a valid address – the number is not 4 digits." << endl;
        }
        else {
            int thousands = number / 1000;
            int hundreds = (number / 100) % 10;
            int tens = (number / 10) % 10;
            int ones = number % 10;
            int sum = thousands + hundreds + tens + ones;
            
            // Check the criteria for the Riddler's address
            if (thousands != tens * 3 || number % 2 == 0 || sum != 27) {
                cout << "Not a valid address" << endl;
            }
            else {
                cout << "This is the Riddler's address!" << endl;
            }
        }
        
        cout << "Would you like to continue (Y/N)? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    
    cout << "Goodbye!" << endl;
    
    return 0;
}
