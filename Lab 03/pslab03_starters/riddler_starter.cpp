//==========================================================
// riddler_pseudocode.cpp
//==========================================================
#include <iostream>
using namespace std;

int main() {

    int address;
    int m=0, c=0, x=0, i=0;  //digits

    //loop address across all possibilities

        m= address/1000;
        c= address%1000/100;
        x= address%100/10;
        i= address%10;

        if (address is even...)
           (address digits are unique)
           (address digits thousands is 3x tens)
           (address digits sum is 27)

                printf("\n\tMCXI=%d %d %d %d", m, c, x, i);
                printf("\tholy digits batman...\n\n");

    return 0;
}
