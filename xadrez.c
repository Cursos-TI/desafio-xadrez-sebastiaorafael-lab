#include <stdio.h>

void moverTorreRecursivo(int casas) {
    if (casas <= 0) {
        return; 
    }
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima-Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverRainhaRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

int main() {
    printf("--- DESAFIO XADREZ: NÍVEL MESTRE ---\n\n");

    printf("Movimento da Torre (5 casas para a Direita - Recursivo):\n");
    moverTorreRecursivo(5); 
    printf("\n");

    printf("Movimento do Bispo (5 casas para Cima-Direita - Recursivo):\n");
    moverBispoRecursivo(5);
    printf("\n");

    printf("Movimento da Rainha (8 casas para a Esquerda - Recursivo):\n");
    moverRainhaRecursivo(8);
    printf("\n");

    printf("Movimento do Cavalo (Cima-Cima-Direita - Loops Aninhados):\n");
    for (int i = 0; i < 1; i++) { 
        printf("Iniciando movimento do Cavalo...\n");
        for (int vertical = 0; vertical < 2; vertical++) {
            printf("Cima\n");
        }
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}
