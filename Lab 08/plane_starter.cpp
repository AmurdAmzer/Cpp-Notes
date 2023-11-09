//===============================================================
//plane_starter.cpp
// 7_rows of 4_seats (where 'x'=occupied, noccs++):
// '1' 'a' 'b' 'c' 'd'
// ...
// '7' 'a' 'b' 'c' 'd'
//===============================================================
#include <iostream>
#include <string>
using namespace std;
const int NROWS=7, NCOLS=5;
const int CAPACITY = 5; //test_capacity (full=28)
int init_seats(int plane_seats[][NCOLS], int nrows, int ncols);
void print_seats(int plane_seats[][NCOLS], int nrows, int ncols);

int main() {
    int planeSeats[NROWS][NCOLS];
    int seat_row, seat_col;
    string nextSeat;  //user enters "2b";
    int noccs=0;      //number of occupants
    char choice;      //continue

    noccs = init_seats(planeSeats, NROWS, NCOLS);
    print_seats(planeSeats, NROWS, NCOLS);

    do {
        cout << "\n\nenter seat: ";
        cin >> nextSeat;

        seat_row = nextSeat[0] - '1';
        seat_col = nextSeat[1] - 'a' + 1;
        printf("\n\tcurrent_occupant=%2c\n\n", planeSeats[seat_row][seat_col]);

        //...

        print_seats(planeSeats, NROWS, NCOLS);


    } while (choice == 'y' && choice != 'q' && noccs != CAPACITY);

    return (0);
} //main

int init_seats(int plane_seats[][NCOLS], int nrows, int ncols) {
    int noccs=0;
    //...
    //plane_seats[0][1] = //...   //1a...
    return (noccs);
}

void print_seats(int plane_seats[][NCOLS], int nrows, int ncols) {
    //...
}
