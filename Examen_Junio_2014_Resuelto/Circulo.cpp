#include "Circulo.h"

#include <iostream>
using namespace std;

Circulo::Circulo(const char * nombre, Punto centro, float radio): Figura(nombre)
{
	this->centro = centro;
	this->radio = radio;
}

Circulo::Circulo(const Circulo &c): Figura(c.getNombre())
{
	this->centro = c.centro;
	this->radio = c.radio;
}
Circulo::~Circulo()
{
}

void Circulo::imprimir()
{
	Figura::imprimir();
	cout << "Centro: ";
	this->centro.imprimir();
	cout << "Radio: " << this->radio << endl;
}

float Circulo::getPerimetro()
{
	float pi = 3.1416;
	return 2*pi*this->radio;
}

float Circulo::getRadio() const
{
	return this->radio;
}

Punto Circulo::getCentro() const
{
	return this->centro;
}
