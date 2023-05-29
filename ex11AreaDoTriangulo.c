#include <stdio.h>
#include <math.h>



int main()
{

    float l1, l2, l3, areaTriangulo, t, t1;

    scanf("%f\n%f\n%f", &l1, &l2, &l3);

    t = (l1 + l2 + l3) / 2;

    t1 = (t * ((t - l1) * (t - l2) * (t - l3)));

    areaTriangulo = sqrt(t1);

    printf("A AREA DO TRIANGULO E = %.2f\n", areaTriangulo);

    return 0;
}