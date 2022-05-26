#pragma once
#include <iostream>
using namespace std;

class Ponto {
	public:
		Ponto(double x, double y);
		~Ponto();
		double getX()  const ;
		double getY()  const ;
		void setX(double x);
		void setY(double y);
		double distancia(Ponto & p);
		Ponto operator+(const Ponto & p);
		friend ostream &operator<<( ostream &output, const Ponto &p );
	private:
		double x, y;
};



