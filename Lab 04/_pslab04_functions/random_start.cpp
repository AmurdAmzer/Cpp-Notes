#include <iostream>
//#include <...>
using namespace std;
//...

int main(int argc, char** argv) {
    int min, max;
    cout << "Enter the min and max of the random number: ";
    cin >> min >> max;
    srand(time(0)); //explain...

    cout << "Generating 10 random numbers…" << endl;
    for (int i = 0; i < 10; i++) {
        //...
    }

    return 0;
}

//int getRand(...) {
    //...
//}
