#include <iostream>
#include <string>
#include <stdlib.h>		//limpar tela
#include <fstream>		//leitura de arquivos
#include <stdlib.h>		//comversão de dados

using namespace std;

/// <summary>
///		CRUD completo com Banco de Dados
///			(CRUD = Create, Read, Update, Delete / tradução: Criar, Listar [Pesquisar], Atualizar e Deletar)
///		
///		
///		Esta aplicação contém uma transação completa, além de um tipo 
///		primitivo de banco de dados, trata-se da manipulação de arquivos 
///		como num banco estruturado. Claramente, não é assim que fazemos 
///		numa aplicação comercial, mas os princípios se conservam. 
/// 
///		Numa aplicação comercial, seriam desenvolvidos princípios como: 
///		Single Connexion, Algum paradigma de dados, Uma linguagem de banco como SQL ou um FrameWork de dados como Entity... 
///		Em fim, uma arquitetura... moderna e desacoplada. 
/// </summary>


//Constantes/variaveis globais
const string banco_endereco = "C:\\Users\\cirus\\Desktop\\banco.txt";
const int tamanho = 1000;
int codigo[tamanho];
string nome[tamanho];
string cpf[tamanho];
string tel[tamanho];
string email[tamanho];


// ----------------------------------------------------------------------------------------------------------------


void tada()
{
	cout << "  ///////////////////////////////////////" << "\n";
	cout << " /// SISTEMA DE CADASTRO DE USUARIOS ///" << "\n";
	cout << "///////////////////////////////////////" << "\n\n";
	cout << "Versao: 1.0" << "\n";
	cout << "Desenvolvedor: Caio Barbosa";
}


void menu()
{
	cout << "\n\n\n";
	cout << "ESCOLHAS:" << "\n";
	cout << "[0] Para listar usuarios;" << "\n";
	cout << "[1] Para incluir usuarios;" << "\n";
	cout << "[2] Para excluir usuarios;" << "\n";
	cout << "[3] Para alterar usuarios;" << "\n";
	cout << "[4] Para sair." << "\n\n\n";
}

void reset_banco()
{
	for (int i = 0; i < tamanho; i++)
	{
		if (codigo[i] != 0)
		{
			codigo[i] = 0;
			nome[i] = "";
			cpf[i] = "";
			tel[i] = "";
			email[i] = "";
		}
		else
		{
			break;
		}
	}
}

void obter_banco()
{
	reset_banco();
	ifstream in(banco_endereco);
	string linha;

	if (in.is_open()) //enquando o banco estiver aberto para leitura
	{
		while (!in.eof()) //enquando o tiver linhas para serem lidas
		{
			getline(in, linha);

			//Quebrando a linha e colocando dentro de um array, 
			//iremos procurar a primeira posição vazia do array e prencher
			for (int i = 0; i < tamanho; i++)
			{
				if (codigo[i] == 0) //signififca que a posição está vazia na memória, para todos os arrays do banco
				{
					//Vamos percorrer a linha até encontrar o caracter de separação ';'
					//cada separação é uma entrada num vetor do banco
					string temp = "";
					int cont = 0;
					for (int j = 0; j < linha.length(); j++)
					{

						if (linha[j] != ';')
						{
							temp += linha[j];
						}
						else
						{
							switch (cont)
							{
							case 0:
								codigo[i] = stoi(temp);
								break;
							case 1:
								nome[i] = temp;
								break;
							case 2:
								cpf[i] = temp;
								break;
							case 3:
								tel[i] = temp;
								break;
							case 4:
								email[i] = temp;
								break;
							}

							temp = "";

							cont++;
						}
					}

					break;
				}
			}

		}
	}
	in.close();
}

