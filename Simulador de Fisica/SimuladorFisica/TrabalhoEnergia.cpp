#include "TrabalhoEnergia.h"

TrabalhoEnergia::TrabalhoEnergia()
{
	this->trabalho = 0;
	this->potencia_media = 0;
	this->forca = 0;
	this->deslocamento = 0;
	this->teta = 0;
	this->energia_cinetica = 0;
	this->energia_pot_gravitacional = 0;
	this->energia_pot_elastica = 0;
	this->energia_mecanica = 0;
	this->massa = 0;
	this->velocidade = 0;
	this->altura = 0;
	this->const_elastica = 0;
	this->deformacao_mola = 0;
}

TrabalhoEnergia::TrabalhoEnergia(const TrabalhoEnergia& copia)
{
	this->trabalho = copia.trabalho;
	this->potencia_media = copia.potencia_media;
	this->forca = copia.forca;
	this->deslocamento = copia.deslocamento;
	this->teta = copia.teta;
	this->energia_cinetica = copia.energia_cinetica;
	this->energia_pot_gravitacional = copia.energia_pot_gravitacional;
	this->energia_pot_elastica = copia.energia_pot_elastica;
	this->energia_mecanica = copia.energia_mecanica;
	this->massa = copia.massa;
	this->velocidade = copia.velocidade;
	this->altura = copia.altura;
	this->const_elastica = copia.const_elastica;
	this->deformacao_mola = copia.deformacao_mola;
}

TrabalhoEnergia::~TrabalhoEnergia()
{
}

double TrabalhoEnergia::calcTrabalho()
{
	return trabalho = forca * deslocamento * cos(teta);
}
double TrabalhoEnergia::calcTrabalho(const double& forca, const double& deslocamento, const double& teta)
{
	return forca * deslocamento * cos(teta);
}
double TrabalhoEnergia::calcPontenciaMedia()
{
	return potencia_media = forca*velocidade;
}
double TrabalhoEnergia::calcPontenciaMedia(const double& forca, const double& velocidade)
{
	return forca*velocidade;
}
double TrabalhoEnergia::calcEnergiaCinetica()
{
	return energia_cinetica = 0.5*massa*velocidade*velocidade;
}
double TrabalhoEnergia::calcEnergiaCinetica(const double& velocidade, const double& massa)
{
	return 0.5*massa*velocidade*velocidade;
}
double TrabalhoEnergia::calcEnergiaPotGravitacional()
{
	return energia_pot_gravitacional = massa*constante_g*altura;
}
double TrabalhoEnergia::calcEnergiaPotGravitacional(const double& massa, const double& altura)
{
	return massa*constante_g*altura;
}
double TrabalhoEnergia::calcEnergiaPotElastica()
{
	return energia_pot_elastica = 0.5*const_elastica*deformacao_mola*deformacao_mola;
} 
double TrabalhoEnergia::calcEnergiaPotElastica(const double& const_elastica, const double& deformacao_mola)
{
	return 0.5*const_elastica*deformacao_mola*deformacao_mola;
}
double TrabalhoEnergia::calcEnergiaPotMecanica(const bool& flag)
{
	if(flag == 1)
		return energia_mecanica = energia_cinetica + energia_pot_elastica;
	else
		return energia_mecanica = energia_cinetica + energia_pot_gravitacional;
}
double TrabalhoEnergia::calcEnergiaPotMecanica(const double& energia_cinetica, const double& energia_potencial)
{
	return energia_cinetica + energia_potencial;
}

void TrabalhoEnergia::operator+=(const TrabalhoEnergia& inc)
{
	this->trabalho += inc.trabalho;
	this->potencia_media += inc.potencia_media;
	this->forca += inc.forca;
	this->deslocamento += inc.deslocamento;
	this->teta += inc.teta;
	this->energia_cinetica += inc.energia_cinetica;
	this->energia_pot_gravitacional += inc.energia_pot_gravitacional;
	this->energia_pot_elastica += inc.energia_pot_elastica;
	this->energia_mecanica += inc.energia_mecanica;
	this->massa += inc.massa;
	this->velocidade += inc.velocidade;
	this->altura += inc.altura;
	this->const_elastica += inc.const_elastica;
	this->deformacao_mola += inc.deformacao_mola;
}

ostream& operator<<(ostream& output, const TrabalhoEnergia& imprime)
{
	output << "Trabalho: " << imprime.trabalho
	<< "\nPontencia media: " << imprime.potencia_media
	<< "\nForca: " << imprime.forca
	<< "\nDeslocamento: " << imprime.deslocamento
	<< "\nAngulo: " << imprime.teta
	<< "\nEnergia cinetica: " << imprime.energia_cinetica
	<< "\nEnergia potencial gravitacional: " << imprime.energia_pot_gravitacional
	<< "\nEnergia potencial elastica: " << imprime.energia_pot_elastica
	<< "\nEnergia mecanica: " << imprime.energia_mecanica
	<< "\nMassa: " << imprime.massa
	<< "\nVelocidade: " << imprime.velocidade
	<< "\nAltura: " << imprime.altura
	<< "\nConstante elastica: " << imprime.const_elastica
	<< "\nDeformacao da mola: " << imprime.deformacao_mola;
}