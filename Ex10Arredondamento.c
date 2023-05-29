#include <stdio.h>

int main()
{
    
    float num,f1, f2,f3;
    int n;

    scanf("%f", &num);

    n = ((num * 10) + 0.5);
    f1 = n / 10.0;
    n = ((num * 100)+ 0.5);
    f2 = n / 100.0;
    n = ((num * 1000) + 0.5);
    f3 = n / 1000.0;

    printf("%.6f\n%.6f\n%.6f\n", f1, f2, f3);
      
    
    return 0;
}