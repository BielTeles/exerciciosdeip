#include <stdio.h>





int main(){

    int entrada, i, pessoas, jogo[9999] = {0};
    double popular, geral, arquibancada, cadeiras, total[9999], p1, p2, p3, p4;

    scanf("%d", &entrada);

    for (i = 0; i < entrada; i++)
    {
        //zeraP(p1,p2,p3,p4,pessoas,popular, geral, arquibancada,cadeiras);

        scanf("%d %lf %lf %lf %lf", &pessoas, &popular, &geral, &arquibancada, &cadeiras);
        
        p1 = ((double)pessoas * (popular/100)) * 1;
        p2 = ((double)pessoas * (geral/100)) * 5;
        p3 = ((double)pessoas * (arquibancada/100)) * 10;
        p4 = ((double)pessoas * (cadeiras/100)) * 20;
        total[i] = p1 + p2 + p3 + p4;
        if (i == 0)
        {
            jogo[0] = 1;
        }
        else 
        {
            jogo[i] = jogo[i-1] + 1;
        }
    }
    for (i = 0; i < entrada; i++)
    {
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", jogo[i], total[i]);
    }

    //printf("total = %.2f", total);



    return 0;
}