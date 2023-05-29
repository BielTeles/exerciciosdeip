#include <stdio.h>

int main()
{

    int conta;
    float consumo, valorConta;
    char tipo;

    scanf("%d %f %c", &conta, &consumo, &tipo);

    if (tipo == 'R')
    {
        valorConta = 5 + (consumo * 0.05);
        printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valorConta);
    }

    else if (tipo == 'C')
    {
        if (consumo <= 80)
        {
            printf("CONTA = %d\nVALOR DA CONTA = 500.00\n", conta);
        }

        else
        {
            valorConta = (500 + (consumo * 0.25)) - 20;
            printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valorConta);
        }
    }

    else if (tipo == 'I')
    {
        if (consumo <= 100)
        {
            printf("CONTA = %d\nVALOR DA CONTA = 800.00\n", conta);
        }

        else
        {
            valorConta = (800 + (consumo * 0.04)) - 4;
            printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, valorConta);
        }
    }

    return 0;
}