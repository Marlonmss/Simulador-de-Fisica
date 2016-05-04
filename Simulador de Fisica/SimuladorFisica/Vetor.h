#ifndef VETOR_H
#define VETOR_H
#include "Matematica.h"
#include <cmath>
#include <iostream>
using namespace std;

class Vetor : public Matematica
{
	friend ostream& operator<<(ostream& output, const Vetor& imprime);
public:
	Vetor();
	Vetor(const double& x, const double& y);
	Vetor(const double& x, const double& y, const double& modulo);
	Vetor(const Vetor& copia);
	~Vetor();
	double calcModulo();
	static double calcModulo(const Vetor& vet);
	Vetor operator*(const double& escalar);
	const Vetor& operator=(const Vetor& vet);
	const Vetor& operator=(const double& vet);
	const Vetor& operator+(const Vetor& vet);
	void operator+=(const Vetor& inc);
	void virtual imprimir();
	double eixo_x;
	double eixo_y;
	double modulo;
	
};

#endif // VETOR_H
