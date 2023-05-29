#include <stdio.h>

int main() {
    int numero, somaPares = 0, somaImpares = 0, qtdPares = 0, qtdImpares = 0;
    
    //printf("Digite uma sequência de números inteiros (digite 0 para sair):\n");

    do {
        scanf("%d", &numero);

        if (numero != 0) {
            if (numero % 2 == 0) {
                somaPares += numero;
                qtdPares++;
            } else {
                somaImpares += numero;
                qtdImpares++;
            }
        }
    } while (numero != 0);

    if (qtdPares > 0) {
        float mediaPares = (float)somaPares / qtdPares;
        printf("MEDIA PAR: %.6f\n", mediaPares);
    } else {
        return 0;
    }

    if (qtdImpares > 0) {
        float mediaImpares = (float)somaImpares / qtdImpares;
        printf("MEDIA IMPAR: %.6f\n", mediaImpares);
    } else {
        return 0;
    }

    return 0;
}
