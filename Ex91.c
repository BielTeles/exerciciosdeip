#include <stdio.h>

int main()
{

    int num, i;
    double fatorial = 1, calc = 0, n;

    scanf("%d", &num);
    n = num;

    if (num != 0)
    {

        for (i = 1; i < num; i++)
        {

            calc = n * (num - i);
            n = calc;
            // fatorial = fatorial * n;

            // printf("calc=%.0lf\nfatorial=%.0lf\n", calc, n); // depuraçao
        }

        printf("%d! = %.lf\n", num, n);
    }

    else if (num < 0)
    {

        for (i = -1; i < num; i++)
        {

            calc = n * (num + i);
            n = calc;
            // fatorial = fatorial * n;

            // printf("calc=%.0lf\nfatorial=%.0lf\n", calc, n); // depuraçao
        }

        printf("%d! = %.lf\n", num, n);
    }

    else
    {
        printf("0! = 1\n");
    }

    return 0;
}