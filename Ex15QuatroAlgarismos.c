#include <stdio.h>
#include <math.h>

int main()
{
    int num, numeroNovo, x, y, z;

    scanf("%d", &num);

    x = num / 100;
    y = ((num / 10) - (x * 10));
    z = (num - ((x * 100) + (y * 10)));


    //printf("%d\n%d\n%d", x, y, z);

    numeroNovo = (x + (3 * y) + (5 * z)) % 7;

    printf("O NOVO NUMERO E = %d%d\n", num, numeroNovo);
    return 0;
}