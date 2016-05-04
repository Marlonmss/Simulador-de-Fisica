#ifndef UNIFORMEMENTEVARIADOOBLIQUO_H
#define UNIFORMEMENTEVARIADOOBLIQUO_H
#include "Mecanica.h"
#include "Vetor.h"
#include <cmath>
#include <iostream>
using namespace std;

class UniformementeVariadoObliquo : public Mecanica
{
	friend ostream& operator<<(ostream& output, const UniformementeVariadoObliquo& imprime);
public:
	UniformementeVariadoObliquo();
	UniformementeVariadoObliquo(const Vetor& velocidade0, const double& eixo_x, const double& eixo_y, const double& tempo, const double& alcance_x);
	UniformementeVariadoObliquo(const UniformementeVariadoObliquo& copia);
	~UniformementeVariadoObliquo();
	void mudarVariaveis(const Vetor& velocidade0, const double& eixo_x, const double& eixo_y, const double& tempo, const double& alcance_x);
	double calcVelocidade0_x(const double& teta);
	static double calcVelocidade0_x(const double& vel0, const double& teta);
	double calcVelocidade0_y(const double& teta);
	static double calcVelocidade0_y(const double& vel0, const double& teta);
	double calcDeslocamento(const double& y0);
	static double calcDeslocamento(const double& des0, const double& vel0y, const double& temp);
	double calcAlcanceMaximo(const double& teta);
	static double calcAlcanceMaximo(const Vetor& vel0, const double& teta);
	void operator+=(const UniformementeVariadoObliquo& inc);
	virtual void imprimir();
	
private:
	Vetor velocidade0;
	double eixo_x;
	double eixo_y;
	double tempo;
	double alcance_x;

};

#endif // UNIFORMEMENTEVARIADOOBLIQUO_H
