#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	//2.7.	Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.

	//Variaveis
	int ano = 1984;
	int mes = 5;
	int dia = 25;

	int anospassados;
	int mesespassados;
	int diaspassados;
	int total;

	//Quantidade de anos que se passaram
	anospassados = 2022 - ano;
	mesespassados = mes;
	diaspassados = dia;

	//Calcular em dias
	total = (anospassados * 365) + mesespassados + diaspassados;

	//Imprimir em tela
	cout << "A quantidade de dias foi: " << total;



}
