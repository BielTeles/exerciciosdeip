
/*Faça um programa que leia um número e verifique se ele é palíndromo. Um número é palíndromo
quando representa a mesma quantidade lido da esquerda para a direita e da direita para a esquerda. Neste
exercício o usuário irá informar números inteiros de no máximo 5 dígitos.


Entrada
Um número inteiro.


Saída
Se o número fornecido exceder 5 dígitos o programa deve imprimir a mensagem "NUMERO INVALIDO". Caso o número seja válido o programa deve imprimir a mensagem "PALINDROMO", caso o
número seja palíndromo, ou "NAO PALINDROMO"caso contrário.*/

#include <stdio.h>

int main()
{

    int num, aux, reverso;
    scanf("%d", &num);

    if (num > 99999)
    {
        printf("NUMERO INVALIDO");
    }

    else
    {
        aux = num;
        reverso = 0;

        while (aux != 0)
        {
            reverso = reverso * 10 + aux % 10;
            aux = aux / 10;
        }

        if (reverso == num)
            printf("PALINDROMO\n", num);
        else
            printf("NAO PALINDROMO\n", num);
    }

    return 0;
}