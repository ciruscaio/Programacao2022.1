#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int a = 5;
	int b = 2;
	int c = 3;

	int maior;
	int menor;

	//reset
	maior = menor = a;


	//tratando igualdades
	if ((a == b) || (a==c) || (b==c))
	{
		cout << "Atenção existem números iguais;\n\n";
	}
	else 
	{
		//Maior
		if (a > b) 
		{
			maior = a;
		}
		else {
			maior = b;
		}
		if (c > maior)
		{
			maior = c;
		}

		//Menor
		if (a < b)
		{
			menor = a;
		}
		else {
			menor = b;
		}
		if (c < menor)
		{
			menor = c;
		}


		


		cout << "Maior: " << maior << "\n\n";
		cout << "Menor: " << menor;

	}


	
}
