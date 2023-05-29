#include <stdio.h>

int main()
{
    int horas, valor;

    scanf("%d", &horas);

   
   
   if (horas < 3)
   {
    printf("O VALORA A PAGAR E = %d.00\n", horas * 5);
   }
   
   
   
    else
    {
    valor = (((horas / 3) * 10)  + (horas % 3) * 5);
    printf("O VALOR A PAGAR E = %d.00\n", valor);
    }





    return 0;
}