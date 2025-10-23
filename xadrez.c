#include <stdio.h>

// Constantes definindo o número de casas que cada peça se move
const int MOVIMENTOS_BISPO = 5;
const int MOVIMENTOS_TORRE = 5;
const int MOVIMENTOS_RAINHA = 8;

int main() {
    printf("--- Desafio Xadrez ---\n\n");

    // Movimentação da Torre (5 casas para a direita) usando 'for'
    printf("=== Movimentando a Torre (%d casas para a direita) ===\n", MOVIMENTOS_TORRE);
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("...Torre chegou ao destino.\n\n");

    // Movimentação da Rainha (8 casas para a esquerda) usando 'while'
    printf("=== Movimentando a Rainha (%d casas para a esquerda) ===\n", MOVIMENTOS_RAINHA);
    int contador_rainha = 0;
    while (contador_rainha < MOVIMENTOS_RAINHA) {
        printf("Esquerda\n");
        contador_rainha++; 
    }
    printf("...Rainha chegou ao destino.\n\n");

    // Movimentação do Bispo (5 casas na diagonal superior direita) usando 'do-while'
    printf("=== Movimentando o Bispo (%d casas diagonal sup. direita) ===\n", MOVIMENTOS_BISPO);
    int contador_bispo = 0;
    do {
        printf("Cima\n");
        printf("Direita\n");
        contador_bispo++;
    } while (contador_bispo < MOVIMENTOS_BISPO);
    printf("...Bispo chegou ao destino.\n\n");



    printf("--- Simulações concluídas! ---\n");
    
    return 0;
}
