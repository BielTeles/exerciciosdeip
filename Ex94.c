#include <stdio.h>

int main()
{
    unsigned int n, i;
    scanf("%d", &n);
    
    double numeros[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    int comprimentoMaximo = 1; // Comprimento inicial do segmento crescente
    int comprimentoAtual = 1;  // Comprimento atual do segmento crescente

    for (i = 1; i < n; i++)
    {
        if (numeros[i] > numeros[i - 1])
        {
            comprimentoAtual++; // Aumenta o comprimento atual do segmento crescente
        }
        else
        {
            if (comprimentoAtual > comprimentoMaximo)
            {
                comprimentoMaximo = comprimentoAtual; // Atualiza o comprimento máximo
            }
            comprimentoAtual = 1; // Reinicia o comprimento atual
        }
    }

    if (comprimentoAtual > comprimentoMaximo)
    {
        comprimentoMaximo = comprimentoAtual; // Verifica o comprimento final caso seja o maior
    }

    printf("O comprimento do segmento crescente maximo e: %d\n", comprimentoMaximo);

    return 0;
}
