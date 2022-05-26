#pragma once
#include <iostream>
using namespace std;

class Ponto {
	private:
		double x, y;
	public:
		Ponto(double x, double y) : x(x), y(y) {}
		
		~Ponto(){
			cout << *this << "destruido" << endl;
		}
		double getX()  const ;
		double getY()  const ;
		void setX(double x);
		void setY(double y);
		double distancia(Ponto & p);
		Ponto operator+(const Ponto & p);
		friend ostream &operator<<( ostream &output, const Ponto &p );
};



