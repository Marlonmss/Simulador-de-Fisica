#ifndef MATEMATICA_H
#define MATEMATICA_H

class Matematica
{
public:
	Matematica();
	~Matematica();
	
	void virtual imprimir() = 0;
	
	const static double pi = 3.14159265359;
	static char ch;
	enum{NEGATIVO, POSITIVO};

};

#endif // MATEMATICA_H
