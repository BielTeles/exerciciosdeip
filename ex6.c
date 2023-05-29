#include <stdio.h>

int main()
{
    float a,b,c,d,determinante;

    scanf("%f\n%f\n%f\n%f", &a, &b, &c, &d);

    determinante = (a * d) - (b * c);

    printf("O VALOR DO DETERMINANTE E = %.2f\n", determinante);




    return 0;
}