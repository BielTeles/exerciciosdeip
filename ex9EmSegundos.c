#include <stdio.h>

int main()
{

    int horas, minutos, segundos, segundosConvertido;

    scanf("%d%d%d", &horas, &minutos, &segundos);

    segundosConvertido = ((horas * 3600) + (minutos * 60) + segundos);

    printf("O TEMPO EM SEGUNDOS E = %d\n", segundosConvertido);







    return 0;
}