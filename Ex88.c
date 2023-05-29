#include <stdio.h>

int main (){    

    int num, i;
    double somatorio=0, total=0;

    scanf("%d", &num);

    if (num > 0)
    {
        for (i = 1; i <= num; i++ )
        {
            somatorio = 1/(float)i;
            total = total + somatorio;
            //printf("%.6lf\n", somatorio);
        }
        printf("%.6lf\n", total);
    }

    else
        printf("Numero Invalido!");

    return 0;
}

//1,5+0,34+0,25+0,2+0,17+0,14+0,125+0,1+0,1= 2,925