#include <iostream>
#include "Ponto.hpp"
#include "Circulo.hpp"

using namespace std;


int main(){
	Ponto p1(2,3);
	Circulo c1(p1, 3.0);
	Ponto p2(3,4);
	

	cout << p1 << endl;
	cout << c1 << endl;
	
	cout << c1.interior(p2) << endl;
	
}
