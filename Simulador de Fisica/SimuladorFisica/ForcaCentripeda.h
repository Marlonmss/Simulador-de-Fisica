#ifndef FORCACENTRIPEDA_H
#define FORCACENTRIPEDA_H
#include "Forca.h"
#include "Vetor.h"
#include <iostream>
using namespace std;

class ForcaCentripeda : public Forca
{
	friend ostream& operator<<(ostream& output, const ForcaCentripeda& imprime);
public:
	ForcaCentripeda();
	ForcaCentripeda(const ForcaCentripeda& copia);
	ForcaCentripeda(const double& forca_centripeda, const double& massa, const double& velocidade, const double& raio);
	~ForcaCentripeda();
	double calcForcaCentripeda();
	static double calcForcaCentripeda(const double& mass, const double& velo, const double& r);
	void operator+=(const ForcaCentripeda& inc);
	virtual void imprimir();
private:
	double forca_centripeda;
	double massa;
	double velocidade;
	double raio;

};

#endif // FORCACENTRIPEDA_H
