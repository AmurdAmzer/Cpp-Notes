#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main(){
    int i = 7, j = 3;
    float f1 = 7.0, f2 = 3.0;
    char c1 = '7', c2 = '3', c3 = 'A';
    bool flag = true;
    string s1 = "7", s2 = "3", s3 = "A";
    cout << "\n *****Properties of a variable*******\n";
    cout << "Name: i\tType: int\tValue:" << i <<"\tMemory Location: "
    << &i << endl;

    cout << "\n *****A. Integer Type*******\n";
    cout << "i+j = " << i+j << endl;
    cout << "i-j = " << i-j << endl;
    cout << "i*j = " << i*j << endl;
    cout << "i/j = " << i/j << endl;
    cout << "i%j = " << i%j << endl;

    cout << "\n *****B. ++ operator*******\n";
    cout << "i++ = " << i++ << endl;
    cout << "++i = " << ++i << endl;

    cout << "\n *****C. Float Type*******\n";
    cout << "f1+f2 = " << f1+f2 << endl;
    cout << "f1-f2 = " << f1-f2 << endl;
    cout << "f1*f2 = " << f1*f2 << endl;
    cout << "f1/f2 = " << f1/f2 << endl;

    return 0;
}