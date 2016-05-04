#include "UniformementeVariado.h"

UniformementeVariado::UniformementeVariado()
{
	this->velocidade = 0;
	this->eixo_x = 0;
	this->aceleracao = 0;
	this->tempo = 0;
}

UniformementeVariado::UniformementeVariado(const UniformementeVariado& copia)
{
	this->velocidade = copia.velocidade;
	this->eixo_x = copia.eixo_x;
	this->aceleracao = copia.aceleracao;
	this->tempo = copia.tempo;
}

UniformementeVariado::UniformementeVariado(const double& velocidade, const double& eixo_x, const double& aceleracao, const double& tempo)
{
	this->velocidade = velocidade;
	this->eixo_x = eixo_x;
	this->aceleracao = aceleracao;
	this->tempo = tempo;
}

UniformementeVariado::~UniformementeVariado()
{
}

void UniformementeVariado::mudarVariaveis(const double& velocidade, const double& eixo_x, const double& aceleracao, const double& tempo)
{
	this->velocidade = velocidade;
	this->eixo_x = eixo_x;
	this->aceleracao = aceleracao;
	this->tempo = tempo;
}
double UniformementeVariado::calcVelocidadeMedia()
{
	return velocidade = eixo_x/tempo;
}
double UniformementeVariado::calcVelocidadeMedia(const double& distancia, const double& temp)
{
	return distancia/temp;
}
double UniformementeVariado::calcAceleracaoMedia()
{
	return aceleracao = velocidade/tempo;
}
double UniformementeVariado::calcAceleracaoMedia(const double& vel, const double& temp)
{
	return vel/temp;
}
double UniformementeVariado::calcVelocidade(const double& vel0)
{
	return velocidade = vel0 + aceleracao*tempo;
}
double UniformementeVariado::calcVelocidade(const double& vel0, const double& acel, const double& temp)
{
	return vel0 + acel*temp;
}
double UniformementeVariado::calcDeslocamento(const double& des0, const double& vel0)
{
	return eixo_x = des0 + vel0*tempo + 0.5*aceleracao*tempo*tempo;
}
double UniformementeVariado::calcDeslocamento(const double& des0, const double& vel0, const double& temp, const double& acel)
{
	return des0 + vel0*temp + 0.5*acel*temp*temp;
}
double UniformementeVariado::calcTorricelli(const double& vel0, const double& des0)
{
	return velocidade = vel0*vel0 + 2*aceleracao*(eixo_x-des0);
}
double UniformementeVariado::calcTorricelli(const double& vel0, const double& des0, const double& acel, const double& des)
{
	return vel0*vel0 + 2*acel*(des-des0);
}

void UniformementeVariado::operator+=(const UniformementeVariado& inc)
{
	this->velocidade += inc.velocidade;
	this->eixo_x += inc.eixo_x;
	this->aceleracao += inc.aceleracao;
	this->tempo += inc.tempo;
}

ostream& operator<<(ostream& output, const UniformementeVariado& imprime)
{
	output << "Velocidade: " << imprime.velocidade 
	<< "\nDeslocamento: " << imprime.eixo_x
	<< "\nAceleracao: " << imprime.aceleracao
	<< "\nTempo: " << imprime.tempo;
}

void UniformementeVariado::imprimir()
{
	cout << "Velocidade: " << velocidade 
	<< "\nDeslocamento: " << eixo_x
	<< "\nAceleracao: " << aceleracao
	<< "\nTempo: " << tempo;
}