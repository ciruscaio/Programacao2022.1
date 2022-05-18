#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const int tamanho = 4;
	int codigo[tamanho];
	string nome[tamanho];
	string telefone[tamanho];

   //Faça vc em casa uma transacao para incluir os dados
	codigo[0] = 1;
	nome[0] = "F";
	telefone[0] = "2341234";

	codigo[1] = 2;
	nome[1] = "S";
	telefone[1] = "45677890";

	codigo[2] = 3;
	nome[2] = "B";
	telefone[2] = "12345678";

	codigo[3] = 4;
	nome[3] = "CAIO";
	telefone[3] = "09871234";

	//Funcionalidade Pesquisar
	//int cod;
	//cout << "PESQUISA PESSOA POR CODIGO \n\n";
	//cout << "Digite o codigo da pessoa: ";
	//cin >> cod;
	//cout << "\n\n";

	//for (int i = 0; i < tamanho; i++)
	//{
	//	if (codigo[i] == cod) // se forem iguais eu encontrei a pessoa
	//	{
	//		cout << "Codigo: " << codigo[i] << "\n";
	//		cout << "Nome: " << nome[i] << "\n";
	//		cout << "Telefone: " << telefone[i] << "\n";
	//	}
	//}

	//Salvar o banco de dados
	ofstream out("C:\\Users\\cirus\\Desktop\\db.txt");
	for (int i = 0; i < tamanho; i++)
	{
		out << "[" << codigo[i] << ";" << nome[i] << ";" << telefone[i] << "]" << endl;
	}
	out.close();
}
