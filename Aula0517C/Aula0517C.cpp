//#include <iostream>
//
//using namespace std;
//
//int soma(int x, int y)
//{
//	int s = x + y;
//
//	return s;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	cout << "A: ";
//	cin >> a;
//
//	cout << "\n\nB: ";
//	cin >> b;
//
//	cout << "\n\n RESULTADO: ";
//	
//	int x = soma(a, b);
//
//	cout << x;
//}
//
//
//

#include <iostream>
#include <string>

int main()
{
	using namespace std;

	//Pergunta a) "a" � diferente de 3 ou (ao mesmo tempo) b � menor que "a" ou (ao mesmo tempo) "c" � igual a 5?

	int a = 9;
	int b = 8;
	int c = 20;
	int d = 02;



	if (((a != 3) || (a <= b) || (c == 5)))
	{
		cout << "verdadeiro";
	}
	else
	{
		cout << "falso";
	}


	//Pergunta b) "d" � maior que 8 e (ao mesmo tempo) c � igual a "a" ou (ao mesmo tempo) a � maior ou igual a 10?

	if ((d >= 8 && c == a) || (a >= 10))
	{
		cout << "verdadeiro";
	}
	else
	{
		cout << "falso";
	}

	//Pergunta c) "d" � menor que 20 e (ao mesmo tempo) maior que "c" e (ao mesmo tempo) "c" � maior que 19?

	if (d <= 20 && 20 >= c && c >= 19)
	{
		cout << "verdadeiro";
	}
	else
	{
		cout << "falso";
	}

	//Pergunta d) "c" � igual a 19 ou (ao mesmo tempo) "d" � menor ou igual a 15 e (n�o ao mesmo tempo) "a"
	//� maior ou igual que 5 e (ao mesmo tempo) "b" � diferente de 9 ou (n�o ao mesmo tempo) "a" � menor que 5?

	if (((c == 19 || d <= 15) && (a >= 5 && b != 9) || (a <= 5)))
	{
		cout << "verdadeiro";
	}
	else
	{
		cout << "falso";
	}

	//Pergunta e) "a" � igual a 3 ou (ao mesmo tempo) "b" � maior que 10 ou (ao mesmo tempo) "d" � igual a 8?

	if (a == 3 || b >= 10 || d != 8)
	{
		cout << "verdadeiro";
	}
	else
	{
		cout << "falso";
	}

}