#include <stdio.h> // incluindo as funções de leitura de teclado e etc

int main()
{
  int n1, n2, n3, concatenacao, quadrado; // declarando as variaveis que irei utilizar no problema

  scanf("%d%d%d", &n1, &n2, &n3); // recebendo os valores solicitados na entrada
  
  if (n1 >= 10 || n2>= 10 || n3 >= 10) // verificando se os valores são inferiores a 10
  {
    printf("DIGITO INVALIDO"); // saída solicitada no problema caso alguma entrada for maior que 9
  }

  else
  {
    concatenacao = ((n1 * 100) + (n2 * 10) + n3); // realizando a concatenação dos numeros de entrada
    quadrado = concatenacao * concatenacao; // fazendo a conta do quadrado da concatenação

    printf("%d, %d\n", concatenacao, quadrado); // saída dos elementos conforme solicitado
  }

  return 0;
}