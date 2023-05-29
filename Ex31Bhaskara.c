#include <stdio.h>
#include <math.h>


int main()
{

    float A, B, C, raiz1, raiz2; // declarei minhas variaveis
    float delta;


    scanf("%f%f%f", &A, &B,&C);                  // lendo a entrada para o valor de A, B e C

    delta = ((B * B) - 4 * (A * C)); // calculando o valor de delta

    //printf("O VALOR DE DELTA E = %.2f\n", delta); // imprimindo o valor de delta

    if ( delta == 0)
    {
        raiz1 = ((B * (1-2)) + sqrt(delta))/ (2 * A);
        printf("RAIZ UNICA\nX1 = %.2f\n", raiz1);
    }

    else if (delta > 0)
    {
        raiz1 = ((B * (1-2)) + sqrt(delta)) / (2 * A);
        raiz2 = ((B * (1-2)) - sqrt(delta)) / (2 * A);
        printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", raiz1, raiz2);
    }

    else
    {
        printf("RAIZES IMAGINARIAS\n");
    }


    return 0;
}