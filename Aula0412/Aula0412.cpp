#include <iostream>

using namespace std;

int main()
{
	//Para doar sangue é necessário ter entre 18 e 67 anos.
	//Faça um aplicativo que pergunte a idade de uma pessoa e diga se ela 
	//pode doar sangue ou não.

	int idade;

	cout << "Escreva sua idade: ";
	cin >> idade;

	if ((idade >= 18) && (idade <= 67))
	{
		cout << "Voce pode doar sangue";
	}
	else 
	{
		cout << "Voce nao pode doar sangue!";
	}


	//Final
	string x;
	cout << "\n\n\nAperte qualquer tecla para fechar: ";
	cin >> x;
}
