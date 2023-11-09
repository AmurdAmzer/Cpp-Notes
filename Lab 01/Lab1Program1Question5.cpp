#include <iostream>
#include <climits>

using namespace std;

int main() {
    int maxInt = INT_MAX;  // Maximum value for an int
    
    
    int overflowedValue = maxInt + 1;  // Integer overflow

    
    cout << "Max Value: " << maxInt << endl;
    cout << "Overflowed Value: " << overflowedValue << endl;

    return 0;
}
