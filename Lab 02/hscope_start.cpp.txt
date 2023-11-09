//==========================================================
//hscope_start.cpp
//Cancer:     June 22 – July 22
//Leo:        July 23 – August 22
//Virgo:      August 23 – September 22
//==========================================================
#include <iostream>
using namespace std;

int main() {

    //defined constants for each month to use instead of month numbers
    enum months{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
    int  month, day;

    cout << "Horoscope...\n" << endl;
    cout << "\tenter month and day: ";
    //cin >> month >> day;
    month = 7; day = 23;
    printf("month=%d, day=%d\n", month, day);
    cout << endl;

    //validate that month is between 1 and 12
    //otherwise print invalid month and exit(0)

    //validate that day is between 1 and 31
    //otherwise print invalid day and exit(0)

    //***note switch could alternatively
    //   be long if -- else-if statement
    switch (month) {

        case JUN:
            //process June...
            break;

        case JUL:
            printf("month is july\n");
            //1.check if day is in the range for leo
            //else in the range for cancer

            //2.check if day is on the cusp for leo

            //3.check if day is on the cusp for cancer
            break;

        case AUG:
            //process August...
            break;

        default:
            cout << "invalid month" << endl;
            exit(0);
            break;
    }//switch

    printf("\n\n");
    return 0;
}//main
