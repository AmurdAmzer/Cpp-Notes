#include <iostream>

class RationalNumber {
private:
    int numerator;
    int denominator;

public:
    // Constructors
    RationalNumber() : numerator(0), denominator(1) {}
    RationalNumber(int num) : numerator(num), denominator(1) {}
    RationalNumber(int num, int denom) : numerator(num), denominator(denom) {}

    // Function to print the rational number
    void printNumber() const {
        std::cout << numerator << "/" << denominator;
    }

    // Function to perform addition
    void add(const RationalNumber& other) {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        std::cout << num << "/" << denom;
    }

    // Function to perform subtraction
    void subtract(const RationalNumber& other) {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        std::cout << num << "/" << denom;
    }

    // Function to perform multiplication
    void multiply(const RationalNumber& other) {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        std::cout << num << "/" << denom;
    }

    // Function to perform division
    void divide(const RationalNumber& other) {
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        std::cout << num << "/" << denom;
    }
};

int main() {
    RationalNumber rn1(1, 6);
    RationalNumber rn2(2);

    std::cout << "First number: ";
    rn1.printNumber();
    std::cout << "\nSecond number: ";
    rn2.printNumber();
    std::cout << "\nAddition: ";
    rn1.add(rn2);
    std::cout << "\nSubtraction: ";
    rn1.subtract(rn2);
    std::cout << "\nMultiplication: ";
    rn1.multiply(rn2);
    std::cout << "\nDivision: ";
    rn1.divide(rn2);

    return 0;
}
