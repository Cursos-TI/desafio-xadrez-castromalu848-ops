#include <stdio.h>


// Função recursiva da TORRE

void moverTorre(int casas) {
    if (casas == 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
}

// Função recursiva da RAINHA

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva do BISPO

void moverBispo(int vertical, int horizontal, int movimentos) {
    if (movimentos == 0) return; 

    for (int i = 1; i <= vertical; i++) {
        printf("Cima\n");
        for (int j = 1; j <= horizontal; j++) {
            printf("Direita\n");
        }
    }

    moverBispo(vertical, horizontal, movimentos - 1);
}

// Movimento do CAVALO 

void moverCavalo() {
    printf("Movimento do CAVALO:\n");

    int subidasNecessarias = 2; 
    int subidasFeitas = 0;

    for (int outer = 0; outer < 10; outer++) { 
        if (subidasFeitas >= subidasNecessarias) {
            
            break;
        }

        for (int inner = 0; inner < 3; inner++) {
            
            if (inner == 0) {
                printf("Cima\n");
                subidasFeitas++;
                
                break;
            } else {
                
                continue;
            }
        }
        
    }

    for (int r = 0; r < 1; r++) {
        printf("Direita\n");
    }

}

// Função principal

int main() {

    int casasTorre = 5;
    int casasRainha = 8;
    int movimentosBispo = 3;
    int movVertical = 1;
    int movHorizontal = 1;

    printf("Movimento da TORRE:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento da RAINHA:\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do BISPO:\n");
    moverBispo(movVertical, movHorizontal, movimentosBispo);
    printf("\n");

    moverCavalo();

    return 0;
}