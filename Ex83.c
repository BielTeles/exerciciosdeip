#include <stdio.h>

int main()
{

    int entradas, i;

    scanf("%d", &entradas);

    int pessoas[entradas];
    float popular[entradas], geral[entradas], arquibancada[entradas], cadeiras[entradas], total, p1[entradas], p2[entradas], p3[entradas], p4[entradas];


    for (i = 0; i < entradas; i++ )
        {
            scanf("%d %f %f %f %f", &pessoas[i], &popular[i], &geral[i], arquibancada[i], cadeiras[i]);
            
            p1[i] = (((float)pessoas[i] * (popular[i]/100)) * 1);
            p2[i] = (((float)pessoas[i] * (geral[i]/100)) * 5);
            p3[i] = (((float)pessoas[i] * (arquibancada[i]/100)) * 10);
            p4[i] = (((float)pessoas[i] * (cadeiras[i]/100)) * 20);

            printf("%f\n%f\n%f\n%f", p1[i],p2[i],p3[i],p4[i]);

        }





    return 0;

}