#include <iostream>


using std::cout;
using std::endl;
using std::ostream;

template <class T>
T max(T a, T b){
    return a > b ? a : b;
}

class Complex{
    private:
        double real;
        double complex;
    public:    
        Complex(double real, double complex) : real(real), complex(complex){}
        friend ostream& operator<<(ostream &output, const Complex& c);
        bool operator>( const Complex & rhs);  
};

bool Complex::operator>( const Complex & rhs)
{
    if( this->real > rhs.real )
        return true;
    else if( this->real < rhs.real)
        return false;
    else if( this->complex > rhs.complex)
        return true;
    else
        return false;
}


ostream& operator<<(ostream &output, const Complex& c)
{
    output << c.real << " + " << c.complex << "i";

    return output;
}




class Fraction{
    private:
        int num, den;
        void reduce();
        int gcd(int a, int b);
    public:
        Fraction(int num, int den) : num(num), den(den)
        {
            reduce();
        }
        friend ostream& operator<<(ostream &output, const Fraction& c);
        bool operator>( const Fraction & rhs);

};

int Fraction::gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

void Fraction::reduce(){
    int g = gcd( abs(num), abs(den));
    num /= g;
    den /= g;
}


bool Fraction::operator>( const Fraction & rhs)
{
    return this->num*rhs.den > rhs.num* this->den;
}


ostream& operator<<(ostream &output, const Fraction& f)
{
    output << f.num << "/" << f.den;

    return output;
}




int main(){

    cout << max<int>(2,3) << endl;

    cout << max<double>(2.0,5.4) << endl;

    cout << Complex(3,5) << endl;

    cout << Complex(3,7) << endl;

    cout << max( Complex(3,5) ,Complex(3,7) ) << endl;

    cout << max( Complex(3,5) ,Complex(6,7) ) << endl;
    
    cout << Fraction(3,12) << endl;

    cout << max( Fraction(1,2) , Fraction(3,5) ) << endl;

}


