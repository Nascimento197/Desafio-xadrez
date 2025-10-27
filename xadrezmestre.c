#include <stdio.h>

/*
  ==============================
  DESAFIO NÍVEL MESTRE - XADREZ
  ==============================
  Peças implementadas:
   - Torre (recursão simples)
   - Bispo (recursão + loops aninhados)
   - Rainha (recursão simples)
   - Cavalo (loops complexos com múltiplas condições)
*/

// ------------------- FUNÇÕES RECURSIVAS -------------------

// Função recursiva para a Torre: move-se 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base da recursão
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva + loops aninhados para o Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return; // Caso base da recursão
    for (int v = 1; v <= vertical; v++) {         // Movimento vertical
        for (int h = 1; h <= horizontal; h++) {   // Movimento horizontal
            printf("Cima, Direita\n");
        }
    }
    moverBispo(vertical - 1, horizontal); // Chamada recursiva reduzindo o movimento
}

// Função recursiva para a Rainha: move-se 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ------------------- CAVALO COM LOOPS COMPLEXOS -------------------

void moverCavalo() {
    /*
       Cavalo: 2 casas para cima e 1 para a direita
       - usa loops aninhados com múltiplas variáveis e controle de fluxo
    */
    printf("Movimento do Cavalo:\n");
    for (int i = 1, j = 0; i <= 2; i++, j++) { // duas casas para cima
        if (i == 1) {
            printf("Cima\n");
        } else if (i == 2) {
            printf("Cima\n");
            for (int k = 1; k <= 1; k++) {
                if (k % 2 == 0) continue; // condição de controle de fluxo
                printf("Direita\n");
                break; // interrompe após o movimento lateral
            }
        }
    }
}

// ------------------- FUNÇÃO PRINCIPAL -------------------

int main() {
    printf("===== Movimento da Torre =====\n");
    moverTorre(5);

    printf("\n===== Movimento do Bispo =====\n");
    moverBispo(1, 5);

    printf("\n===== Movimento da Rainha =====\n");
    moverRainha(8);

    printf("\n===== Movimento do Cavalo =====\n");
    moverCavalo();

    return 0;
}
