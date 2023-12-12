#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

namespace myNamespace {
    // Function to generate random integers between 1 and 100
    int getRandomNumber() {
        return rand() % 100 + 1; // Generates a random number between 1 and 100
    }

    // Function to perform bubble sort on the array
    void bubbleSort(int arr[], int size) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // Swap elements if they are in the wrong order
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // Function to print the array
    void printArray(int arr[], int size) {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int arraySize = 10;
    int myArray[arraySize];

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Fill the array with random numbers
    for (int i = 0; i < arraySize; ++i) {
        myArray[i] = myNamespace::getRandomNumber();
    }

    cout << "Original array: ";
    myNamespace::printArray(myArray, arraySize);

    // Sort the array
    myNamespace::bubbleSort(myArray, arraySize);

    cout << "Sorted array: ";
    myNamespace::printArray(myArray, arraySize);

    return 0;
}
