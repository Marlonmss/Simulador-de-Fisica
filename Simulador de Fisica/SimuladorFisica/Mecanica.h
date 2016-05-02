#ifndef MECANICA_H
#define MECANICA_H
#include "Vetor.h"

class Mecanica
{
public:
	Mecanica();
	~Mecanica();
	/*double virtual mudarVariaveis() = 0;
	double virtual calcVelocidadeMedia() = 0;
	double virtual calcAceleracaoMedia() = 0;
	double virtual calcVelocidade() = 0;
	double virtual calcDeslocamento() = 0;
	double virtual calcTorricelli() = 0;
	
	
	double virtual calcForcaAtrito() = 0;
	double virtual calcForcaElastica() = 0;
	double virtual calcFocaCentripeda() = 0;
	
	
	double virtual calcTrabalho() = 0;
	double virtual calcPontenciaMedia() = 0;
	double virtual calcEnergiaCinetica() = 0;
	double virtual calcEnergiaPotGravitacional() = 0;
	double virtual calcEnergiaPotElastica() = 0;
	double virtual calcEnergiaPotMecanica() = 0;*/
	
	virtual void imprimir() = 0;
	const static double constante_g = 9.71;
};

#endif // MECANICA_H
