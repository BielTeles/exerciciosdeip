#include <stdio.h>

int main()
{
    float farenheit, celsius, milimetros, polegadas;

    scanf("%f%f", &farenheit, &polegadas);

    celsius = (5 * (farenheit - 32)) / 9;
    milimetros = polegadas * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f\n", celsius, milimetros);

    return 0;
}