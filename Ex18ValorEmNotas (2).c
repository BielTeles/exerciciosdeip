#include <stdio.h>

int main()
{
    int valorReais, notas100, notas50, notas10, moedas1, tempA;

    scanf("%d", &valorReais);

    notas100 = valorReais / 100;
    notas50 = (valorReais - (notas100 * 100)) / 50; 
    tempA = (valorReais - (notas100 * 100)) - (notas50 * 50);
    notas10 = tempA / 10;
    moedas1 = valorReais - (notas100 * 100 + notas50 * 50 + notas10 * 10);

    // printf("%d", moedas1); testes apenas

    printf("NOTAS DE 100 = %d\n", notas100);
    printf("NOTAS DE 50 = %d\n", notas50);
    printf("NOTAS DE 10 = %d\n", notas10);
    printf("MOEDAS DE 1 = %d\n", moedas1);
    return 0;
}