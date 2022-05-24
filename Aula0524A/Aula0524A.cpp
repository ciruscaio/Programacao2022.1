#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{
	//3.9.Escreva um trecho de código que, dados o comprimento e a largura do pé, 
	// classifica - o em uma das seguintes categorias
	// (deve haver uma variável para coletar a largura e o comprimento e a 
	// classificação deve ser impressa na tela) :
	//	•	Largura < 7 cm e comprimento < 22 cm : pé infantil
	//	•	Largura 7 - 10 cm e comprimento 22 - 25 cm : pé feminino
	//	•	Largura 9 - 15 cm e comprimento 25 - 32 cm : pé masculino
	//	•	Outras ocorrências : pé não classificável

	#pragma region TESTES
		//int a = 1;
		//int b = 2;
		//int c = 3;

		//cout << "a>b: " << (a > b); //0
		//cout << "\nb<c: " << (b < c); //1
		//cout << "\na > b || b < c: " << (a > b || b < c); //??

		//0 = false, falso, não, negativo
		//1 = true, verdeiro, sim, positivo
	#pragma endregion

	int l = 7;
	int c = 25;
	bool classificavel = false;

	if (l < 7 && c < 22) {
		//l = 1,2,3,4,5,6
		//c = 1, ..., 21
		cout << "Pe infantil\n";
		classificavel = true;
	}

	if ((l >= 7 && l <= 10) && (c >= 22 && c <= 25)) {
		//l = 7,8,9,10
		//c = 22,23,24,25
		cout << "Pe feminino\n";
		classificavel = true;
	}

	if ((l >= 9 && l <= 15) && (c >= 25 && c <= 32)) {
		//l = 9,10,11,12,13,14,15
		//c = 25,26,27,28,29,30,31,32
		cout << "Pe masculino\n";
		classificavel = true;
	}

	if (classificavel == false) {
		cout << "Nao classificavel\n";
	}

}
