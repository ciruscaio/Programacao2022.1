#include <iostream>

using namespace std;

int main()
{
	//PRIMEIRO EXEMPLO

	////Para doar sangue é necessário ter entre 18 e 67 anos.
	////Faça um aplicativo que pergunte a idade de uma pessoa e diga se ela 
	////pode doar sangue ou não.

	//int idade;

	//cout << "Escreva sua idade: ";
	//cin >> idade;

	//if ((idade >= 18) && (idade <= 67))
	//{
	//	cout << "Voce pode doar sangue";
	//}
	//else 
	//{
	//	cout << "Voce nao pode doar sangue!";
	//}


	////Final
	//string x;
	//cout << "\n\n\nAperte qualquer tecla para fechar: ";
	//cin >> x;


	//SEGUNDO EXEMPLO
	//Faça um programa que receba três inteiros e diga qual deles é o maior e qual o menor.
	
	int x;
	int y;
	int z;	
	
	cout << "Primeiro inteiro (X): ";
	cin >> x;

	cout << "Segundo  inteiro (Y): ";
	cin >> y;

	cout << "Terceiro inteiro (Z): ";
	cin >> z;

	//Comparacoes dos maiores
	if ((x > y) && (x > z))
	{
		cout << "\nX e maior: " << x;
	}
	else if ((y > x) && (y > z))
	{
		cout << "\nY e maior: " << y;
	}
	else if ((z > x) && (z > y))
	{
		cout << "\nZ e maior: " << z;
	}
	else
	{
		
	}

	//Comparacao dos menores
	//if ((x < y) && (x < z))
	//{
	//	cout << "\nX e menor: " << x;
	//}
	//else if ((y < x) && (y < z))
	//{
	//	cout << "\nY e menor: " << y;
	//}
	//else
	//{
	//	cout << "\nZ e menor: " << z;
	//}

}
