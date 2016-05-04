#ifndef FORCAELASTICA_H
#define FORCAELASTICA_H
#include "Forca.h"
#include "Vetor.h"
#include <iostream>
using namespace std;

class ForcaElastica : public Forca
{
	friend ostream& operator<<(ostream& output, const ForcaElastica& imprime);
public:
	ForcaElastica();
	ForcaElastica(const ForcaElastica& copia);
	ForcaElastica(const double& forca_elastica, const double& const_elastica, const double& deformacao_mola);
	~ForcaElastica();
	double calcForcaElastica();
	static double calcForcaElastica(const double& const_e, const double& def);
	void operator+=(const ForcaElastica& inc);
	virtual void imprimir();
private:
	double forca_elastica;
	double const_elastica;
	double deformacao_mola;

};

#endif // FORCAELASTICA_H
