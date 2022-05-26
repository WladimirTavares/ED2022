#pragma once
#include "Ponto.hpp"
#include <iostream>
using namespace std;

class Circulo {
	public:
		Circulo(Ponto centro, double raio); 
		~Circulo();
		double getRaio() const;
		void setRaio(double raio);
		Ponto getCentro() const;
		bool interior(Ponto & p);
		double area();
		friend ostream &operator<<( ostream &output, const Circulo &circ );
	private:
		Ponto centro;
		double raio;
};





