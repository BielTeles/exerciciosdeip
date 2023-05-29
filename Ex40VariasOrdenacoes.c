#include <stdio.h>

int main()
{
    int i;
    float a,b,c;

    scanf("%d%f%f%f", &i, &a,&b,&c);

    if (i == 1)
    {
        if (a < b && a < c)
        {
            printf("%.2f %.2f %.2f\n", a,b,c);
        }

        else if (a < c && a < b)
        {
            printf("%.2f %.2f %.2f\n", a,c,b);
        }

        else if (b < a && b < c)
        {
            printf("%.2f %.2f %.2f\n", b,a,c);
        }

        else if (b < c && b < a)
        {
            printf("%.2f %.2f %.2f\n", b,c,a);
        }

        else if (c < a && c < b)
        {
            printf("%.2f %.2f %.2f\n", c,a,b);
        }

        else if (c < b && c < a)
        {
            printf("%.2f %.2f %.2f\n", c,b,a);
        }

        else 
        {
            printf("%.2f %.2f %.2f\n", a,b,c);
        }
    }

    else if (i == 2)
    {
    if (a > b && a > c)
        {
            printf("%.2f %.2f %.2f\n", a,b,c);
        }

        else if (a > c && a > b)
        {
            printf("%.2f %.2f %.2f\n", a,c,b);
        }

        else if (b > a && b > c)
        {
            printf("%.2f %.2f %.2f\n", b,a,c);
        }

        else if (b > c && b > a)
        {
            printf("%.2f %.2f %.2f\n", b,c,a);
        }

        else if (c > a && c> b)
        {
            printf("%.2f %.2f %.2f\n", c,a,b);
        }

        else if (c > b && c > a)
        {
            printf("%.2f %.2f %.2f\n", c,b,a);
        }

        else 
        {
            printf("%.2f %.2f %.2f\n", a,b,c);
        }
    
    }

    else if (i == 3)
    {
        if (a < b && b > c)
        {
            if (a > c)
            {
                printf("%.2f %.2f %.2f\n", a,b,c);
            }

            else
            {
                printf("%.2f %.2f %.2f\n", c,b,a);
            }
        }
        else if (b < a && a > c)
        {   
            if (b > c)
            {
                printf("%.2f %.2f %.2f\n", b,a,c);
            }

            else
            {
                printf("%.2f %.2f %.2f\n", c,a,b);
            }
        }

        else if (a < c && c> b)
        {
            if (a > b)
            {
                printf("%.2f %.2f %.2f\n", a,c,b);
            }
            
            else
            {
                printf("%.2f %.2f %.2f\n", b,c,a);
            }
        }

        else
        {
            
        }
    }




    return 0;
}
