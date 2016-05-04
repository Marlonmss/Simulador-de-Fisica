#ifndef MECANICA_H
#define MECANICA_H
#include "Vetor.h"

class Mecanica
{
public:
	Mecanica();
	~Mecanica();
	
	virtual void imprimir() = 0;
	const static double constante_g = 9.71;
	static double constante_g2;
	enum{NEGATIVO, POSITIVO};
};

#endif // MECANICA_H
