#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int d = 29;
	int m = 2;
	int a = 2012;

	bool valido = false;

	//Verificando inicialmente se as datas estao em numeros validos
	if (
		(d >= 1 && d <= 31) //testando os dias
		&& (m >= 1 && m <= 12) //testando os meses
		&& (a >= 1 && a <= 2022) //testando os meses
		)
	{

		//Teste se data/mes correto
		switch (m)
		{
		case 1:
			if (d <= 31)
			{
				valido = true;
			}
			break;

		case 2:
			//Teste de bi
			if (a % 4 == 0)
			{
				if (d <= 29) {
					valido = true;
				}
			}
			else if (d <= 28)
			{
				valido = true;
			}
			break;

		case 3:
			if (d <= 31)
			{
				valido = true;
			}
			break;

		case 4:
			if (d <= 30)
			{
				valido = true;
			}
			break;

		case 5:
			if (d <= 31)
			{
				valido = true;
			}
			break;

		case 6:
			if (d <= 30)
			{
				valido = true;
			}
			break;

		case 7:
			if (d <= 31)
			{
				valido = true;
			}
			break;

		case 8:
			if (d <= 31)
			{
				valido = true;
			}
			break;

		case 9:
			if (d <= 30)
			{
				valido = true;
			}
			break;

		case 10:
			if (d <= 31)
			{
				valido = true;
			}
			break;

		case 11:
			if (d <= 30)
			{
				valido = true;
			}
			break;

		case 12:
			if (d <= 31)
			{
				valido = true;
			}
			break;

		}
	}


	//Imprime
	if (valido)
	{
		cout << "A data " << d << "/" << m << "/" << a << " e valida!";
	}
	else
	{
		cout << "A data " << d << "/" << m << "/" << a << " NAO e valida!";
	}
}