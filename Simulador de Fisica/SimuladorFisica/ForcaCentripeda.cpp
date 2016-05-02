#include "ForcaCentripeda.h"

ForcaCentripeda::ForcaCentripeda()
{
	this->forca_centripeda = 0;
	this->massa = 0;
	this->velocidade = 0;
	this->raio = 0;
}

ForcaCentripeda::ForcaCentripeda(const ForcaCentripeda& copia)
{
	this->forca_centripeda = copia.forca_centripeda;
	this->massa = copia.massa;
	this->velocidade = copia.velocidade;
	this->raio = copia.raio;
}

ForcaCentripeda::~ForcaCentripeda()
{
}

double ForcaCentripeda::calcFocaCentripeda()
{
	return forca_centripeda = massa*velocidade*velocidade/raio;
}
double ForcaCentripeda::calcFocaCentripeda(const double& mass, const double& velo, const double& r)
{
	return mass*velo*velo/r;
}

void ForcaCentripeda::operator+=(const ForcaCentripeda& inc)
{
	this->forca_centripeda += inc.forca_centripeda;
	this->massa += inc.massa;
	this->velocidade += inc.velocidade;
	this->raio += inc.raio;
}

ostream& operator<<(ostream& output, const ForcaCentripeda& imprime)
{
	output << "Forca centripeda: " << imprime.forca_centripeda
	<< "\nMassa: " << imprime.massa
	<< "\nVelocidade: " << imprime.velocidade
	<< "\nRaio: " << imprime.raio;
}