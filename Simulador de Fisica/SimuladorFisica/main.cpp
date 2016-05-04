#include <iostream>
#include <vector>
#include <cstdlib>
#include <typeinfo>
#include "Mecanica.h"
#include "UniformementeVariado.h"
#include "UniformementeVariadoCircular.h"
#include "UniformementeVariadoObliquo.h"
#include "Forca.h"
#include "ForcaAtrito.h"
#include "ForcaCentripeda.h"
#include "ForcaElastica.h"
#include "TrabalhoEnergia.h"
#include "QuantidadeMovimento.h"
using namespace std;

void principal();

int main()
{
	char ch;
	do
	{
		principal();
		cout << "Deseja executar de novo? (Digite s para sim e qualquer outra tecla para nao): ";
		cin >> ch;
	}while(ch == 's');
	
	const int n = 3;
	vector<Mecanica *> vmec(n);
	vmec[0] = new ForcaAtrito(rand()%9+1,rand()%9+1,rand()%9+1,rand()%9+1,rand()%9+1);
	vmec[1] = new ForcaCentripeda(rand()%9+1,rand()%9+1,rand()%9+1,rand()%9+1);
	vmec[2] = new ForcaElastica(rand()%9+1,rand()%9+1,rand()%9+1);
	
	for(int i=0; i<n; i++)
	{
		ForcaAtrito* pont1 = dynamic_cast <ForcaAtrito*> (vmec[i]);
		ForcaCentripeda* pont2 = dynamic_cast <ForcaCentripeda*> (vmec[i]);
		ForcaElastica* pont3 = dynamic_cast <ForcaElastica*> (vmec[i]);
		
		if(pont1)
		{
			double resultado = pont1->calcForcaAtrito('e');
			cout << "\nCalculo da forca de atrito estatico para valores aleatorios: " << resultado;
		}
		
		if(pont2)
		{
			double resultado = pont2->calcForcaCentripeda();
			cout << "\nCalculo da forca centripeda para valores aleatorios: " << resultado;
		}
		
		if(pont3)
		{
			double resultado = pont3->calcForcaElastica();
			cout << "\nCalculo da forca elastica para valores aleatorios: " << resultado;
		}
	}
}

