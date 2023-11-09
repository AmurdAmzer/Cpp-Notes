#include <iostream>
#include <vector>

using namespace std;

const int rows = 7;
const int seats_per_row = 4;

// Function to display the seat pattern
void displaySeats(vector<vector<char>>& airplane) {
    for (int row = 0; row < rows; row++) {
        cout << row + 1 << " ";
        for (int seat = 0; seat < seats_per_row; seat++) {
            cout << airplane[row][seat] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<char>> airplane(rows, vector<char>(seats_per_row, 'A'));

    displaySeats(airplane);

    char choice;
    int row, seat;

    while (true) {
        cout << "Enter the row number (1-" << rows << ") and seat letter (A-D) (0 to exit): ";
        cin >> row;
        
        // Check for the exit condition
        if (row == 0) {
            break;
        }

        cin >> choice;
        seat = choice - 'A';

        if (row < 1 || row > rows || seat < 0 || seat >= seats_per_row) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        if (airplane[row - 1][seat] == 'X') {
            cout << "Seat " << row << choice << " is already occupied. Please choose another seat." << endl;
        } else {
            airplane[row - 1][seat] = 'X';
            displaySeats(airplane);
        }
    }

    cout << "Thank you for choosing your seats. Have a safe flight!" << endl;

    return 0;
}
