#include <stdio.h>

int main()
{

    int idade;
    float batidas;

    scanf("%d", &idade);

    batidas = (float) idade*365.25*24*3600;

    printf("O CORACAO BATEU %.2f VEZES\n", batidas);



    return 0;
}