#include <stdio.h>

int main() {
    
    int torre;
    int bispo = 1;
    int rainha = 1;

    //Movimentação da TORRE:

    printf("Torre:\n");
    for(torre = 1; torre <= 5; torre++) {
        printf("Andar %d casa para a direta!\n", torre);
    }

    printf("\n");

    //Movimentação do BISPO:

    printf("Bispo:\n");

    do {
        printf("Ande %d casa para cima e para a direita!\n", bispo);
        bispo++;
    }
    while(bispo <= 5);

    printf("\n");

    //Movimentação da RAINHA:

    printf("Rainha:\n");
    while(rainha <= 8) {
        printf("Ande %d para a esquerda!\n", rainha);
        rainha++;
    }

    return 0;
}
