#ifndef FRACTION_HPP
#define FRACTION_HPP

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


//f1 + f2
//f1.operator+(f2)

Fraction operator+(const  Fraction & f){
    int num = num * f.denominador() + f.numerador() * den;
	int den = den * f.denominador();
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