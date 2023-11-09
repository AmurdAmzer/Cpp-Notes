//==========================================================
// toothpicks_pseudocode.cpp
// nSum = 0; //contrast with accumulating sum...
// for (count=1; count <= 10; count++) {
//     cin << num;
//     nSum = nSum + num;
//}
//==========================================================
#include <iostream>
using namespace std;
int main() {

    int numPicks = 23;
    int user, comp;

    while (numPicks >= 1) {
        printf("\nnumPicks= %d\n", numPicks);

        //===== user picks =======
        cout <<  "\tpick: ";
        cin >> user;
        printf("\tuser picks %d\n", user);
        numPicks = numPicks - user;

        //===== comp picks =======
        if (numPicks > 4)
            comp = ...
            printf("\tcomputer picks %d\n", comp);
        else if ...
        numPicks = numPicks - comp;
    }

    return 0;
}
