//==========================================================
//fruits_starter.cpp
//==========================================================
#include <iostream>
#include <fstream>
using namespace std;
void printFruits(string heading, string fruits[], int N);
void sort(string fruits[], int N);

int main() {
    int Nfruits=30;         //fruits capacity
    string fruits[Nfruits]; //fruits as read
    string nextFruit;       //current fruit read
    ifstream inFile("zfruits.txt"); //inFile stream variable

    int nfruits=0; //actual number of fruits read
    while(inFile >> nextFruit) { //read till eof
        //...
    }
    printFruits("Fruits_asread: ", fruits, nfruits);

    sort(fruits, nfruits);
    
    printFruits("Fruits_sorted: ", fruits, nfruits);
    return 0;
}

void printFruits(string heading, string fruits[], int N) {
    printf("\n\t%s\n\n", heading.c_str());
    //...
}

void sort(string fruits[], int N) {
    string basket;
    //for (int i=0...
        //for (int j...
            //...
        //}
    //}
}
