#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{
	//FOR
	//Característica: ele precisa de um início e fim, com um step
	//for (int i = 1; i < 100; i++)
	//{
	//	cout << (i) << "o: " << i << "\n";
	//}

	//WHILE
	//Caracterítica: não precisa de controle do início e fim
	int i = 0;
	//while (i < 100)
	//{
	//	cout << (i+1) << "o: " << i << "\n";

	//	i++;
	//}

	//DO..WHILE
	i = 0;
	do 
	{
		cout << (i + 1) << "o: " << i << "\n";

		i++;
	} while (i < 100);
}
