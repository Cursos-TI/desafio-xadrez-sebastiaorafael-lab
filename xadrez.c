#include <stdio.h>

// --- DECLARAÇÃO DE PROTÓTIPOS ---
// Avisa ao compilador que as funções existem abaixo do main
void moverTorreRecursivo(int casas);
void moverBispoRecursivo(int casas);
void moverRainhaRecursivo(int casas);

int main() {
    // Título do Desafio
    printf("--- DESAFIO XADREZ: NÍVEL MESTRE ---\n\n");

    // Chamada da Função Recursiva para a Torre
    printf("Movimento da Torre:\n");
    moverTorreRecursivo(5); 
    printf("\n");

    // Chamada da Função Recursiva para o Bispo
    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(5);
    printf("\n");

    // Chamada da Função Recursiva para a Rainha
    printf("Movimento da Rainha:\n");
    moverRainhaRecursivo(8);
    printf("\n");

    // Movimentação do Cavalo usando Loops Aninhados
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 1; i++) { 
        // Loop interno para movimento vertical
        for (int vertical = 0; vertical < 2; vertical++) {
            printf("Cima\n");
        }
        // Loop interno para movimento horizontal
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}

// --- DEFINIÇÃO DAS FUNÇÕES (Lógica Recursiva) ---

// Move a Torre para a direita até o contador chegar a zero
void moverTorreRecursivo(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

// Move o Bispo: 4 vezes para Cima e 1 para Direta
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    
    // Condição para alternar o movimento na contagem regressiva
    if (casas > 1) {
        printf("Cima\n");
    } else {
        printf("Direta\n");
    }
    
    moverBispoRecursivo(casas - 1);
}

// Move a Rainha para a esquerda usando recursão
void moverRainhaRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}
