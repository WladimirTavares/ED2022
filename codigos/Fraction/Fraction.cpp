#ifndef FRACTION_CPP
#define FRACTION_CPP
#include <iostream>
using namespace std;
class Fraction {
	private:
		int num, den;
	public:
		Fraction(int top, int bottom) : num(top), den(bottom) {}
		Fraction(int top) : Fraction(top,1) {}
		int numerador() const { return num; }
		int denominador() const {return den; }

        Fraction operator+(const Fraction & f);
		friend Fraction operator-(const Fraction & left, const Fraction & right);
		friend Fraction operator*(const Fraction & left, const Fraction & right);
		friend Fraction operator/(const Fraction & left, const Fraction & right);
};


Fraction Fraction::operator+(const  Fraction & f){
    int num = this->num * f.denominador() + f.numerador() * this->den;
	int den = this->den * f.denominador();
	return Fraction(num,den);
}


Fraction operator-(const Fraction & left, const Fraction & right){
	int num = left.num * right.den - right.num * left.den;
	int den = left.den * right.den;
	return Fraction(num,den);
}

Fraction operator*(const Fraction & left, const Fraction & right){
	int num = left.num * right.num;
	int den = left.den * right.den;
	return Fraction(num,den);
}

Fraction operator/(const Fraction & left, const Fraction & right){
	int num = left.num * right.den;
	int den = left.den * right.num;
	return Fraction(num,den);
}

ostream& operator<<(ostream &output, const Fraction& right)
{
    output << right.numerador() << "/" << right.denominador();
    return output;
}


#endif