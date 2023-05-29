#include <stdio.h>

int main(){

    double n, i, k, s, cont, temp=0, temp1=0, temp2=0, temp3=0;

    scanf("%lf\n%lf\n%lf\n%lf", &n, &i, &k, &s);


    printf("Tabuada de soma:\n");
    for(cont = 0; cont < k; cont++)
    {
        temp = n + i +(s*cont);
        printf("%.2lf + %.2lf = %.2lf\n", n, i, temp);
        
    }
    printf("Tabuada de subtracao:\n");
    for(cont=0; cont<k; cont++)
    {
        temp1 = n - (i +(s*cont));
        printf("%.2lf - %.2lf = %.2lf\n", n, i, temp1);
    }
    printf("Tabuada de multiplicacao:\n");
    for(cont=0; cont<k; cont++)
    {
        temp2 = n * (i +(s*cont));
        printf("%.2lf x %.2lf = %.2lf\n", n, i, temp2);
    }
    printf("Tabuada de divisao:\n");
    for(cont=0; cont<k; cont++)
    {
        temp3 = n / (i +(s*cont));
        printf("%.2lf / %.2lf = %.2lf\n", n, i, temp3);
    }





    return 0;
}