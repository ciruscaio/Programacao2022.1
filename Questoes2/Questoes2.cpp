#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    //1.9.	Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um triângulo. 
    //Supor que os valores lidos são inteiros e positivos. Caso os valores formem um triângulo, calcular e escrever a área deste triângulo. 
    //Se não formam triângulo escrever os valores lidos. (se a > b + c não formam triângulo algum, se a é o maior).

	//Variáveis
	int A;
	int B;
	int C;

	bool problema = false;

	double sp;
	double area;

	//Coletar da interface
	cout << "Digite A: ";
	cin >> A;

	cout << "Digite B: ";
	cin >> B;

	cout << "Digite C: ";
	cin >> C;

	//Cálculos
	if (A > B + C)
	{
		problema = true;
	}
	else if (B > A + C)
	{
		problema = true;
	}
	else if (C > A + B)
	{
		problema = true;
	}
	else 
	{
		//sp = (a+b+c)/2
		//area = raiz(sp.(sp-a).(sp-b).(sp-c))

		sp = (A + B + C) / 2;
		area = sqrt(sp * (sp - A) * (sp - B) * (sp - C));

		cout << "Area: " << area;

	}

	if (problema)
	{
		cout << "Houve um problema: nao e possivel formar um triangulo, pois um dos lados e maior que a soma dos demais\n\n";
		cout << "(" << A << "," << B << "," << C << ")";
	}


}