int main()
{
	system("mode con:cols=100 lines=30");

	//Variáveis de controle de fluxox
	bool sair = false;
	string menu_escolha;

	do
	{
		system("CLS"); //comando para apagar tudo
		tada();
		menu();

		cin >> menu_escolha;
		cout << "\n\n";

		if (menu_escolha == "0") // ----------------------------------------------------------------------------------
		{
			//Obtem do banco
			obter_banco();

			//Começa a impressão
			cout << "CODIGO \tNOME \t\tCPF \t\tTELEFONE \tEMAIL \n";
			for (int i = 0; i < tamanho; i++)
			{
				if (codigo[i] != 0)
				{
					cout << codigo[i] << "\t" << nome[i] << "\t" << cpf[i] << "\t" << tel[i] << "\t" << email[i] << "\n";
				}
			}

		}
		else if (menu_escolha == "1") // ----------------------------------------------------------------------------------
		{
			obter_banco();

			for (int i = 0; i < tamanho; i++)
			{
				if (codigo[i] == 0)
				{
					//Aumentando o vetor
					codigo[i] = i + 1;

					cout << "NOME: ";
					char aux_nome[100];
					cin.get(); //Limpa o buffer (se não o getline nao funciona)
					cin.getline(aux_nome, 100); //Para pegar frazes completas
					nome[i] = aux_nome;

					cout << "CPF: ";
					char aux_cpf[100];
					cin.get(); //Limpa o buffer (se não o getline nao funciona)
					cin.getline(aux_cpf, 100); //Para pegar frazes completas
					cpf[i] = aux_cpf;

					cout << "TEL: ";
					char aux_tel[100];
					cin.get(); //Limpa o buffer (se não o getline nao funciona)
					cin.getline(aux_tel, 100); //Para pegar frazes completas
					tel[i] = aux_tel;

					cout << "EMAIL: ";
					char aux_email[100];
					cin.get(); //Limpa o buffer (se não o getline nao funciona)
					cin.getline(aux_email, 100); //Para pegar frazes completas
					email[i] = aux_email;

					cout << "\n";

					//Persistência
					ofstream out(banco_endereco, ios::app); //abre indo para o fim da última linha
					if (out.is_open())
					{
						out << endl << codigo[i] << ";" << nome[i] << ";" << cpf[i] << ";" << tel[i] << ";" << email[i] << ";";
					}
					out.close();

					break;

				}
			}
		}
		else if (menu_escolha == "2") // ----------------------------------------------------------------------------------
		{
			obter_banco();

			string lCpf;
			cout << "INSIRA CPF PARA EXCLUSAO: ";
			cin >> lCpf;

			ofstream out(banco_endereco, ios::trunc); //Abre limpando tudo
			bool deletado = false;
			if (out.is_open()) //enquando o banco estiver aberto para leitura
			{
				for (int i = 0; i < tamanho; i++)
				{
					if (codigo[i] != 0)
					{
						if (cpf[i] != lCpf)
						{
							out << codigo[i] << ";" << nome[i] << ";" << cpf[i] << ";" << tel[i] << ";" << email[i] << ";" << endl;
						}
						else
						{
							deletado = true;
						}
					}
				}
			}
			out.close();

			if (deletado)
			{
				cout << "\n" << "SUCESSO: Usuario deletado!";
			}
			else
			{
				cout << "\n" << "ERRO: Usuario nao foi encontrado!";
			}

		}
		else if (menu_escolha == "3") // ----------------------------------------------------------------------------------
		{
			obter_banco();

			string lCpf;
			cout << "INSIRA O CPF DO USUARIO QUE DESEJA ALTERAR: ";
			cin >> lCpf;

			//Quando encontrar, começa o diálogo de obtenção de novos valores
			for (int i = 0; i < tamanho; i++)
			{
				if (cpf[i] == lCpf)
				{
					string alterar;
					

					//Nome
					cout << "\nNOME [NO BANCO]: " << nome[i];
					cout << "\nAlterar? [s, para sim] [n, para nao]: ";
					cin >> alterar;
					if (alterar == "s")
					{
						cout << "Altere para: ";
						char aux[100];
						cin.get(); //Limpa o buffer (se não o getline nao funciona)
						cin.getline(aux,100); //Para pegar frazes completas
						nome[i] = aux;
					}

					//Telefone
					cout << "\nTELEFONE [NO BANCO]: " << tel[i];
					cout << "\nAlterar? [s, para sim] [n, para nao]: ";
					cin >> alterar;
					if (alterar == "s")
					{
						cout << "Altere para: ";
						char aux[100];
						cin.get(); //Limpa o buffer (se não o getline nao funciona)
						cin.getline(aux, 100); //Para pegar frazes completas
						tel[i] = aux;
					}

					//Email
					cout << "\nEMAIL [NO BANCO]: " << email[i];
					cout << "\nAlterar? [s, para sim] [n, para nao]: ";
					cin >> alterar;
					if (alterar == "s")
					{
						cout << "Altere para: ";
						char aux[100];
						cin.get(); //Limpa o buffer (se não o getline nao funciona)
						cin.getline(aux, 100); //Para pegar frazes completas
						email[i] = aux;
					}

				}
			}

			//Agora salvando o banco
			ofstream out(banco_endereco, ios::trunc); //Abre limpando tudo
			bool deletado = false;
			if (out.is_open()) //enquando o banco estiver aberto para leitura
			{
				for (int i = 0; i < tamanho; i++)
				{
					if (codigo[i] != 0)
					{
						out << codigo[i] << ";" << nome[i] << ";" << cpf[i] << ";" << tel[i] << ";" << email[i] << ";" << endl;
					}
				}
			}
			out.close();

		}
		else if (menu_escolha == "4")
		{
			exit(0);
		}
		else
		{
			cout << "\nEscolha errada!";
		}

		//Pergunta para continuar
		cout << "\n\nDESEJA SAIR?\n";
		cout << "[s] Sim!\n";
		cout << "[n] Nao.\n\n";
		string aux;
		cin >> aux;
		sair = true;
		if (aux == "s")
		{
			sair = false;
		}
		

	} while (sair); //repete enquanto sair for falso

}
