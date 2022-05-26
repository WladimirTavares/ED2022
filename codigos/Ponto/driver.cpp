#include <iostream>
#include "Ponto.hpp"
using namespace std;

void g(){
	Ponto p1(5,6);
	Ponto * p2 = new Ponto(8,4);
}


int main(){
	Ponto p1(2,3);
	Ponto p2(5,6);
	

	g();

	p1.setX(3);

	cout << p1 << endl;
	cout << p1 << endl;
	cout << p2 << endl;
	cout << p1+p2 << endl;
	
	
}
