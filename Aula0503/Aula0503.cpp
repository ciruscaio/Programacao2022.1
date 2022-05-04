#include <iostream>

using namespace std;

int main()
{
	//Imprimir na tela de 1 até 100
	cout << "IMPRIMINDO COM UM FOR -------------------------------- \n\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\n";
	}

	cout << "\n\nIMPRIMINDO COM UM DO..WHILE -------------------------------- \n\n";

	int x = 1;
	do 
	{
		cout << x << "\n";
		
		x++;
	} while (x <= 10);
	

}

