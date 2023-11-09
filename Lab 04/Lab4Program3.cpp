#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRand(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int min, max;

    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(nullptr)));

    // Prompt the user to enter the minimum and maximum values
    cout << "Enter the min and max of the random number: ";
    cin >> min >> max;

    // Generate and display 10 random numbers
    cout << "Generating 10 random numbers..." << endl;
    for (int i = 0; i < 10; i++) {
        int randomNumber = getRand(min, max);
        cout << randomNumber << " ";
    }

    cout << endl;

    return 0;
}
