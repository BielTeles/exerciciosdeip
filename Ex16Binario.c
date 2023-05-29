#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (0 < n > 255)
    printf("Numero invalido!");

    else
    {
        printf("%d", n/128%2);
        printf("%d", n/64%2);
        printf("%d", n/32%2);
        printf("%d", n/16%2);
        printf("%d", n/8%2);
        printf("%d", n/4%2);
        printf("%d", n/2%2);
        printf("%d\n", n/1%2);

    }


    return 0; 
}