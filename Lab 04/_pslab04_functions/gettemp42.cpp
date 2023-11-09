//==========================================================
// gettemp42.cpp
//==========================================================
#include <iostream>
using namespace std;
double get_max(double ds[], int dsize);
const int NDAYS=7;

int main() {

    double temps[NDAYS] = { 78, 80, 82, 81, 78, 75, 72 };
    int maxtemp;

    maxtemp = get_max(temps, NDAYS);
    cout << "\n\tmaxtemp=" << maxtemp << endl;
    return (0);
}

double get_max(double temps[], int ndays) {
    double maxtemp = temps[0];
    for...
    
    return maxtemp;
}
