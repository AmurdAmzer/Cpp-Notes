#include <iostream>

using namespace std;

const int NR = 6, NC = 8;

void detect(int t[][NC], int stars[][NC], int nrows, int ncols) {
    for (int i = 1; i < nrows - 1; ++i) {
        for (int j = 1; j < ncols - 1; ++j) {
            if ((t[i][j] + t[i - 1][j] + t[i + 1][j] + t[i][j - 1] + t[i][j + 1]) / 4.0 > 3.5) {
                stars[i][j] = 1; // Mark as a star
            } else {
                stars[i][j] = 0; // Not a star
            }
        }
    }
}

void printmap(int stars[][NC], int nrows, int ncols) {
    for (int i = 1; i < nrows - 1; ++i) {
        for (int j = 1; j < ncols - 1; ++j) {
            if (stars[i][j] == 1) {
                cout << "*\t"; // Print asterisk if it's a star
            } else {
                cout << "\t"; // Print blank space if not a star
            }
        }
        cout << endl;
    }
}

static int lightdata[NR][NC] = {
    { 0,  3,  4,  0,  0,  0,  6,  8 },
    { 5, 13,  6,  0,  0,  0,  2,  3 },
    { 2,  6,  2,  7,  3,  0, 10,  0 },
    { 0,  0,  4, 15,  4,  1,  6,  0 },
    { 0,  0,  7, 12,  6,  9, 10,  4 },
    { 5,  0,  6, 10,  6,  4,  8,  0 }
};
static int starmap[NR][NC];

int main() {
    detect(lightdata, starmap, NR, NC);
    printmap(starmap, NR, NC);
    cout << "\n\n";
    return 0;
}
