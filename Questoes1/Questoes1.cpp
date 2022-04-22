#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	//1.1.	Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão:

	//Variáveis
	int A;
	int B;
	int C;

	int R;
	int S;
	double D;

	//Coletar da interface
	cout << "Digite A: ";
	cin >> A;

	cout << "Digite B: ";
	cin >> B;

	cout << "Digite C: ";
	cin >> C;

	//Cálculos
	R = pow((A + B), 2);
	S = (B + C) * (B + C);

	D = (R + S) / 2;

	//Imprimir em tela
	cout << "D: " << D;
}
