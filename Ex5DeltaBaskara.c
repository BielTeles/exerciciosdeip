#include <stdio.h>

int main()
{

    int A, B, C; // declarei minhas variaveis
    float delta;


    scanf("%d%d%d", &A, &B, &C);                  // lendo a entrada para o valor de A, B e C

    delta = ((B * B) - 4 * (A * C)); // calculando o valor de delta

    printf("O VALOR DE DELTA E = %.2f\n", delta); // imprimindo o valor de delta

    return 0;
}