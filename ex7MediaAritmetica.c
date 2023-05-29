#include <stdio.h>

int main()
{
    int a, b;
    float media;

    scanf("%d%d", &a,&b);

    media = ((float)a + (float)b)/2;

    printf("%.3f\n", media);



    return 0;
}