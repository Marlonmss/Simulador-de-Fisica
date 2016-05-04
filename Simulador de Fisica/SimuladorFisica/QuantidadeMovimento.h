#ifndef QUANTIDADEMOVIMENTO_H
#define QUANTIDADEMOVIMENTO_H
#include "Forca.h"
#include "Vetor.h"
#include <iostream>
using namespace std;

class QuantidadeMovimento : public Forca
{
	friend ostream& operator<<(ostream& output, const QuantidadeMovimento& imprime);
public:
	QuantidadeMovimento();
	QuantidadeMovimento(const double& impulso, const double& forca, const double& tempo, const double& quant_movimento, const double& massa, const double& velocidade);
	QuantidadeMovimento(const QuantidadeMovimento& copia);
	~QuantidadeMovimento();
	double virtual calcImpulso();
	static double calcImpulso(const double& forca, const double& tempo);
	double virtual calcQuantidadeMovimento();
	static double calcQuantidadeMovimento(const double& velocidade, const double& massa);
	void operator+=(const QuantidadeMovimento& inc);
	virtual void imprimir();
private:
	double impulso;
	double forca;
	double tempo;
	double quant_movimento;
	double massa;
	double velocidade;

};

#endif // QUANTIDADEMOVIMENTO_H
