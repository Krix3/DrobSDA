#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom)
    {
        numerator = num;
        denominator = denom;
    }

    void simplify()
    {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    int findGCD(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        else
        {
            return findGCD(b, a % b);
        }
    }

    Fraction operator+(const Fraction& other) const
    {
        int num = (numerator * other.denominator) + (other.numerator * denominator);
        int denom = denominator * other.denominator;
        Fraction result(num, denom);
        result.simplify();
        return result;
    }

    Fraction operator-(const Fraction& other) const
    {
        int num = (numerator * other.denominator) - (other.numerator * denominator);
        int denom = denominator * other.denominator;
        Fraction result(num, denom);
        result.simplify();
        return result;
    }

    Fraction operator*(const Fraction& other) const
    {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        Fraction result(num, denom);
        result.simplify();
        return result;
    }

    Fraction operator/(const Fraction& other) const
    {
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        Fraction result(num, denom);
        result.simplify();
        return result;
    }

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }
};

