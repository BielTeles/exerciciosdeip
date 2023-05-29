#include <stdio.h>

int main()
{

    int popAi, popBi, anos=1;
    double popA=0, popB=0;

    scanf("%d\n%d", &popAi, &popBi);

    if (popAi > popBi)
    {
        popA = popBi;
        popB = popAi;
    }

    else
    {
        popA = popAi;
        popB = popBi;
    }


    /*popB cresce 1,5%  ao ano e popA cresce 3% ao ano*/
    //printf("%d\n%d", popA, popB);


    while (popB >= popA)
    {

        popA = popA + popA * 0.03;
        popB = popB + popB * 0.015;
        anos++;
    }

    printf("ANOS = %d\n", anos);
    



    return 0;
}