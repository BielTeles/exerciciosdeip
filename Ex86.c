#include <stdio.h>
#include <math.h>

int main()
{

    int num1, num2, i, temp;

    scanf("%d %d", &num1, &num2);
    temp = num1;

    if (num1 % 2 == 0)
    {
        printf("%d ", num1);

        for (i = 0; i < num2 - 1; ++i)
        {
            if (i < num2)
            {
                printf("%d ", temp + 2);
                temp = temp + 2;
            }

            else
                printf("\n");
        }
    }
    else
        printf("O PRIMEIRO NUMERO NAO E PAR\n");

    return 0;
}