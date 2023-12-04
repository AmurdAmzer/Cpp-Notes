//==========================================================
//_rational.cpp
//==========================================================
#include <iostream>
#include <assert.h>
using namespace std;
//==========================================================
class Rational {
private:
    int n, d; //numerator, denomenator
public:
    Rational() : n(1), d(1) {}; //default constructor
    Rational(int num, int den = 1); //constructor intializes rational values
    //...
    void Rational::div(Rational rat);
};//class_Rational

/**=========================================================
 ** constructor given numerator, denominator
 **=========================================================*/
Rational::Rational (int num, int den) {
    n = num;
    d = den;
}

/**=========================================================
 ** (a/b) + (c/d) = (a*d + b*c) / (b*d) //add rationals
 **=========================================================*/
void Rational::add(Rational rat) {
    Rational result;
    result.n =
    result.d = 
    result.printRat();
}//add


/**=========================================================
 ** (a/b) – (c/d) = (a*d - b*c) / (b*d) //subtract
 **=========================================================*/
void Rational::sub(Rational rat) {
    //...
}//sub

/**=========================================================
 *   r1      r2      result
 ** (a/b) * (c/d) = (a*c) / (b*d)       //multiply
 **=========================================================*/
void Rational::mult(Rational rat) {
    //...
}//mult

/**=========================================================
 *   r1      r2      result
 ** (a/b) / (c/d) = (a*d) / (c*b)       //divide
 **=========================================================*/
void Rational::div(Rational rat) {
    Rational result;
    assert(d != 0);
    result.n = n*rat.d;
    result.d = d*rat.n;
    printf("\n#division:\n");
    result.printRat();
}//div
    
void Rational::printRat() {
    printf("\n\trat=%d/%d\n", n, d);
}

//======================================================================
// main
//======================================================================
int main() {
    Rational r1(1,6);
    Rational r2(2);

    //Rational r3(1,0);
    //r1.printRat();
    //r2.printRat();

    r1.add(r2);
    //...
    r1.div(r2);
    printf("\n\n");
    return(0);
} //main
