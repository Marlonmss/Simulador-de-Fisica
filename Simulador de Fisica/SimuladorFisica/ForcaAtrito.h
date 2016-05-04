#ifndef FORCAATRITO_H
#define FORCAATRITO_H
#include "Forca.h"
#include "Vetor.h"
#include <iostream>
using namespace std;

class ForcaAtrito : public Forca
{
	friend ostream& operator<<(ostream& output, const ForcaAtrito& imprime);
public:
	ForcaAtrito();
	ForcaAtrito(const double& atrito, const double& normal, const double& coef_atrito, const double& coef_atrito_e, const double& coef_atrito_d);
	~ForcaAtrito();
	ForcaAtrito(const ForcaAtrito& copia);
	double calcForcaAtrito(const char& eord);
	static double calcForcaAtrito(const double& coef, const double& nor);
	void operator+=(const ForcaAtrito& inc);
	virtual void imprimir();
	
private:
	double atrito;
	double normal; 
	double coef_atrito;
	double coef_atrito_e;
	double coef_atrito_d;
};

#endif // FORCAATRITO_H
