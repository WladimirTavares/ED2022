#include <iostream>
#include "Fraction.cpp"
using namespace std;


int main(){

	Fraction f1(2, 3);
	Fraction f2(4, 5);
	
	cout << f1 << endl;
	cout << f1 + f2 << endl;
	cout << f1 - f2 << endl;
	cout << f1 * f2 << endl;
	cout << f1 / f2 << endl;
	
	
}