void principal()
{
	int op1,op2,op3;
	double dis, tem, vel, acel, des0, vel0, temp, des , teta ,vel0y, x, y, deslocamento_angular, raio, forca, deslocamento, velocidade, massa, altura;
	Vetor velo0(x,y);
	cout << "Menu de resolucao de problemas simples de Mecanica: " << endl
	<< "Digite o codigo do tipo de problema que deseja resolver: " << endl
	<< "\nCinematica 1"
	<< "\nForcas 2"
	<< "\nTrabalho e Energia 3"
	<< "\nQuantidade de movimento 4\n";
	
	cin >> op1;
	
	switch(op1)
	{system("cls");
		case 1:
		cout << "\nMovimento Uniformemente Variado 1"
		<< "\nMovimento Uniformemente Variado Obliquo 2"
		<< "\nMovimento Uniformemente Variado Circular 3\n";
		
		cin >> op2;
		
		switch(op2)
		{system("cls");
			case 1:
			cout << "\nVelocidade Media 1"
			<< "\nAceleracao media 2"
			<< "\nFuncao horaria da velocidade 3"
			<< "\nFuncao horaria da posicao em funcao do tempo 4"
			<< "\nEquacao de Torricelli 5\n";
			
			cin >> op3;
			
			switch(op3)
			{system("cls");
				case 1:
				cout << "\nDigite os valores para a distancia e o tempo, respctivamente: ";
				
				cin >> dis >> tem; 
				cout << UniformementeVariado::calcVelocidadeMedia(dis, tem);
				break;
				
				case 2:
				cout << "\nDigite os valores para a velocidade e o tempo, respctivamente: ";
				
				cin >> vel >> tem; 
				cout << UniformementeVariado::calcAceleracaoMedia(vel, tem);
				break;
				
				case 3:
				cout << "\nDigite os valores para a velocidade, aceleracao e o tempo, respctivamente: ";
				
				cin >> vel >> acel >> tem; 
				cout << UniformementeVariado::calcVelocidade(vel, acel, tem);
				break;
				
				case 4:
				cout << "\nDigite os valores para a posicao inicial, velocidade inicial, tempo e a aceleracao, respctivamente: ";
				
				cin >> des0 >> vel0 >> temp >> acel;
				cout << UniformementeVariado::calcDeslocamento( des0,  vel0,  temp,  acel);
				break;
				
				case 5:
				cout << "\nDigite os valores para a velocidade inicial, posicao inicial, aceleracao e o deslocamento, respctivamente: ";
				
				cin >> vel0 >> des0 >> acel >> des;
				cout << UniformementeVariado::calcTorricelli(vel0, des0, acel, des);
				break;
			}
			break;
			
			case 2:
			cout << "\nCalcular a velocidade inicial na horizontal 1"
			<< "\nCalcular a velocidade inicial na vertical 2"
			<< "\nCalcular o deslocamento 3"
			<< "\nCalcular o alcance maximo na horizontal 4\n";
			cin >> op3;
			
			switch(op3)
			{system("cls");
				case 1:
				cout << "\nDigite os valores para a velocidade inicial na horizontal e o angulo: ";
				
				cin >> vel0 >> teta;
				cout << UniformementeVariadoObliquo::calcVelocidade0_x(vel0, teta);
				break;
				
				case 2:
				cout << "\nDigite os valores para a velocidade inicial na vertical e o angulo: ";
				
				cin >> vel0 >> teta;
				cout << UniformementeVariadoObliquo::calcVelocidade0_y(vel0, teta);
				break;
				
				case 3:
				cout << "\nDigite os valores para a posicao inicial, intensidade da velocidade inicial no eixo y e tempo: ";
				
				cin >> des0 >> vel0y >> temp;
				cout << UniformementeVariadoObliquo::calcDeslocamento(des0, vel0y, temp);
				break;
				
				case 4:
				cout << "\nDigite os valores para o vetor (x,y) velocidade inicial e o angulo: ";
				
				cin >> x >> y;
				
				cin >> teta;
				cout << UniformementeVariadoObliquo::calcAlcanceMaximo(velo0, teta);
				break;
			}
			break;
			
			case 3:
			cout << "\nVelocidade Media angular 1"
			<< "\nDeslocamento angular 2"
			<< "\nAceleracao media angular 3"
			<< "\nFuncao horaria da velocidade angular 4"
			<< "\nFuncao horaria da posicao angular em funcao do tempo 5"
			<< "\nEquacao de Torricelli angular 6"
			<< "\nAceleracao centripeda 7\n";
			cin >> op3;
			
			switch(op3)
			{system("cls");
				case 1:
				cout << "\nDigite os valores para o deslocamento angular e tempo:";
				
				cin >> deslocamento_angular >> temp;
				cout << UniformementeVariadoCircular::calcVelocidadeMedia(deslocamento_angular, temp);
				break;
				
				case 2:
				cout << "\nDigite os valores para o deslocamento e raio:";
				
				cin >> des >> raio;
				cout << UniformementeVariadoCircular::calcDeslocamentoAngular(des, raio);
				break;
				
				case 3:
				cout << "\nDigite os valores para a velocidade e tempo:";
				
				cin >> vel >> temp;
				cout << UniformementeVariadoCircular::calcAceleracaoMedia(vel, temp);
				break;
				
				case 4:
				cout << "\nDigite os valores para a velocidade inicial, aceleracao e o tempo:";
				
				cin >> vel0 >> acel >> temp;
				cout << UniformementeVariadoCircular::calcVelocidade(vel0, acel, temp);
				break;
				
				case 5:
				cout << "\nDigite os valores para a posicao inicial, velocidade inicial, tempo e a aceleracao:";
				
				cin >> des0 >> vel0 >> temp >> acel;
				cout << UniformementeVariadoCircular::calcDeslocamento(des0, vel0, temp, acel);
				break;
				
				case 6:
				cout << "\nDigite os valores para a velocidade inicial, posicao inicial, aceleracao e o deslocamento:";
				
				cin >> vel0 >> des0 >> acel >> des;
				cout << UniformementeVariadoCircular::calcTorricelli(vel0, des0, acel, des);
				break;
				
				case 7:
				cout << "\nDigite os valores para a velocidade e o raio:";
				
				cin >> vel >> raio;
				cout << UniformementeVariadoCircular::calcAceleracaoCentripeda(vel, raio);
				break;
			}
			break;
		}
		break;
		
		case 2:
		cout << "\nSegunda lei de Newton 1"
		<< "\nForca de atrito 2"
		<< "\nForca elastica 3"
		<< "\nForca centripeda 4\n";
		cin >> op2;
		
		switch(op2)
		{
			case 1:
			cout << "\nDigite os valores da massa e da aceleracao:";
			double mas, acel;
			cin >> mas >> acel;
			cout << Forca::calcForca(mas, acel);
			break;
			
			case 2:
			cout << "\nDigite os valores do coeficiente de atrito e da forca normal:";
			double coef, nor;
			cin >> coef >> nor;
			cout << ForcaAtrito::calcForcaAtrito(coef, nor);
			break;
			
			case 3:
			cout << "\nDigite os valores da constante elastica e da deformacao da mola:";
			double const_e, def;
			cin >> const_e >> def;
			cout << ForcaElastica::calcForcaElastica(const_e, def);
			break;
			
			case 4:
			cout << "\nDigite os valores da massa, velocidade e do raio:";
			double mass, velo, r;
			cin >> mass >> velo >> r;
			cout << ForcaCentripeda::calcForcaCentripeda(mass, velo, r);
			break;
		}
		break;
		
		case 3:
		cout << "\nCalcular trabalho 1"
		<< "\nCalcular pontencia media 2"
		<< "\nCalcular energia cinetica 3"
		<< "\nCalcular energia potencial gravitacional 4"
		<< "\nCalcular energia potencial elastica 5"
		<< "\nCalcular energia mecanica 6\n";
		cin >> op2;
		
		switch(op2)
		{
			case 1:
			cout << "\nDigite os valores para forca, deslocamento e o angulo:";
			
			cin >> forca >> deslocamento >> teta;
			cout << TrabalhoEnergia::calcTrabalho(forca, deslocamento, teta);
			break;
			
			case 2:
			cout << "\nDigite os valores para forca e velocidade:";
			
			cin >> forca >> velocidade;
			cout << TrabalhoEnergia::calcPotenciaMedia(forca, velocidade);
			break;
			
			case 3:
			cout << "\nDigite os valores para velocidade e massa:";
			
			cin >> velocidade >> massa;
			cout << TrabalhoEnergia::calcEnergiaCinetica(velocidade, massa);
			break;
			
			case 4:
			cout << "\nDigite os valores para massa e altura:";
			
			cin >> massa >> altura;
			cout << TrabalhoEnergia::calcEnergiaPotGravitacional(massa, altura);
			break;
			
			case 5:
			cout << "\nDigite os valores para constante elastica e deformacao da mola:";
			double const_elastica, deformacao_mola;
			cin >> const_elastica >> deformacao_mola;
			cout << TrabalhoEnergia::calcEnergiaPotElastica(const_elastica, deformacao_mola);
			break;
			
			case 6:
			cout << "\nDigite os valores para energia cinetica e energia potencial:";
			double energia_cinetica, energia_potencial;
			cin >> energia_cinetica >> energia_potencial;
			cout << TrabalhoEnergia::calcEnergiaMecanica(energia_cinetica, energia_potencial);
			break;
		}
		break;
		
		case 4:
		cout << "\nCalcular impulso 1"
		<< "\nCalcular quantidade de movimento 2\n";
		cin >> op2;
		switch(op2)
		{
			case 1:
			cout << "\nDigite os valores para forca e tempo:";
			double forca, tempo;
			cin >> forca >> tempo;
			cout << QuantidadeMovimento::calcImpulso(forca, tempo);
			break;
			
			case 2:
			cout << "\nDigite os valores para velocidade e massa:";
			double velocidade, massa;
			cin >> velocidade >> massa;
			cout << QuantidadeMovimento::calcQuantidadeMovimento(velocidade, massa);
			break;
		}
		break;
	}
}