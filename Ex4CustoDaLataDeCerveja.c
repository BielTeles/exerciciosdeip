#include <stdio.h>

int main()
{
    float raio, altura, areaLateral, areaCirculo, gastoLata, areaLata;// declarando minhas variaveis

    scanf("%f%f", &raio, &altura);                   // fazendo leitura da entrada
    
    areaCirculo = 3.14159 * (raio * raio);
    
    areaLateral = 2 * 3.14159 * raio * altura;
    
    areaLata = (2 * areaCirculo) + areaLateral;

    gastoLata = areaLata * 100;

    printf("O VALOR DO CUSTO E = %.2f\n", gastoLata);

    return 0;
}