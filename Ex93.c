#include <stdio.h>
#include <math.h>

int main()
{
    double investimentoInicial, taxaDeJuros, total, taxaDeJurosReal,parcial, soma, soma1, renda;
    int meses, i;

    scanf("%lf %lf %d", &investimentoInicial, &taxaDeJuros, &meses);
    
    //taxaDeJurosReal = taxaDeJuros/100;
    
    
    for (i = 1; i < meses+1; i++)
    {
        soma = pow((1 + taxaDeJuros), i);
        soma1 = investimentoInicial * soma;
        renda += soma - taxaDeJuros;
        printf("a*(1+r)^%d = %.2lf, renda: %.2lf\nSoma = %.2lf\n", i, soma1, renda, soma);
    }
    
    
    
    /*for(i = 0; i < meses; i++)
    {
        parcial = pow(investimentoInicial*(1 + taxaDeJurosReal), i);
        total = parcial;

        printf("Parcial = %.2lf\n Total = %.2lf\n", parcial, total);
    }*/





    return 0;
}