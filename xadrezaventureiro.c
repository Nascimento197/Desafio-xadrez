#include <stdio.h>

int main() {
    // ====== TORRE (for) ======
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ====== BISPO (while) ======
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // ====== RAINHA (do-while) ======
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // ====== CAVALO (for + while aninhado) ======
    printf("\nMovimento do Cavalo:\n");

    int passo_baixo, passo_esquerda;
    for (passo_baixo = 1; passo_baixo <= 2; passo_baixo++) {
        printf("Baixo\n");
        // Loop interno para o movimento lateral
        if (passo_baixo == 2) {
            passo_esquerda = 1;
            while (passo_esquerda <= 1) {
                printf("Esquerda\n");
                passo_esquerda++;
            }
        }
    }

    return 0;
}
