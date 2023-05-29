#include <stdio.h>

void printFinais(int n) {
    int i, j, k=1;

    // Loop para imprimir as configurações de finais
    for (i = 1; i < n; i++) {
        for (j = i + 1; j <= n; j++) {
            printf("Final %d: Time%d X Time%d\n", k, i, j);
            k++;
        }
    }
}

int main() {
    int numTimes;
    scanf("%d", &numTimes);
    
    if (numTimes < 2)
        printf("Campeonato invalido!\n");
    else
        printFinais(numTimes);

    return 0;
}
