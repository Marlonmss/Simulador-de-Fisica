#include "ForcaElastica.h"

ForcaElastica::ForcaElastica()
{
	this->forca_elastica = 0;
	this->const_elastica = 0;
	this->deformacao_mola = 0;
}

ForcaElastica::ForcaElastica(const ForcaElastica& copia)
{
	this->forca_elastica = copia.forca_elastica;
	this->const_elastica = copia.const_elastica;
	this->deformacao_mola = copia.deformacao_mola;
}

ForcaElastica::~ForcaElastica()
{
}

double ForcaElastica::calcForcaElastica()
{
	return forca_elastica.modulo = const_elastica*deformacao_mola;
}
double ForcaElastica::calcForcaElastica(const double& const_e, const double& def)
{
	return const_e*def;
}
void ForcaElastica::operator+=(const ForcaElastica& inc)
{
	this->forca_elastica += inc.forca_elastica;
	this->const_elastica += inc.const_elastica;
	this->deformacao_mola += inc.deformacao_mola;
}

ostream& operator<<(ostream& output, const ForcaElastica& imprime)
{
	output << "Forca elastica: " << imprime.forca_elastica
	<< "\nConstante elastica: " << imprime.const_elastica
	<< "\nDeformacao da mola: " << imprime.deformacao_mola;
}