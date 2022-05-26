#include "Ponto.hpp"
#include <cmath>

using namespace std;


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
	output << "Ponto" << p.getX() << "," << p.getY();
	return output;
}