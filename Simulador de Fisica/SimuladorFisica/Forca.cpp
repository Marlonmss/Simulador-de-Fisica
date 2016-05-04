#include "Forca.h"

Forca::Forca()
{
	this->forca = 0;
	this->massa = 0;
	this->aceleracao = 0;
}

Forca::Forca(const double& forca, const double& massa, const double& aceleracao)
{
	this->forca = forca;
	this->massa = massa;
	this->aceleracao = aceleracao;
}

Forca::Forca(const Forca& copia)
{
	this->forca = copia.forca;
	this->massa = copia.massa;
	this->aceleracao = copia.aceleracao;
}
Forca::~Forca()
{
}

void Forca::mudarVariaveis(const double& forca, const double& massa, const double& aceleracao)
{
	this->forca = forca;
	this->massa = massa;
	this->aceleracao = aceleracao;
}

double Forca::calcForca()
{
	forca = aceleracao * massa;
	return forca;
}
double Forca::calcForca(const double& mas, const double& acel)
{
	return acel * mas;
}
const Forca& Forca::operator=(const Forca& forc)
{
	this->forca = forc.forca;
	this->massa = forc.massa;
	this->aceleracao = forc.aceleracao;
}



void Forca::operator+=(const Forca& inc)
{
	this->forca += inc.forca;
	this->massa += inc.massa;
	this->aceleracao += inc.aceleracao;
}

ostream& operator<<(ostream& output, const Forca& imprime)
{
	output << "Forca: " << imprime.forca
	<< "\nMassa: " << imprime.massa
	<< "\nAceleracao: " << imprime.aceleracao;
}