#include <iostream>

using namespace std;

int main()
{

    int v[100];

	//v[0] = 5;
	//v[1] = 4;
	//v[2] = 7;
	//v[3] = 0;
	//v[4] = 2;

	//cout << v[4];

	//Como saber o tamanho do vetor dinamicamente
	int tamanho = sizeof(v) / sizeof(int);


	for (int i = 0; i < tamanho; i++)
	{
		int x;

		cout << "Digite o proximo n: ";
		cin >> x;

		v[i] = x;

		//cout << v[i] << "\n";
	}



}
