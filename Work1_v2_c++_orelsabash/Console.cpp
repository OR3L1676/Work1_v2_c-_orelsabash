#include "Rational.h"
#include <iostream>
using namespace std;

int main()
{
    Rational num1(3, 9);
    num1.printNum();
    Rational num2(4, 5);
    num2.printNum();
    cout << num2.getNumbertor() << "\n";
    cout << num2.getDenomirator() << "\n";
    num2.setNumberator(1);
    num2.printNum();
    num1.fractureReduction();
    Rational num3(6, 0);
    num3.printNum();
    whoIsBigger(num1, num2);

    return 0;
}