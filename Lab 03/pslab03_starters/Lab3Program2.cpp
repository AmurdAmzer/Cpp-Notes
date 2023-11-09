#include <iostream>

using namespace std;

int main() {
    int toothpicks = 23;
    int humanChoice, computerChoice;
    bool isHumanTurn = true;

    cout << "Welcome to the game of '23'!" << endl;
    cout << "There are 23 toothpicks in the pile." << endl;

    while (toothpicks > 0) {
        if (isHumanTurn) {
            do {
                cout << "Player: ";
                cin >> humanChoice;
            } while (humanChoice < 1 || humanChoice > 3 || humanChoice > toothpicks);

            toothpicks -= humanChoice;
            cout << "(" << toothpicks << " toothpicks left)" << endl;
        } else {
            if (toothpicks > 4) {
                computerChoice = 4 - humanChoice;
            } else if (toothpicks > 1) {
                computerChoice = toothpicks - 1;
            } else {
                computerChoice = 1;
            }

            toothpicks -= computerChoice;
            cout << "Computer: " << computerChoice << " (" << toothpicks << " toothpicks left)" << endl;
        }

        isHumanTurn = !isHumanTurn;
    }

    if (!isHumanTurn) {
        cout << "Computer wins!" << endl;
    } else {
        cout << "Player wins!" << endl;
    }

    return 0;
}
