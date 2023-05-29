#include <stdio.h>
#include <math.h>

int main(){

    int num, i, quadrado;

    scanf("%d", &num);

    if (num > 5 && num < 2000)
    {
        if (num % 2 == 0)
        {
            for(i = 2; i <= num;)
            {
                quadrado = pow(i, 2);
                printf("%d^2 = %d\n",i, quadrado);
                i = i + 2;
            }
        }
        else
        {
            for (i = 2; i < num;)
            {
                quadrado = pow(i, 2);
                printf("%d^2 = %d\n",i, quadrado);
                i = i + 2;
            }
        }
    }
    else
        return 0;






    return 0;
}