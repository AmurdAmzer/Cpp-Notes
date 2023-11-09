//===============================================================
//plane_starter1.cpp
// 7_rows of 4_seats (where 'x'=occupied, noccs++):
// '1' 'a' 'b' 'c' 'd'
// ...
// '7' 'a' 'b' 'c' 'd'
//===============================================================
#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
const int NROWS=7, NCOLS=5;
const int CAPACITY = 5; //test_capacity (full=28)
int init_seats(int plane_seats[][NCOLS], int nrows, int ncols);
void print_seats(int plane_seats[][NCOLS], int nrows, int ncols);

int main() {
    int planeSeats[NROWS][NCOLS];
    int seat_row, seat_col;
    string nextSeat; //string "5c"
    int nOccupants = 0; //number of occupants
    char choice;
    const int CAPACITY = 5; //low for testing

    nOccupants = init_seats(planeSeats, NROWS, NCOLS);
    print_seats(planeSeats, NROWS, NCOLS);

    do {
        cout << "\n\nenter seat: ";
        cin >> nextSeat;

        //assert(nextSeat[0] >= '1' && nextSeat[0] <= '7');
        //assert(nextSeat[1] >= 'a' && nextSeat[1] <= 'd');
        seat_row = nextSeat[0] - '1';  //convert ascii row to int row
        seat_col = nextSeat[1] - 'a' + 1; //convert ascii letter col to int col
        printf("\n\tcurrent_occupant=%2c\n\n", planeSeats[seat_row][seat_col]);

        if (planeSeats[seat_row][seat_col] != 'x')
            //...
            nOccupants++;
        else {
            //...
        }
        print_seats(planeSeats, NROWS, NCOLS);
        if (nOccupants >= CAPACITY) break;

        cout << "\n\ncontinue (y/q)? ";
        cin >> choice;
        choice = tolower(choice);

    } while (choice == 'y' && choice != 'q');

    if (nOccupants >= CAPACITY)
        printf("\n\nplane at full capacity\n\n");
    return (0);
} //main

int init_seats(int plane_seats[][NCOLS], int nrows, int ncols) {
    int nOccupants = 0;
    for (int row=0; row<nrows; row++) {
        //plane_seats[row][0] = //...
        for (int col=1; col<ncols; col++) {
            //plane_seats[row][col] =  //...
        }
    }
    plane_seats[0][1] = 'x'; //1a
    plane_seats[1][2] = 'x'; //2b
    plane_seats[3][3] = 'x'; //4c
    return (nOccupants);
}

void print_seats(int plane_seats[][NCOLS], int nrows, int ncols) {
    for (int row=0; row<nrows; row++) {
        //printf("\n\t%2c: ", plane_seats[//...][//...]);
        for (int col=1; col<ncols; col++) {
            //printf("%2c, ", plane_seats[//...][//...]);
        }
    }
}
