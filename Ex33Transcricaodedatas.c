#include <stdio.h>

//  28052001

int descobrirDias(int num)
{
    int dia, dia1, dia2;

    dia1 = num / 10000000;                // 2
    dia2 = (num / 1000000) - (dia1 * 10); // 8

    dia = dia1 * 10 + dia2;

    return dia;
}

int descobrirMes(int num)
{
    int mes, tempA;

    tempA = descobrirDias(num); // 28

    mes = (num - (tempA * 1000000)) / 10000;

    return mes;
}

int descobrirAno(int num)
{
    int ano, tempA, tempB, tempC;

    tempA = descobrirDias(num); // 28
    tempB = descobrirMes(num);  // 5
    tempC = tempA * 1000000 + tempB * 10000;

    ano = num - tempC;

    return ano;
}

int main()
{
    int num, ano, dia, mes;

    scanf("%d", &num);

    dia = descobrirDias(num);
    // printf("%d\n", dia);

    mes = descobrirMes(num);
    // printf("%d\n", mes);

    ano = descobrirAno(num);
    // printf("%d\n", ano);

    if (mes == 1)
    {
        if (dia < 1 || dia > 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de janeiro de %d\n", dia, ano);
    }

    else if (mes == 2)
    {
        if (dia < 1 || dia > 28)
        {
            printf("Data invalida\n");
        }
        else
        {
            printf("%d de fevereiro de %d\n", dia, ano);
        }
    }

    else if (mes == 3)
    {
        if (dia <= 0 || dia > 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de março de %d\n", dia, ano);
    }

    else if (mes == 4)
    {
        if (dia <= 0 || dia >= 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de abril de %d\n", dia, ano);
    }

    else if (mes == 5)
    {
        if (dia <= 0 || dia > 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de maio de %d\n", dia, ano);
    }

    else if (mes == 6)
    {
        if (dia <= 0 || dia >= 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de junho de %d\n", dia, ano);
    }

    else if (mes == 7)
    {
        if (dia <= 0 || dia > 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de julho de %d\n", dia, ano);
    }

    else if (mes == 8)
    {
        if (dia <= 0 || dia > 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de agosto de %d\n", dia, ano);
        ("%d de agosto de %d\n", dia, ano);
    }

    else if (mes == 9)
    {
        if (dia <= 0 || dia >= 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de setembro de %d\n", dia, ano);
    }
    else if (mes == 10)
    {
        if (dia <= 0 || dia > 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de outubro de %d\n", dia, ano);
    }

    else if (mes == 11)
    {
        if (dia <= 0 || dia >= 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de novembro de %d\n", dia, ano);
    }

    else if (mes == 12)
    {
        if (dia <= 0 || dia > 31)
        {
            printf("Data invalida!\n");
        }

        else
            printf("%d de dezembro de %d\n", dia, ano);
    }

    else
    {
        printf("Data invalida\n");
    }

    return 0;
}