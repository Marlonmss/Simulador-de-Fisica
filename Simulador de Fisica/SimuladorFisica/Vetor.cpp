#include "Vetor.h"

Vetor::Vetor()
{
	this->eixo_x = 0;
	this->eixo_y = 0;
	this->modulo = 0;
}

Vetor::Vetor(const double& eixo_x, const double& eixo_y, const double& modulo)
{
	this->eixo_x = eixo_x;
	this->eixo_y = eixo_y;
	this->modulo = modulo;
}

Vetor::Vetor(const Vetor& copia)
{
	this->eixo_x = copia.eixo_x;
	this->eixo_y = copia.eixo_y;
	this->modulo = copia.modulo;
}

Vetor::~Vetor()
{
}

double Vetor::calcModulo()
{
	return modulo = sqrt(eixo_x*eixo_x + eixo_y*eixo_y);
}
double Vetor::calcModulo(const Vetor& vet)
{
	return sqrt(vet.eixo_x*vet.eixo_x + vet.eixo_y*vet.eixo_y);
}
Vetor Vetor::operator*(const double& escalar)
{
	return Vetor(eixo_x*escalar, eixo_y*escalar, sqrt(eixo_x*escalar*eixo_x*escalar + eixo_y*escalar*eixo_y*escalar));
}
const Vetor& Vetor::operator=(const Vetor& vet)
{
	this->eixo_x = vet.eixo_x;
	this->eixo_y = vet.eixo_y;
	this->modulo = vet.modulo;
}

const Vetor& Vetor::operator=(const double& vet)
{
	this->eixo_x = vet;
	this->eixo_y = vet;
}

const Vetor& Vetor::operator+(const Vetor& vet)
{
	return Vetor(eixo_x+vet.eixo_x, eixo_y+vet.eixo_y, sqrt(eixo_x+vet.eixo_x*eixo_x+vet.eixo_x + eixo_y+vet.eixo_y*eixo_y+vet.eixo_y));
}

void Vetor::operator+=(const Vetor& inc)
{
	this->eixo_x += inc.eixo_x;
	this->eixo_y += inc.eixo_y;
	this->modulo += inc.modulo;
}

void Vetor::imprimir()
{
	cout << "Coodernada x: " << eixo_x
	<< "\nCoodernada y: " << eixo_y
	<< "\nModulo do vetor: " << modulo;
}

ostream& operator<<(ostream& output, const Vetor& imprime)
{
	output << "\nCoodernada x: " << imprime.eixo_x
	<< "\nCoodernada y: " << imprime.eixo_y
	<< "\nModulo do vetor: " << imprime.modulo;
}