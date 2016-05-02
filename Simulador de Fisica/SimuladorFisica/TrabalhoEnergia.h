#ifndef TRABALHOENERGIA_H
#define TRABALHOENERGIA_H
#include "Mecanica.h"
#include <cmath>
#include "Vetor.h"
#include <iostream>
using namespace std;

class TrabalhoEnergia : public Mecanica
{
	friend ostream& operator<<(ostream& output, const TrabalhoEnergia& imprime);
public:
	TrabalhoEnergia();
	TrabalhoEnergia(const TrabalhoEnergia& copia);
	~TrabalhoEnergia();
	
	double virtual calcTrabalho();
	static double calcTrabalho(const double& forca, const double& deslocamento, const double& teta);
	
	double virtual calcPontenciaMedia();
	static double calcPontenciaMedia(const double& forca, const double& velocidade);
	
	double virtual calcEnergiaCinetica();
	static double calcEnergiaCinetica(const double& velocidade, const double& massa);
	
	double virtual calcEnergiaPotGravitacional();
	static double calcEnergiaPotGravitacional(const double& massa, const double& altura);
	
	double virtual calcEnergiaPotElastica();
	static double calcEnergiaPotElastica(const double& const_elastica, const double& deformacao_mola);
	
	double virtual calcEnergiaPotMecanica(const bool& flag);
	static double calcEnergiaPotMecanica(const double& energia_cinetica, const double& energia_potencial);
	
	void operator+=(const TrabalhoEnergia& inc);
	
private:
	double trabalho;
	double potencia_media;
	double forca;
	double deslocamento;
	double teta;
	double energia_cinetica;
	double energia_pot_gravitacional;
	double energia_pot_elastica;
	double energia_mecanica;
	double massa;
	double velocidade;
	double altura;
	double const_elastica;
	double deformacao_mola;
};

#endif // TRABALHOENERGIA_H
