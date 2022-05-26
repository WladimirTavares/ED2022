#include "Ponto.hpp"
#include <cmath>


using namespace std;

Ponto::Ponto(double x, double y){
	this->x = x;
	this->y = y;
	cout << *this << "criado" << endl;
}

Ponto::~Ponto(){
	cout << *this << "destruido" << endl;
}

double Ponto::getX()  const { return x; }

double Ponto::getY()  const { return y; }

void Ponto::setX(double x) { this->x = x; }

void Ponto::setY(double y) { this->y = y; }

double Ponto::distancia(Ponto & p) {
	double dx = x - p.getX();
	double dy = y - p.getY();
	return sqrt(dx*dx + dy*dy);
}

Ponto Ponto::operator+(const Ponto & p){
	return Ponto(this->x + p.getX() , this->y + p.getY());
}

ostream & operator<<( ostream &output, const Ponto &p ){
	output << "Ponto(" << p.getX() << "," << p.getY() << ")";
	return output;
}