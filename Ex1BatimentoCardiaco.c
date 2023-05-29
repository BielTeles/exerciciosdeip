#include <stdio.h>

int main()
{

    int anos;
    float batimentosPorAno, batimentosVida;

    scanf("%d", &anos);

    batimentosPorAno = 86.400 * 365.25;

    batimentosVida = (float)anos * batimentosPorAno;

    printf("O CORACAO BATEU %.2f VEZES\n", batimentosVida);

    return 0;
}