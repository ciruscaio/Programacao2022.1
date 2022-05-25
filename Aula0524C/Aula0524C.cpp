#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{
   //3.4.	Uma chave é, na verdade, uma combinação numérica. 
   // Ela funciona como na figura que segue. 
   // Um sistema deve criar combinações diferentes de alturas, 
   // a partir do nível zero do pescoço da chave (como na figura). 
   // A maior altura é 9 e a menor é 0, em cinco posições diferentes. 
   // Crie o maior número de combinações possíveis (e imprima na tela) excetuando:
	//	•	00000
	//	•	99999
	//	•	Não pode haver combinações onde exista consecutivamente 00 ou 99
	//	•	As posições 1 e 5 não podem ser 9

	int cont = 0;
	bool imprimir;

	for (int i = 0; i < 10; i++) //Primeira posição
	{
		for (int j = 0; j < 10; j++) //Segunda posição
		{
			for (int k = 0; k < 10; k++) //Terceira posição
			{
				for (int l = 0; l < 10; l++) //Quarta posição
				{
					for (int m = 0; m < 10; m++) //Quinta posição
					{
						//Análises das combinações -------------
						imprimir = true;

						//Não pode ser tudo zero (00000)
						if (i == 0 && j == 0 && k == 0 && l == 0 && m == 0)
						{
							imprimir = false;
						}
						//Não pode ser tudo nove (99999)
						if (i == 9 && j == 9 && k == 9 && l == 9 && m == 9)
						{
							imprimir = false;
						}
						//Nem a primeira nem a quinta podem ser 9
						if (i == 9)
						{
							imprimir = false;
						}
						if (m == 9)
						{
							imprimir = false;
						}
						//Não pode consecutivamente 00 ou 99
						if ((i == 0 && j == 0) || (j == 0 && k == 0) || (k == 0 && l == 0) || (l == 0 && m == 0))
						{
							imprimir = false;
						}
						if ((i == 9 && j == 9) || (j == 9 && k == 9) || (k == 9 && l == 9) || (l == 9 && m == 9))
						{
							imprimir = false;
						}




						//Imprimir -----------------------------
						if (imprimir == true) 
						{
							cout << i << j << k << l << m << "\n";

							cont++;
						}

						
					}
				}
			}
		}
	}

	cout << "\n\n\n" << cont;




}
