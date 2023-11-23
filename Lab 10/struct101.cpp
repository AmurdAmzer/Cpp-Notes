//===============================================================
//structure.cpp
//larry wall, 1954-09-27
//===============================================================
#include <iostream>
#include <string>
using namespace std;
struct Date {
    //complete...
};
struct Person {
    //complete...
};
int calcAge(Person p,Date curdate); //calculate the current age
void printInfo(Person p);   //print personal information

int main() {
    Date today = {2023, 11, 15}; //yyyy,mm,dd
    Person p;

    //p.dob.year, p.dob.month, p.dob.day
    p.dob = { 1954, 9, 27 };
    cout << "enter first name: ";
    cin >> p.fname;
    //lastname...
    //calcAge...
    //printInfo...
    return (0);
}

//stubs...
//calcAge...

//printInfo...




