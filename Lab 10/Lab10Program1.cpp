#include <iostream>
#include <string>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

struct Person {
    string firstName;
    string lastName;
    Date dob;
    int age;
};

int calculateAge(Person p, Date today) {
    int age = today.year - p.dob.year;
    if (today.month < p.dob.month || (today.month == p.dob.month && today.day < p.dob.day)) {
        age--;
    }
    return age;
}

void printInfo(Person p) {
    cout << "Name: " << p.firstName << " " << p.lastName << endl;
    cout << "Age: " << p.age << endl;
}

int main() {
    Person p;

    cout << "First name: ";
    cin >> p.firstName;

    cout << "Last name: ";
    cin >> p.lastName;

    cout << "Birth year: ";
    cin >> p.dob.year;

    cout << "Birth month: ";
    cin >> p.dob.month;

    cout << "Birth day: ";
    cin >> p.dob.day;

    Date today = {2023, 11, 20}; // Assuming today's date

    p.age = calculateAge(p, today);
    printInfo(p);

    return 0;
}
