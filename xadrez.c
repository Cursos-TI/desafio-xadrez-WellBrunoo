#include <stdio.h>

int main() {
    // -------------------- TORRE --------------------
    // A Torre se move 5 casas para a direita
    // Utilizando a estrutura de repetição for

    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -------------------- BISPO --------------------
    // O Bispo se move 5 casas na diagonal para cima e à direita
    // Utilizando a estrutura de repetição while

    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    int contadorBispo = 1;
    while (contadorBispo <= 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // -------------------- RAINHA --------------------
    // A Rainha se move 8 casas para a esquerda
    // Utilizando a estrutura de repetição do-while

    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= 8);

    return 0;
}