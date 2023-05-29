#include <stdio.h>

int main()
{

    int entrada, i;
    double conversao, fhrt;

    scanf("%d", &entrada);

    for (i = 0; i < entrada; i++)
    {

        scanf("%lf", &fhrt);

        conversao = (5 * (fhrt - 32)) / 9.0;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fhrt, conversao);
    }

    return 0;
}