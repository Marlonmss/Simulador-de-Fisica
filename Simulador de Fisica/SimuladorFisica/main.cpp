#include <iostream>
#include <vector>
#include "Mecanica.h"
#include "UniformementeVariado.h"
#include "UniformementeVariadoCircular.h"
#include "UniformementeVariadoObliquo.h"
#include "Forca.h"

using namespace std;

int main()
{
	const int n = 3;
	
	vector<Mecanica *> vmec(n);
	
	vmec[0] = new UniformementeVariado();
	vmec[1] = new UniformementeVariadoCircular();
	vmec[2] = new UniformementeVariadoObliquo();
	
	for(int i=0; i<n; i++)
	{
		UniformementeVariado* pont = dynamic_cast <UniformementeVariado*> (vmec[i]);
		
		if(pont)
		{
			pont->mudarVariaveis(234,44,66,11);
			pont->calcVelocidadeMedia();
			cout << pont;
		}
	}
}

/*void menu()
{
	cout << "Menu de resolucao de problemas simples da Fisica: " << endl
	<< "\nCinematica 1"
	<< "\nDinamica 2"
	<< "\nTrabalho e Energia 3"
	<< "\nEstatica 4"
	switch(num)
	{
		case 1:
		cout << "\nVelocidade Media 1"
		<< "\nFuncao horaria do deslocamento 2"
		<< "\n\nMovimento uniformemente variado:"
		<< "\nAceleracao media 3"
		<< "\nFuncao horaria da velocidade 4"
		<< "\nFuncao horaria da posicao em funcao do tempo 5"
		<< "\nEquacao de Torricelli 6"
		<< "\n\nMovimento Vertical"
		<< "\nFuncao horaria da velocidade no movimento vertical 7"
		<< "\nFuncao horaria da posicao em funcao do tempo no movimento vertical 8"
		<< "\nEquacao de Torricelli no movimento vertical 9"
		<< "\n\nMovimento Obliquo"
		<< "\nFuncao horaria da posicao horizontal 10"
		<< "\nComponente horizontal da velocidade inicial 11"
		<< "\nFunção horária da posição vertical 12"
		<< "\nComponente vertical da velocidade inicial 13"
		<< "\nAlcance máximo do projétil horizontalmente 14"
		<< "\n\nMovimento circular"
		<< "\nPosição angular 15"
		<< "\nDeslocamento angular 16"
		<< "\nVelocidade angular 17"
		<< "\nAceleração angular 18"
		<< "\nFunção horária da posição angular no movimento circular uniforme 19"
		<< "\nFunção horária da velocidade angular 20"
		<< "\nFunção horária da posição angular 21"
		<< "\nEquação de Torricelli para movimento circular 22"
		<< "\nAceleração centrípeta 23" << endl;
		switch(num)
		{
			case 1:
				cout << "Digite o valor"
				UniformementeVariado::calcVelocidadeMedia()
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
		}
		break;
	}
	
	cout << "\n\nLeis de Newton"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
	<< "\n"
}*/

//resolver o problema do plano inclinado
//resolver sistemas