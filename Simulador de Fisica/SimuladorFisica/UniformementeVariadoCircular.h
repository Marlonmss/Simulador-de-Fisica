#ifndef UNIFORMEMENTEVARIADOCIRCULAR_H
#define UNIFORMEMENTEVARIADOCIRCULAR_H
#include "Mecanica.h"
#include <iostream>
using namespace std;

class UniformementeVariadoCircular : public Mecanica
{
	friend ostream& operator<<(ostream& output, const UniformementeVariadoCircular& imprime);
public:
	UniformementeVariadoCircular();
	UniformementeVariadoCircular(const double& velocidade_angular, const double& eixo_x, const double& deslocamento_angular, const double& aceleracao_angular, const double& tempo, const double& raio, const double& aceleracao_centripeda);
	UniformementeVariadoCircular(const UniformementeVariadoCircular& copia);
	~UniformementeVariadoCircular();
	void mudarVariaveis(const double& velocidade_angular, const double& eixo_x, const double& deslocamento_angular, const double& aceleracao_angular, const double& tempo, const double& raio, const double& aceleracao_centripeda);
	double calcVelocidadeMedia();
	static double calcVelocidadeMedia(const double& deslocamento_angular, const double& temp);
	double calcDeslocamentoAngular();
	static double calcDeslocamentoAngular(const double& des, const double& raio);
	double calcAceleracaoMedia();
	static double calcAceleracaoMedia(const double& vel, const double& temp);
	double calcVelocidade(const double& vel0);
	static double calcVelocidade(const double& vel0, const double& acel, const double& temp);
	double calcDeslocamento(const double& des0, const double& vel0);
	static double calcDeslocamento(const double& des0, const double& vel0, const double& temp, const double& acel);
	double calcTorricelli(const double& vel0, const double& des0);
	static double calcTorricelli(const double& vel0, const double& des0, const double& acel, const double& des);
	double calcAceleracaoCentripeda();
	static double calcAceleracaoCentripeda(const double& vel, const double& raio);
	void operator+=(const UniformementeVariadoCircular& inc);
	virtual void imprimir();
	
private:
	double velocidade_angular;
	double eixo_x;
	double deslocamento_angular;
	double aceleracao_angular;
	double tempo;
	double raio;
	double aceleracao_centripeda;
};

#endif // UNIFORMEMENTEVARIADOCIRCULAR_H
