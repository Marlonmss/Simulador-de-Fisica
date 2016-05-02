#include "UniformementeVariadoCircular.h"

UniformementeVariadoCircular::UniformementeVariadoCircular()
{
	this->velocidade_angular = 0;
	this->eixo_x = 0;
	this->deslocamento_angular = 0;
	this->aceleracao_angular = 0;
	this->tempo = 0;
	this->raio = 0;
	this->aceleracao_centripeda = 0;
}

UniformementeVariadoCircular::~UniformementeVariadoCircular()
{
}

UniformementeVariadoCircular::UniformementeVariadoCircular(const UniformementeVariadoCircular& copia)
{
	this->velocidade_angular = copia.velocidade_angular;
	this->eixo_x = copia.eixo_x;
	this->deslocamento_angular = copia.deslocamento_angular;
	this->aceleracao_angular = copia.aceleracao_angular;
	this->tempo = copia.tempo;
	this->raio = copia.raio;
	this->aceleracao_centripeda = copia.aceleracao_centripeda;
}

double UniformementeVariadoCircular::mudarVariaveis(const double& velocidade_angular, const double& eixo_x, const double& deslocamento_angular, const double& aceleracao_angular, const double& tempo, const double& raio, const double& aceleracao_centripeda)
{
	this->velocidade_angular = velocidade_angular;
	this->eixo_x = eixo_x;
	this->deslocamento_angular = deslocamento_angular;
	this->aceleracao_angular = aceleracao_angular;
	this->tempo = tempo;
	this->raio = raio;
	this->aceleracao_centripeda = aceleracao_centripeda;
}

double UniformementeVariadoCircular::calcVelocidadeMedia()
{
	return velocidade_angular = deslocamento_angular/tempo;
}
double UniformementeVariadoCircular::calcVelocidadeMedia(const double& deslocamento_angular, const double& temp)
{
	return deslocamento_angular/temp;
}
double UniformementeVariadoCircular::calcDeslocamentoAngular()
{
	return deslocamento_angular = eixo_x/raio;
}
double UniformementeVariadoCircular::calcDeslocamentoAngular(const double& des, const double& raio)
{
	return des/raio;
}
double UniformementeVariadoCircular::calcAceleracaoMedia()
{
	return aceleracao_angular = velocidade_angular/tempo;
}
double UniformementeVariadoCircular::calcAceleracaoMedia(const double& vel, const double& temp)
{
	return vel/temp;
}
double UniformementeVariadoCircular::calcVelocidade(const double& vel0)
{
	return velocidade_angular = vel0 + aceleracao_angular*tempo;
}
double UniformementeVariadoCircular::calcVelocidade(const double& vel0, const double& acel, const double& temp)
{
	return vel0 + acel*temp;
}
double UniformementeVariadoCircular::calcDeslocamento(const double& des0, const double& vel0)
{
	return deslocamento_angular = des0 + vel0*tempo + 0.5*aceleracao_angular*tempo*tempo;
}
double UniformementeVariadoCircular::calcDeslocamento(const double& des0, const double& vel0, const double& temp, const double& acel)
{
	return des0 + vel0*temp + 0.5*acel*temp*temp;
}
double UniformementeVariadoCircular::calcTorricelli(const double& vel0, const double& des0)
{
	return velocidade_angular = vel0*vel0 + 2*aceleracao_angular*(deslocamento_angular-des0);
}
double UniformementeVariadoCircular::calcTorricelli(const double& vel0, const double& des0, const double& acel, const double& des)
{
	return vel0*vel0 + 2*acel*(des-des0);
}
double UniformementeVariadoCircular::calcAceleracaoCentripeda()
{
	return aceleracao_centripeda = velocidade_angular*velocidade_angular*raio;
}
double UniformementeVariadoCircular::calcAceleracaoCentripeda(const double& vel, const double& raio)
{
	return vel*vel*raio;
}

void UniformementeVariadoCircular::operator+=(const UniformementeVariadoCircular& inc)
{
	this->velocidade_angular += inc.velocidade_angular;
	this->eixo_x += inc.eixo_x;
	this->deslocamento_angular += inc.deslocamento_angular;
	this->aceleracao_angular += inc.aceleracao_angular;
	this->tempo += inc.tempo;
	this->raio += inc.raio;
	this->aceleracao_centripeda += inc.aceleracao_centripeda;
}

ostream& operator<<(ostream& output, const UniformementeVariadoCircular& imprime)
{
	output << "Velocidade angular: " << imprime.velocidade_angular
	<< "\nDeslocamento na horizontal: " << imprime.eixo_x
	<< "\nDeslocamento angular: " << imprime.deslocamento_angular
	<< "\nAceleracao angular: " << imprime.aceleracao_angular
	<< "\nTempo: " << imprime.tempo
	<< "\nRaio: " << imprime.raio
	<< "\nAceleracao centripeda: " << imprime.aceleracao_centripeda;
}