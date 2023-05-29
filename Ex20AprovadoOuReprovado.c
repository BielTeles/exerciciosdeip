#include <stdio.h>

int main()
{
    double nota1, nota2, nota3, media;

    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if( media >= 6)
    printf("MEDIA = %.2lf\nAPROVADO\n", media);

    else
    printf("MEDIA = %.2lf\nREPROVADO\n", media);



    return 0;
}