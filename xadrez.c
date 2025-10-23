#include <stdio.h>

// Constantes definindo o número de casas que cada peça se move
const int MOVIMENTOS_BISPO = 5;
const int MOVIMENTOS_TORRE = 5;
const int MOVIMENTOS_RAINHA = 8;
const int MOVIMENTOS_CAVALO_VERTICAL = 2 ; // Duas casas para baixo
const int MOVIMENTOS_CAVALO_HORIZONTAL = 1 ; // Uma casa para esquerda

// -------------------- Funções Recursivas --------------------

// Torre: move para a direita
void movimentaTorre(int movimentosRestantes) {
    if (movimentosRestantes == 0) {
        return;
    }
    printf("Torre moveu para a direita\n");
    movimentaTorre(movimentosRestantes - 1);
}

// Rainha: move para a esquerda
void movimentaRainha(int movimentosRestantes) {
    if (movimentosRestantes == 0) {
        return;
    }
    printf("Rainha moveu para a esquerda\n");
    movimentaRainha(movimentosRestantes - 1);
}

// Bispo: movimento diagonal usando loops aninhados
void movimentaBispo(int movimentosRestantes) {
    if (movimentosRestantes == 0) {
        printf("...Bispo chegou ao destino.\n\n");
        return;
    }
    // Loop aninhado para a movimentação diagonal
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    movimentaBispo(movimentosRestantes - 1);
}

// Cavalo: movimento em L usando loops múltiplos e condições
void movimentaCavalo() {
    printf("=== Movimentando o Cavalo (movimento em L) ===\n");
    int vertical = 0;
    int horizontal = 0;

    while (vertical < MOVIMENTOS_CAVALO_VERTICAL) {
        vertical++;
        printf("Baixo\n");

        horizontal = 0;
        while (horizontal < MOVIMENTOS_CAVALO_HORIZONTAL) {
            horizontal++;
            // Exemplo de uso de continue/break
            if (vertical > 2) continue;
            if (horizontal > 1) break;
            printf("Esquerda\n");
        }
    }
    printf("...Cavalo chegou ao destino.\n\n");
}

// -------------------- Função Principal --------------------
int main() {
    printf("--- Desafio Xadrez ---\n\n");

// Movimentações
    printf("=== Movimentando a Torre (%d casas para a direita) ===\n", MOVIMENTOS_TORRE);
    movimentaTorre(MOVIMENTOS_TORRE);

    printf("=== Movimentando a Rainha (%d casas para a esquerda) ===\n", MOVIMENTOS_RAINHA);
    movimentaRainha(MOVIMENTOS_RAINHA);

    printf("=== Movimentando o Bispo (%d casas diagonal sup. direita) ===\n", MOVIMENTOS_BISPO);
    movimentaBispo(MOVIMENTOS_BISPO);

    movimentaCavalo();

 
    printf("--- Simulações concluídas! ---\n");
    
    return 0;
}
