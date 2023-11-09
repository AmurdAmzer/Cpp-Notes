#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const int numFruits = 30;
    string fruits[numFruits];

    // Open the file for reading.
    ifstream inFile("fruits.txt");

    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read fruits from the file and insert them into the array.
    for (int i = 0; i < numFruits; i++) {
        if (!(inFile >> fruits[i])) {
            cerr << "Error reading fruit #" << i + 1 << " from the file." << endl;
            inFile.close();
            return 1;
        }
    }

    // Close the file.
    inFile.close();

    // Output the fruits before sorting.
    cout << "Before Sorting: ";
    for (int i = 0; i < numFruits; i++) {
        cout << fruits[i];
        if (i < numFruits - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    // Sort the array of fruits in alphabetical order.
    sort(fruits, fruits + numFruits);

    // Output the fruits after sorting.
    cout << "After Sorting: ";
    for (int i = 0; i < numFruits; i++) {
        cout << fruits[i];
        if (i < numFruits - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
