#ifndef FORCA_H
#define FORCA_H
#include "Mecanica.h"
#include "Vetor.h"
//#include "ForcaAtrito.h"
//#include "ForcaElastica.h"
//#include "ForcaCentripeda.h"
#include <iostream>
using namespace std;

class Forca : public Mecanica
{
	friend ostream& operator<<(ostream& output, const Forca& imprime);
public:
	Forca();
	Forca(const Forca&);
	~Forca();
	double virtual mudarVariaveis(const double& forca, const double& massa, const double& aceleracao);
	double calcForca();
	static double calcForca(const double& mas, const double& acel);
	double virtual calcForcaAtrito() = 0;
	double virtual calcForcaElastica() = 0;
	double virtual calcFocaCentripeda() = 0;
	const Forca& operator=(const Forca& forc);
	
	void operator+=(const Forca& inc);
protected:
	double forca;
	double massa;
	double aceleracao;
};

#endif // FORCA_H
