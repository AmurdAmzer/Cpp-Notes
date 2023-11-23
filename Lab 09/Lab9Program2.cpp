#include <iostream>
#include <string>

using namespace std;

// Function to add a new entry to the dynamic array
string* addEntry(string* dynamicArray, int& size, string newEntry) {
    // Create a new dynamic array one element larger
    string* newArray = new string[size + 1];

    // Copy all elements from the old dynamicArray to the new array
    for (int i = 0; i < size; i++) {
        newArray[i] = dynamicArray[i];
    }

    // Add the new entry to the end of the new array
    newArray[size] = newEntry;

    // Increment the size
    size++;

    // Delete the old dynamicArray
    delete[] dynamicArray;

    // Return the new dynamic array
    return newArray;
}

// Function to delete an entry from the dynamic array
string* deleteEntry(string* dynamicArray, int& size, string entryToDelete) {
    // Search for the entry to delete
    int indexToDelete = -1;
    for (int i = 0; i < size; i++) {
        if (dynamicArray[i] == entryToDelete) {
            indexToDelete = i;
            break;
        }
    }

    // If not found, return the unmodified dynamicArray
    if (indexToDelete == -1) {
        cout << "Name not found. No changes made." << endl;
        return dynamicArray;
    }

    // Create a new dynamic array one element smaller
    string* newArray = new string[size - 1];

    // Copy all elements except the one to delete into the new array
    int newIndex = 0;
    for (int i = 0; i < size; i++) {
        if (i != indexToDelete) {
            newArray[newIndex] = dynamicArray[i];
            newIndex++;
        }
    }

    // Decrement the size
    size--;

    // Delete the old dynamicArray
    delete[] dynamicArray;

    // Return the new dynamic array
    return newArray;
}

int main() {
    int size = 3;
    string* dynamicArray = new string[size];

    dynamicArray[0] = "Ahmed";
    dynamicArray[1] = "Hamza";
    dynamicArray[2] = "Adam";

    while (true) {
        cout << "List of names:";
        for (int i = 0; i < size; i++) {
            cout << " " << dynamicArray[i];
        }
        cout << endl;

        cout << "1. Add a new name 2. Remove a name 3. Quit ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            string newEntry;
            cout << "Please enter a new name to be added: ";
            cin >> newEntry;
            dynamicArray = addEntry(dynamicArray, size, newEntry);
        } else if (choice == 2) {
            string entryToDelete;
            cout << "Please enter a name to be deleted: ";
            cin >> entryToDelete;
            dynamicArray = deleteEntry(dynamicArray, size, entryToDelete);
        } else if (choice == 3) {
            cout << "Quit the program." << endl;
            break;
        } else {
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }
    }

    // Clean up memory by deleting the dynamic array
    delete[] dynamicArray;

    return 0;
}
