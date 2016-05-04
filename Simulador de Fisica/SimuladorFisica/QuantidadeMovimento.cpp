#include "QuantidadeMovimento.h"

QuantidadeMovimento::QuantidadeMovimento()
{
	this->impulso = 0;
	this->forca = 0;
	this->tempo = 0;
	this->quant_movimento = 0;
	this->massa = 0;
	this->velocidade = 0;
}

QuantidadeMovimento::QuantidadeMovimento(const double& impulso, const double& forca, const double& tempo, const double& quant_movimento, const double& massa, const double& velocidade)
{
	this->impulso = impulso;
	this->forca = forca;
	this->tempo = tempo;
	this->quant_movimento = quant_movimento;
	this->massa = massa;
	this->velocidade = velocidade;
}

QuantidadeMovimento::QuantidadeMovimento(const QuantidadeMovimento& copia)
{
	this->impulso = copia.impulso;
	this->forca = copia.forca;
	this->tempo = copia.tempo;
	this->quant_movimento = copia.quant_movimento;
	this->massa = copia.massa;
	this->velocidade = copia.velocidade;
}

QuantidadeMovimento::~QuantidadeMovimento()
{
}

double QuantidadeMovimento::calcImpulso()
{
	return impulso = forca*tempo;
}
double QuantidadeMovimento::calcImpulso(const double& forca, const double& tempo)
{
	return forca*tempo;
}
double QuantidadeMovimento::calcQuantidadeMovimento()
{
	return quant_movimento = velocidade*massa;
}
double QuantidadeMovimento::calcQuantidadeMovimento(const double& velocidade, const double& massa)
{
	return velocidade*massa;
}

void QuantidadeMovimento::operator+=(const QuantidadeMovimento& inc)
{
	this->impulso += inc.impulso;
	this->forca += inc.forca;
	this->tempo += inc.tempo;
	this->quant_movimento += inc.quant_movimento;
	this->massa += inc.massa;
	this->velocidade += inc.velocidade;
}

ostream& operator<<(ostream& output, const QuantidadeMovimento& imprime)
{
	output << "Impulso: " << imprime.impulso
	<< "\nForca: " << imprime.forca
	<< "\nTempo: " << imprime.tempo
	<< "\nQuantidade de movimento: " << imprime.quant_movimento
	<< "\nMassa: " << imprime.massa
	<< "\nVelocidade: " << imprime.velocidade;
}

void QuantidadeMovimento::imprimir()
{
	cout << "Impulso: " << impulso
	<< "\nForca: " << forca
	<< "\nTempo: " << tempo
	<< "\nQuantidade de movimento: " << quant_movimento
	<< "\nMassa: " << massa
	<< "\nVelocidade: " << velocidade;
}