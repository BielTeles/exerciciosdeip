#include <stdio.h>

int verificar_primo(int numero) {
    int i;

    // Verifica se o número é negativo
    if (numero < 0) {
        printf("Numero invalido!\n");
        return 0;
    }

    // Caso especial para os números 0 e 1
    if (numero == 0 || numero == 1) {
        return 0;
    }

    // Verifica se o número é divisível por algum número entre 2 e a metade do próprio número
    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int numero;

    scanf("%d", &numero);

    if (verificar_primo(numero)) {
        printf("PRIMO\n");
    } else {
        printf("NAO PRIMO\n");
    }

    return 0;
}
