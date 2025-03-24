#include <stdio.h>

int main() {
    
    int torre, i;
    int bispo = 1;
    int rainha = 1;
    int j = 1;


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

    printf("\n");

    //Movimentação do CAVALO:

    printf("Cavalo:\n");

    for(i = 1; i <= 1; i++) {

        while(j <= 2) {
            printf("%d Casa para baixo\n", j);
            j++;
        }
        printf("%d Casa para a esquerda", i);
        printf("\n");
    }

    return 0;
}
