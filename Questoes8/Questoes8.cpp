#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{
    //3.5.	Escreva um trecho de código que, dada a idade de um nadador, classifica-o em uma das seguintes categorias 
    // (deve haver uma variável para coletar a idade e a classificação deve ser impressa na tela):
    //    • Infantil A = 5 - 7 anos
    //    •	Infantil B = 8 - 10 anos
    //    •	Juvenil A = 11 - 13 anos
    //    •	Juvenil B = 14 - 17 anos
    //    •	Adulto = 18 anos ou mais

    // Variaveis
    int i = 30;

    //Classificacao
    if (i < 5)
    {
        cout << "Idade nao classificavel";
    }
    else if (i >= 5 && i <= 7) 
    {
        cout << "Infantil A";
    }
    else if (i >= 8 && i <= 10)
    {
        cout << "Infantil B";
    }
    else if (i >= 11 && i <= 13)
    {
        cout << "Juvenil A";
    }
    else if (i >= 14 && i <= 17)
    {
        cout << "Juvenil B";
    }
    else 
    {
        cout << "Adulto";
    }

}
