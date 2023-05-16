
#include "Rational.h"
#include <iostream>
using namespace std;


    void Rational :: printNum() {
        cout << numberator << "/" << denomirator << "\n";
    }
    void Rational :: setNum(int x, int y) {
        numberator = x;
        denomirator = y;
    }

    int Rational :: getNumbertor() {
        return numberator;
    }
    int Rational :: getDenomirator() {
        return denomirator;
    }
    void Rational :: setNumberator(int x) {
        numberator = x;
    }
    void Rational :: setDenomirator(int y) {
        denomirator = y;
    }
    Rational :: Rational() : numberator(0), denomirator(1) {}
    Rational :: Rational(int x, int y) {
        if (y == 0) {
            cout << "Error: denomirator cannot to be Zero, the system set the number to: ";
            denomirator = 1;
            numberator = 0;
        }
        else {
            numberator = x;
            denomirator = y;
        }

    }
    void Rational :: fractureReduction() {
        int x = numberator;
        int y = denomirator;
        int xBefore = numberator;
        int yBefore = denomirator;

        int decimal = x / y;
        int minX = INT_MAX;
        int minY = INT_MAX;

        for (int i = x; i > 0; i--) {
            for (int j = y; j > i; j--) {
                if (i / j == decimal && x * j == y * i) {
                    if (j < minY) {
                        minX = i;
                        minY = j;
                    }
                }
            }
        }
        numberator = minX;
        denomirator = minY;
        cout << "Number before reduced fracture: " << xBefore << "/" << yBefore << "\nNumber after reduced fracture: " << numberator << "/" << denomirator << "\n";
    }
    void Rational::printNumDec()
    {
        cout << static_cast<float>(numberator) / denomirator << "\n";
    }
    void whoIsBigger(Rational num1, Rational num2) {
        double x = static_cast<double>(num1.getNumbertor()) / num1.getNumbertor();
        double y = static_cast<double>(num2.getNumbertor()) / num2.getNumbertor();
        if (x < y) {
            cout << "The bigger is: ";
            num2.printNum();
        }
        else {
            cout << "The bigger is: ";
            num1.printNum();
        }
    }

   
