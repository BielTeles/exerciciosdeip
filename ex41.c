#include <stdio.h>

int main()
{

    // Declaração das variáveis

    int vetor[10000];

    int n, m, consulta, i, j, achei;

    // Entrada

    scanf("%d", &n);

    // Repetidor

    for (i = 0; i < n; i++)
    {

        scanf("%d", &vetor);
    }

    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {

        scanf("%d", &consulta);

        achei = 0;

        for (j = 0; j < n; j++)

        {

            if (consulta == vetor[j])

            {

                achei = 1;

                j = n;
            }
        }

        if (achei)

        {

            printf("ACHEI\n");
        }

        else

        {

            printf("NAO ACHEI\n");
        }
    }
}