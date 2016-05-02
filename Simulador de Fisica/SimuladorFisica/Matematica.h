#ifndef MATEMATICA_H
#define MATEMATICA_H

class Matematica
{
public:
	Matematica();
	~Matematica();
	double virtual calcModulo() = 0;
	//Vetor virtual operator*(const double& escalar) = 0;
	//const Vetor& virtual operator=(const Vetor& vet) = 0;
	//const Vetor& virtual operator+(const Vetor& vet) = 0;
	//void virtual operator+=(const Matematica& inc) = 0;
	void virtual imprimir() = 0;

};

#endif // MATEMATICA_H
