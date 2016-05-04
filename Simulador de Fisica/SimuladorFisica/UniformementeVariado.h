#ifndef UNIFORMEMENTEVARIADO_H
#define UNIFORMEMENTEVARIADO_H
#include "Mecanica.h"
#include <iostream>
using namespace std;

class UniformementeVariado : public Mecanica
{
	friend ostream& operator<<(ostream& output, const UniformementeVariado& imprime);
public:
	UniformementeVariado();
	UniformementeVariado(const UniformementeVariado& copia);
	UniformementeVariado(const double& velocidade, const double& eixo_x, const double& aceleracao, const double& tempo);
	~UniformementeVariado();
	void mudarVariaveis(const double& velocidade, const double& eixo_x, const double& aceleracao, const double& tempo);
	double calcVelocidadeMedia();
	static double calcVelocidadeMedia(const double& distancia, const double& temp);
	double calcAceleracaoMedia();
	static double calcAceleracaoMedia(const double& vel, const double& temp);
	double calcVelocidade(const double& vel0);
	static double calcVelocidade(const double& vel0, const double& acel, const double& temp);
	double calcDeslocamento(const double& des0, const double& vel0);
	static double calcDeslocamento(const double& des0, const double& vel0, const double& temp, const double& acel);
	double calcTorricelli(const double& vel0, const double& des0);
	static double calcTorricelli(const double& vel0, const double& des0, const double& acel, const double& des);
	void operator+=(const UniformementeVariado& inc);
	virtual void imprimir();
private:
	double velocidade;
	double eixo_x;
	double aceleracao;
	double tempo;

};

#endif // UNIFORMEMENTEVARIADO_H
