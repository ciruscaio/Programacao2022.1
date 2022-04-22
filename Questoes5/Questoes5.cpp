#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{
    //SLIDERs
    //Construa um algoritmo que, tendo como dados de entrada quatro pontos quaisquer no plano (aos pares, pois cada par deve ser uma reta), 
    //PA1(x1,y1), PA2(x2,y2), PB1(x1,y1) e PB2(x1,y1) escreva a distância euclidiana entre eles. Verifique qual seguimento é maior.
    // d = raiz((x2-x1)² + (y2-y1)²)

    //(1,1) (2,2) (3,3) (4,4)

    //Variaveis
    double pa1_x1 = 1;
    double pa1_y1 = 1;

    double pa2_x2 = 2;
    double pa2_y2 = 2;

    double pb1_x1 = 3;
    double pb1_y1 = 3;

    double pb2_x2 = 4;
    double pb2_y2 = 4;

    double dA;
    double dB;

    //Calculando as distâncias
    dA = sqrt(pow((pa2_x2 - pa1_x1), 2) + pow((pa2_y2 - pa1_y1), 2));

    dB = sqrt(pow((pb2_x2 - pb1_x1), 2) + pow((pb2_y2 - pb1_y1), 2));


    //Imprimir na tela
    cout << "Disitancia A: " << dA;
    cout << "\nDisitancia B: " << dB;
    cout << "\n\n";

    //Verificando o maior
    if (dA > dB)
    {
        cout << "O maior segmento e o A";
    }
    else if(dB > dA) 
    {
        cout << "O maior segmento e o B";
    }
    else 
    {
        cout << "Os segmentos sao iguais";
    }


    

}
