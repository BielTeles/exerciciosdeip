#include <stdio.h>

int main()
{
    float primeiro, segundo, terceiro;

    scanf("%f %f %f", &primeiro, &segundo, &terceiro);

    if (primeiro < segundo && primeiro < terceiro)
    {
        if (segundo > terceiro)
        {
            printf("%.2f, %.2f, %.2f\n", primeiro, segundo, terceiro);
        }
        else
        {
            printf("%.2f, %.2f, %.2f\n", primeiro, terceiro, segundo);
        }
    }

    else if (segundo < primeiro && segundo < terceiro)
    {
        if (primeiro < terceiro)
        {
            printf("%.2f, %.2f, %.2f\n", segundo, primeiro, terceiro);
        }
        else
        {
            printf("%.2f, %.2f, %.2f\n", segundo, terceiro, primeiro);
        }
    }

    else if (terceiro < primeiro && terceiro < segundo)
    {
        if (primeiro < segundo)
        {
            printf("%.2f, %.2f, %.2f\n", terceiro, primeiro, segundo);
        }
        else
        {
            printf("%.2f, %.2f, %.2f\n", segundo, terceiro, primeiro);
        }
    }



    return 0;
}