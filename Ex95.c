#include <stdio.h>

int main() {
    int n, i, count = 1;
    scanf("%d", &n);
    
    int sequencia[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &sequencia[i]);
    }
    
    // Verifica os segmentos consecutivos
    for (i = 1; i < n; i++) {
        if (sequencia[i] != sequencia[i - 1]) {
            count++;
        }
    }
    
    printf("O numero de segmentos de numeros iguais consecutivos e: %d\n", count);
    
    return 0;
}
