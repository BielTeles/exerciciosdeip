#include <stdio.h>
#include <math.h>

int main()
{
    float fabricPrice, distributorPercent, taxPercent, carPrice; // comecei a utilizar nomes em ingles para poder acostumar com o padrão universal
    scanf("%f%f%f", &fabricPrice, &distributorPercent, &taxPercent);

    carPrice = fabricPrice + (fabricPrice * (distributorPercent/100)) + (fabricPrice * (taxPercent/100));





    printf("O VALOR DO CARRO E = %.2f\n", carPrice);

    return 0;
}