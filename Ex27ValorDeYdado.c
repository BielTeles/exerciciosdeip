#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    if (x < 1)
        printf("Y = %d\n", x);
    
    else if (x == 1)
        printf("Y = 0\n");

    else if (x > 1)
        printf("Y = %d\n", x * x);


    return 0;
}