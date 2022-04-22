#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{
	//2.1.	Crie um programa que determine se um ponto (X,Y) está dentro de um círculo ou não. Para tanto o programa deverá 
	// ler os seguintes dados de teclado: 
	//	•	Coordenadas do centro do círculo;
	//	•	Raio do círculo;
	//	•	Ponto a ser testado.
	//	Obs1.: o programa deverá imprimir na tela mensagens perguntado ao usuário os dados necessários e a seguir permitir que este os digite.
	//	Obs2. : d = raiz((xb - xa)² + (yb - ya)²)


	//Variaves
	double cx = 5;
	double cy = 0;

	double r = 2;

	double px = 4;
	double py = 1;

	double d;

	//Distância
	d = sqrt( ((cx - px) * (cx - px)) + ((cy - py) * (cy - py)));

	//Compara
	if (d > r)
	{
		cout << "O ponto ta fora da circunfefrencia";
	}
	else 
	{
		cout << "O ponto ta dentro da circunfefrencia";
	}


}
