#include <iostream>
using namespace std;

int main()
{
	//Usando sua data de nascimento escrita na resposta da pergunta 1 (ou irá perder a questão).
	//Considere que a = DD, b = MM, c = AA(dois primeiros dígitos do ano) e d = (dois últimos dígitos do ano).
	//Crie um código que avalia cada uma da expressão lógica que segue(o código deve dizer verdadeiro ou falso para cada pergunta).

	int a = 25;
	int b = 05;
	int c = 19;
	int d = 84;
	
	//Pergunta a) "a" é diferente de 3 ou(ao mesmo tempo) "b" é menor que "a" ou(ao mesmo tempo) "c" é igual a 5 ?
	if (a!=3 || b < a || c == 5)
	{
		cout  << "a) verdadeiro\n";
	}
	else 
	{
		cout << "a) falso\n";
	}
	
	//Pergunta b) "d" é maior que 8 e(ao mesmo tempo) c é igual a "a" ou(ao mesmo tempo) a é maior ou igual a 10 ?
	if (d > 8 && c == a || a>=10)
	{
		cout << "b) verdadeiro\n";
	}
	else
	{
		cout << "b) falso\n";
	}

	//Pergunta c) "d" é menor que 20 e(ao mesmo tempo) maior que "c" e(ao mesmo tempo) "c" é maior que 19 ?
	if (d < 20 && d > c && c >19)
	{
		cout << "c) verdadeiro\n";
	}
	else
	{
		cout << "c) falso\n";
	}

	//Pergunta d) "c" é igual a 19 ou(ao mesmo tempo) "d" é menor ou igual a 15   e(não ao mesmo tempo) "a" é maior ou igual que 5 e(ao mesmo tempo) "b" é diferente de 9   ou(não ao mesmo tempo) "a" é menor que 5 ?
	if ((c == 19 || d <= 15) && (a>=5 && b!=9) || (a<5))
	{
		cout << "d) verdadeiro\n";
	}
	else
	{
		cout << "d) falso\n";
	}

	//Pergunta e) "a" é igual a 3 ou(ao mesmo tempo) "b" é maior que 10 ou(ao mesmo tempo)  "d" é igual a 8 ?
	if (a == 3 || b > 10 || d == 8)
	{
		cout << "e) verdadeiro\n";
	}
	else
	{
		cout << "e) falso\n";
	}
}