#include <stdio.h>

int main() {
    int bispo = 1;
    int rainha = 1;
    int torre = 5;
    int cavalo = 1;

    // Movimento do Bispo (while)
    printf("Movimento do BISPO:\n");
    while (bispo <= 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    printf("\n");

    // Movimento da Rainha (do-while)
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    printf("\n");

    // Movimento da Torre (for)
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento Cavalo (loop aninhados)
    printf("Movimento do CAVALO:\n");
      while (cavalo --)
    {
        for (int i = 0; i < 2; i++) {
            printf("BAIXO\n");
        }
        printf("ESQUERDA\n"); 
    }

    return 0;

}
