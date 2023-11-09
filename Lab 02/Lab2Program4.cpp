#include <iostream>
#include <string>

using namespace std;

// Function to determine the horoscope sign
string determineHoroscope(int month, int day) {
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        return "Aries";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        return "Taurus";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
        return "Gemini";
    } else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
        return "Cancer";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        return "Leo";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        return "Virgo";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        return "Libra";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        return "Scorpio";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        return "Sagittarius";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        return "Capricorn";
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        return "Aquarius";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        return "Pisces";
    } else {
        return "Invalid Date";
    }
}

int main() {
    int month, day;

    cout << "Please enter your birthday (month and day, separated by a space): ";
    cin >> month >> day;

    // Check if the date is valid
    if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31)) {
        string horoscope = determineHoroscope(month, day);
        cout << "Your Horoscope Sign -> " << horoscope << endl;

        // Check if the birthday is on a cusp
        if ((month == 3 && day >= 19) || (month == 4 && day <= 20)) {
            cout << "You are on a cusp! The nearest adjacent sign is Aries." << endl;
            cout << "Aries Horoscope -> (Fictional Aries horoscope here)" << endl;
        } else if ((month == 4 && day >= 18) || (month == 5 && day <= 21)) {
            cout << "You are on a cusp! The nearest adjacent sign is Taurus." << endl;
            cout << "Taurus Horoscope -> (Fictional Taurus horoscope here)" << endl;
        }
        // Add more cusp checks for other signs if needed.

    } else {
        cout << "Invalid Birthday ... Good Bye!" << endl;
    }

    return 0;
}
