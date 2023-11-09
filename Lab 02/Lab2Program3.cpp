#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char user1Choice, user2Choice;

    // Prompt User 1 to enter their selection
    cout << "User1 - please enter your selection (P, R, or S): ";
    cin >> user1Choice;
    user1Choice = toupper(user1Choice); // Convert to uppercase for case-insensitive comparison

    // Validate User 1's input
    if (user1Choice != 'P' && user1Choice != 'R' && user1Choice != 'S') {
        cout << "Invalid Selection ... Good Bye!" << endl;
        return 0;
    }

    // Prompt User 2 to enter their selection
    cout << "User2 - please enter your selection (P, R, or S): ";
    cin >> user2Choice;
    user2Choice = toupper(user2Choice); // Convert to uppercase for case-insensitive comparison

    // Validate User 2's input
    if (user2Choice != 'P' && user2Choice != 'R' && user2Choice != 'S') {
        cout << "Invalid Selection ... Good Bye!" << endl;
        return 0;
    }

    // Determine the winner
    if (user1Choice == user2Choice) {
        cout << "It's a tie! Nobody wins." << endl;
    } else if ((user1Choice == 'P' && user2Choice == 'R') || 
               (user1Choice == 'R' && user2Choice == 'S') || 
               (user1Choice == 'S' && user2Choice == 'P')) {
        cout << "User1 wins! ";
        if (user1Choice == 'P') {
            cout << "Paper covers Rock." << endl;
        } else if (user1Choice == 'R') {
            cout << "Rock breaks Scissors." << endl;
        } else {
            cout << "Scissors cut Paper." << endl;
        }
    } else {
        cout << "User2 wins! ";
        if (user2Choice == 'P') {
            cout << "Paper covers Rock." << endl;
        } else if (user2Choice == 'R') {
            cout << "Rock breaks Scissors." << endl;
        } else {
            cout << "Scissors cut Paper." << endl;
        }
    }

    return 0;
}
