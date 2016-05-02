#include "UniformementeVariadoObliquo.h"

UniformementeVariadoObliquo::UniformementeVariadoObliquo()
{
	this->velocidade0 = 0;
	this->eixo_x = 0;
	this->eixo_y = 0;
	this->tempo = 0;
	this->alcance_x = 0;
}

UniformementeVariadoObliquo::UniformementeVariadoObliquo(const UniformementeVariadoObliquo& copia)
{
	this->velocidade0 = copia.velocidade0;
	this->eixo_x = copia.eixo_x;
	this->eixo_y = copia.eixo_y;
	this->tempo = copia.tempo;
	this->alcance_x = copia.alcance_x;
}

UniformementeVariadoObliquo::~UniformementeVariadoObliquo()
{
}

double UniformementeVariadoObliquo::mudarVariaveis(const Vetor& velocidade0, const double& eixo_x, const double& eixo_y, const double& tempo, const double& alcance_x)
{
	this->velocidade0 = velocidade0;
	this->eixo_x = eixo_x;
	this->eixo_y = eixo_y;
	this->tempo = tempo;
	this->alcance_x = alcance_x;
}

double UniformementeVariadoObliquo::calcVelocidade0_x(const double& teta)
{
	return velocidade0.eixo_x = velocidade0.calcModulo() * cos(teta);
}
double UniformementeVariadoObliquo::calcVelocidade0_x(const double& vel0, const double& teta)
{
	return vel0 * cos(teta);
}
double UniformementeVariadoObliquo::calcVelocidade0_y(const double& teta)
{
	return velocidade0.eixo_y = velocidade0.calcModulo() * sin(teta);
}
double UniformementeVariadoObliquo::calcVelocidade0_y(const double& vel0, const double& teta)
{
	return vel0 * sin(teta);
}
double UniformementeVariadoObliquo::calcDeslocamento(const double& y0)
{
	return eixo_y = y0 + velocidade0.eixo_y*tempo + 0.5*constante_g*tempo*tempo;
}
double UniformementeVariadoObliquo::calcDeslocamento(const double& des0, const double& vel0y, const double& temp)
{
	return des0 + vel0y*temp + 0.5*constante_g*temp*temp;
}
double UniformementeVariadoObliquo::calcAlcanceMaximo(const double& teta)
{
	return alcance_x = velocidade0.calcModulo()*velocidade0.calcModulo()*sin(2*teta)/constante_g;
}
double UniformementeVariadoObliquo::calcAlcanceMaximo(const Vetor& vel0, const double& teta)
{
	return Vetor::calcModulo(vel0)*Vetor::calcModulo(vel0)*sin(2*teta)/constante_g;
}

void UniformementeVariadoObliquo::operator+=(const UniformementeVariadoObliquo& inc)
{
	this->velocidade0 += inc.velocidade0;
	this->eixo_x += inc.eixo_x;
	this->eixo_y += inc.eixo_y;
	this->tempo += inc.tempo;
	this->alcance_x += inc.alcance_x;
}

ostream& operator<<(ostream& output, const UniformementeVariadoObliquo& imprime)
{
	 output << "Modulo da velocidade inicial"; imprime.velocidade0.modulo;
	 output << "\nDeslocamento na horizontal: " << imprime.eixo_x
	 << "\nDeslocamento na vertical: " << imprime.eixo_y
	 << "\nTempo: " << imprime.tempo
	 << "\nAlcance Maximo: " << imprime.alcance_x;
}