#include <stdio.h>

int main()
{
    int n, n1, n2, n3, A, B, C;
    char l1, l2, l3;
    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%c%c%c", &l1, &l2, &l3);

    if (n1 > n2 && n1 > n3)
    {
        C = n1;
        if (n2 > n3)
        {
            B = n2;
            A = n3;
        }
        else
        {
            B = n3;
            A = n2;
        }
    }
    if (n2 > n1 && n2 > n3)
    {
        C = n2;
        if (n1 > n3)
        {
            B = n1;
            A = n3;
        }
        else
        {
            B = n3;
            A = n1;
        }
    }
    if (n3 > n2 && n3 > n1)
    {
        C = n3;
        if (n2 > n1)
        {
            B = n2;
            A = n1;
        }
        else
        {
            B = n1;
            A = n2;
        }
    }

    if (l1 == 'A' && l2 == 'B' && l3 == 'C')
    {
        printf("%d %d %d", A, B, C);
    }

    if (l1 == 'A' && l2 == 'C' && l3 == 'B')
    {
        printf("%d %d %d", A, C, B);
    }

    if (l1 == 'B' && l2 == 'A' && l3 == 'C')
    {
        printf("%d %d %d", B, A, C);
    }

    if (l1 == 'B' && l2 == 'C' && l3 == 'A')
    {
        printf("%d %d %d", B, C, A);
    }

    if (l1 == 'C' && l2 == 'B' && l3 == 'A')
    {
        printf("%d %d %d", C, B, A);
    }

    if (l1 == 'C' && l2 == 'A' && l3 == 'B')
    {
        printf("%d %d %d", C, A, B);
    }

    return 0;
}