#ifndef FORCA_H
#define FORCA_H
#include "Mecanica.h"
#include "Vetor.h"
#include <iostream>
using namespace std;

class Forca : public Mecanica
{
	friend ostream& operator<<(ostream& output, const Forca& imprime);
public:
	Forca();
	Forca(const double& forca, const double& massa, const double& aceleracao);
	Forca(const Forca&);
	~Forca();
	void mudarVariaveis(const double& forca, const double& massa, const double& aceleracao);
	double calcForca();
	static double calcForca(const double& mas, const double& acel);
	const Forca& operator=(const Forca& forc);
	
	void operator+=(const Forca& inc);
	
	virtual void imprimir() = 0;
protected:
	double forca;
	double massa;
	double aceleracao;
};

#endif // FORCA_H
