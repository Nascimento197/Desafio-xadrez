/*
--------------------------------------------------------
Desafio Nível 1 - Movimentando as Peças do Xadrez
Descrição: Simula os movimentos da Torre, Bispo e Rainha
usando as estruturas de repetição for, while e do-while.
--------------------------------------------------------
*/

#include <stdio.h>

int main() {
    // ========================
    // Movimento da TORRE (for)
    // ========================
    int casas_torre = 5; // número de casas a mover
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n");

    // =========================
    // Movimento do BISPO (while)
    // =========================
    int casas_bispo = 5; // número de casas a mover
    int i = 1;
    printf("Movimento do BISPO:\n");
    while (i <= casas_bispo) {
        printf("Cima, Direita (%d casa)\n", i);
        i++;
    }

    printf("\n");

    // ============================
    // Movimento da RAINHA (do-while)
    // ============================
    int casas_rainha = 8; // número de casas a mover
    int j = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda (%d casa)\n", j);
        j++;
    } while (j <= casas_rainha);

    printf("\nSimulação concluída!\n");

    return 0;
}
