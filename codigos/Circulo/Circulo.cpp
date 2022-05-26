#include "Circulo.hpp"
#include <cmath>

using namespace std;

Circulo::Circulo(Ponto centro, double raio) : centro(centro), raio(raio) {
	cout << *this << "construido" << endl;
}

Circulo::~Circulo(){
	cout << *this << "destruido" << endl;
}

double Circulo::getRaio() const{
	return this->raio;
}

void Circulo::setRaio(double raio){
	this->raio = raio;
}

Ponto Circulo::getCentro() const{
	return this->centro;
}

bool Circulo::interior(Ponto & p){
	return p.distancia(this->centro) <= this->raio;
}

double Circulo::area(){
	return M_PI*this->raio*this->raio;
}

ostream &operator<<( ostream &output, const Circulo &circ ){
	output << "Circulo( centro = " << circ.getCentro() << " , raio = " << circ.getRaio() << ")";
	return output; 
}