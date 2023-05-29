#include <stdio.h>

int main(){


    int a,r,n, i, somaPA=0, temp=0;

    scanf("%d %d %d", &a, &r, &n);



    for(i = 0; i <= n - 1; i++)
    {
       temp = a + (i * r);
       somaPA += temp;
       temp = 0;
       //printf("temp = %d\nSomaPA = %d\n", temp, somaPA);
    }

    printf("%d", somaPA);

    return 0;
}