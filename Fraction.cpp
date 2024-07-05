#include<iostream>
using namespace std;

class Fraction{
    int Numerator;
    int Denominator;
    public:
    Fraction(int numerator, int denominator){
        Numerator = numerator;
        Denominator = denominator;
        }
    Fraction operator+(Fraction f2){
        int newNumerator = Numerator*f2.Denominator + Denominator*f2.Numerator;
        int newDenominator = Denominator*f2.Denominator;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction operator-(Fraction f2){
        int newNumerator = Numerator*f2.Denominator - Denominator*f2.Numerator;
        int newDenominator = Denominator*f2.Denominator;
        return Fraction(newNumerator, newDenominator);
    }
    Fraction operator*(Fraction f2){
        int newNumerator = Numerator*f2.Numerator;
        int newDenominator = Denominator*f2.Denominator;
        return Fraction(newNumerator, newDenominator);
        }
    Fraction operator/(Fraction f2){
        int newNumerator = Numerator*f2.Denominator;
        int newDenominator = Denominator*f2.Numerator;
        return Fraction(newNumerator, newDenominator);
    }
    void print(){
        cout<<Numerator<<"/"<<Denominator<<endl;
    }
};

int main(){
    Fraction f1(1,2);
    Fraction f2(2,3);
    Fraction f3 = f1+f2;
    f3.print();
    
}