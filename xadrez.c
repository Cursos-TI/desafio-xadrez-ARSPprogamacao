#include <stdio.h>

int main() {
    // Movimento da TORRE - 5 casas para a DIREITA usando FOR
    printf("Movimento da Torre:\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO - 5 casas na DIAGONAL (CIMA + DIREITA) usando WHILE
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da RAINHA - 8 casas para a ESQUERDA usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}
