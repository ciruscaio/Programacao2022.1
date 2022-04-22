#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{
    //1.11.	Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e 
    // a, b, c, são quaisquer valores reais e os escreva. A seguir: 
    //  Se i = 1 escrever os três valores a, b, c em ordem crescente.
    //  Se i = 2 escrever os três valores a, b, c em ordem decrescente.
    //  Se i = 3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.

    //Variaveis
    int i;
    double a;
    double b;
    double c;
    double maior;
    double menor;
    double meio;

    //Coletar
    cout << "MENU\n\n Digite 1, para ordem crescente;\n Digite 2, para ordem decrescente;\n Digite 3, para maior entre os dois;\n\n";
    cin >> i;

    cout << "Digite A: ";
    cin >> a;

    cout << "Digite B: ";
    cin >> b;

    cout << "Digite C: ";
    cin >> c;

    cout << "\n\n\nRESULTADO\n\n";

    //Maior
    if (a >= b)
    {
        maior = a;
    }
    else
    {
        maior = b;
    }
    if (c >= maior)
    {
        maior = c;
    }
  
    //Menor
    if (a <= b)
    {
        menor = a;
    }
    else
    {
        menor = b;
    }
    if (c <= menor)
    {
        menor = c;
    }

    //Meio
    if (a != maior && a!= menor)
    {
        meio = a;
    }
    else if (b != maior && b != menor)
    {
        meio = b;
    }
    else 
    {
        meio = c;
    }


    //Imprimindo resultado na tela
    switch (i)
    {
    case 1: //crescente
        cout << "Crescente: " << menor << ", " << meio << ", " << maior;
        break;
    case 2: //crescente
        cout << "Derescente: " << maior << ", " << meio << ", " << menor;
        break;
    case 3: //crescente
        cout << "Crescente: " << menor << ", " << maior << ", " << meio;
        break;
    default:
        cout << "Opcao selecionada nao existe!";
        break;
    }
}
