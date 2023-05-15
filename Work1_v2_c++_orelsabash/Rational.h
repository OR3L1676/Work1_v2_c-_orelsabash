#pragma once
#include <cstring>
#include <iostream>
class Rational {
private: 
	int numberator;
	int denomirator;
public: 
    void printNum();
    void setNum(int x, int y);
    int getNumbertor();
    int getDenomirator();
    void setNumberator(int x);
    void setDenomirator(int y);
    Rational();
    Rational(int x, int y);
    void fractureReduction();
};
void whoIsBigger(Rational num1, Rational num2);