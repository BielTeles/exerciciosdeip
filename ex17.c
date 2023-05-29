#include <stdio.h>

int main()
{
    int numero, n1,n2,n3;

    scanf("%d", &numero);

    n1 = numero/100;
    n2 = (numero - (n1*100))/10;
    n3 = numero - ((n1*100) + (n2*10));

    printf("%d%d%d", n3, n2, n1);

    return 0;
}