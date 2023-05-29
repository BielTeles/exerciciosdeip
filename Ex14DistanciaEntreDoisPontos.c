#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2, distancia, l1, l2;

    scanf("%f\n%f\n%f\n%f", &x1, &y1, &x2, &y2);

    l1 =  x2 - x1;
    l2 = y2 - y1;
    

    distancia = sqrt(pow(l1,2) + pow(l2,2));

    printf("A DISTANCIA ENTRE A e B = %.2f\n", distancia);


    return 0;
}