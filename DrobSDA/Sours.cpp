#include <iostream>
#include <windows.h>
#include "Drob.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Fraction fraction1(2, 4);
    Fraction fraction2(3, 6);

    Fraction sum = fraction1 + fraction2;
    cout << "Sum: ";
    sum.display();

    Fraction difference = fraction1 - fraction2;
    cout << "Difference: ";
    difference.display();

    Fraction product = fraction1 * fraction2;
    cout << "Product: ";
    product.display();

    Fraction quotient = fraction1 / fraction2;
    cout << "Quotient: ";
    quotient.display();

    return 0;
}