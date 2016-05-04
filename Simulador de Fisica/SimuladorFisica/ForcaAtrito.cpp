#include "ForcaAtrito.h"

ForcaAtrito::ForcaAtrito()
{
	this->atrito = 0;
	this->normal = 0; 
	this->coef_atrito = 0;
	this->coef_atrito_e = 0;
	this->coef_atrito_d = 0;
}

ForcaAtrito::ForcaAtrito(const double& atrito, const double& normal, const double& coef_atrito, const double& coef_atrito_e, const double& coef_atrito_d)
{
	this->atrito = atrito;
	this->normal = normal; 
	this->coef_atrito = coef_atrito;
	this->coef_atrito_e = coef_atrito_e;
	this->coef_atrito_d = coef_atrito_d;
}

ForcaAtrito::~ForcaAtrito()
{
}

ForcaAtrito::ForcaAtrito(const ForcaAtrito& copia)
{
	this->atrito = copia.atrito;
	this->normal = copia.normal; 
	this->coef_atrito = copia.coef_atrito;
	this->coef_atrito_e = copia.coef_atrito_e;
	this->coef_atrito_d = copia.coef_atrito_d;
}

double ForcaAtrito::calcForcaAtrito(const char& eord)
{
	if(eord == 'e')
	{
		atrito = normal * coef_atrito_e;
		return atrito;
	}
	else if(eord == 'd')
	{
		atrito = normal * coef_atrito_d;
		return atrito;
	}
	else
	{
		atrito = normal * coef_atrito;
		return atrito;
	}
}
double ForcaAtrito::calcForcaAtrito(const double& coef, const double& nor)
{
	return nor * coef;
}

void ForcaAtrito::operator+=(const ForcaAtrito& inc)
{
	this->atrito += inc.atrito;
	this->normal += inc.normal; 
	this->coef_atrito += inc.coef_atrito;
	this->coef_atrito_e += inc.coef_atrito_e;
	this->coef_atrito_d += inc.coef_atrito_d;
}

ostream& operator<<(ostream& output, const ForcaAtrito& imprime)
{
	output << "Forca de Atrito: " << imprime.atrito
	<< "\nForca Normal: " << imprime.normal
	<< "\nCoeficiente de atrito: " << imprime.coef_atrito
	<< "\nCoeficiente de atrito estatico: " << imprime.coef_atrito_e
	<< "\nCoeficiente de atrito dinamico: " << imprime.coef_atrito_d;
}

void ForcaAtrito::imprimir()
{
	cout << "Forca de Atrito: " << atrito
	<< "\nForca Normal: " << normal
	<< "\nCoeficiente de atrito: " << coef_atrito
	<< "\nCoeficiente de atrito estatico: " << coef_atrito_e
	<< "\nCoeficiente de atrito dinamico: " << coef_atrito_d;
}