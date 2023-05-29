#include <stdio.h>
#include <math.h>

int main()
{
    float altura, aresta, volume;
    double areaHexagono; 

    scanf("%f%f", &altura, &aresta);

    areaHexagono = ((3 * (aresta * aresta)) * sqrt(3)) / 2;

    volume = ((0.333334) * areaHexagono) * altura;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume);




    return 0;
}