#include <stdio.h>
#include <stdlib.h>

int calcAreaTrapezio(int a, int b, int c)
{
    float area;

    area = (((float)a + (float)b) * c) / 2;

    return area;
}


int absoluto(int n)
{
  if(n<0)
    return -n;

else
return n;
}

// int calcAreaTriangulo(int a, int b, int c)

/*
• |b−c| < a < b+c;
• |a−c| < b < a+c;
• |a−b| < c < a+b;
*/

int main()
{

    float a, b, c, area, perimetro, x, y, z, x1, y1, z1, ab1, ab2, ab3;

    scanf("%f%f%f", &a, &b, &c);

    x = b - c;
    y = c - a;
    z = b - a;

    x1 = b + c;
    y1 = a + c;
    z1 = a + b;

    ab1 = fabs(x);
    ab2 = fabs(y);
    ab3 = fabs(z);

    //printf("x %f\ny %f\n\z %f\nx1 %f\ny1 %f\nz1 %f\nab1 %f\nab2 %f\nab3 %f\n", x, y, z, x1, y1, z1, ab1, ab2, ab3); // depuração, numeros com modulo estao pegando valor lixo

    if (ab1 < a && a < x1)

    {
        if (ab2 < b && a < y1)
        {
            if (ab3 < c && c < z1) // triangulo
            {
                perimetro = a + b + c; // perimetro triangulo
                printf("Perimetro = %.1f\n", perimetro);
            }
            else
            {
                area = calcAreaTrapezio(a, b, c);
                printf("Area = %.1f\n", area);
            }
        }
        else
        {
            area = calcAreaTrapezio(a, b, c);
            printf("Area = %.1f\n", area);
        }
    }
    else
    {
        area = calcAreaTrapezio(a, b, c);
        printf("Area = %.1f\n", area);
    }

    return 0;
}
