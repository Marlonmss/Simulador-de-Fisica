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
	~ForcaAtrito();
	ForcaAtrito(const ForcaAtrito& copia);
	double virtual calcForcaAtrito(const char& eord);
	static double calcForcaAtrito(const double& coef, const double& nor);
	void operator+=(const ForcaAtrito& inc);
	
protected:
	double atrito;
	double normal; 
	double coef_atrito;
	double coef_atrito_e;
	double coef_atrito_d;
};

#endif // FORCAATRITO_H
