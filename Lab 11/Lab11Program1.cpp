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
    RationalNumber add(const RationalNumber& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return RationalNumber(num, denom);
    }

    // Function to perform subtraction
    RationalNumber subtract(const RationalNumber& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return RationalNumber(num, denom);
    }

    // Function to perform multiplication
    RationalNumber multiply(const RationalNumber& other) const {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return RationalNumber(num, denom);
    }

    // Function to perform division
    RationalNumber divide(const RationalNumber& other) const {
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return RationalNumber(num, denom);
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
    RationalNumber resultAdd = rn1.add(rn2);
    resultAdd.printNumber();
    std::cout << "\nSubtraction: ";
    RationalNumber resultSubtract = rn1.subtract(rn2);
    resultSubtract.printNumber();
    std::cout << "\nMultiplication: ";
    RationalNumber resultMultiply = rn1.multiply(rn2);
    resultMultiply.printNumber();
    std::cout << "\nDivision: ";
    RationalNumber resultDivide = rn1.divide(rn2);
    resultDivide.printNumber();

    return 0;
}
