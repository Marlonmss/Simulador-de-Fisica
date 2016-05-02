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
	~ForcaElastica();
	double virtual calcForcaElastica();
	static double calcForcaElastica(const double& const_e, const double& def);
	void operator+=(const ForcaElastica& inc);
private:
	Vetor forca_elastica;
	double const_elastica;
	double deformacao_mola;

};

#endif // FORCAELASTICA_H
