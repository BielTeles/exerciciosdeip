#include <stdio.h>

int main()
{

    float a,b,c,d,e,f, x, y;

    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);


    y=(f*a-d*c)/(a*e-d*b);
    x=(c-b*y)/a ;   

    // 0 = a * x + b * y - c
    // 0 = d * x + e * y - f



    printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f\n", x, y);

    return 0;
}