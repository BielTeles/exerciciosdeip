#include <stdio.h>

int main()
{

    float nota;

    scanf("%f", &nota);

    if ( 0 <= nota && nota < 6.0)
    {
        printf("NOTA = %.1f CONCEITO = D\n", nota);
    }
        
    else if ( 6.0 <= nota && nota < 7.5)
    {
        printf("NOTA = %.1f CONCEITO = C\n", nota);
    }
        

    else if ( 7.5 <= nota && nota < 9.0)
    {
        printf("NOTA = %.1f CONCEITO = B\n", nota);
    }
        
    
    else if ( 9.0 <= nota && nota < 10.0)
    {
        printf("NOTA = %.1f CONCEITO = A\n", nota);
    }
        


    return 0;
}