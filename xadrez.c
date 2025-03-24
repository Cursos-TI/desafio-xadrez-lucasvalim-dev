#include <stdio.h>

void moverTorre(int casas) {

    if(casas > 0) {

    moverTorre(casas - 1);
    printf("%d Casa para a direita.\n", casas);

    }

}

void moverBispo(int i) {

    int j;

    for(i = 1; i <= 5; i++) {

        while(j <= 1) {

            j++;

        }

        printf("%d Casa para a esquerda e para cima", i);
        printf("\n");

    }
}


void moverRainha(int casas) {

    if(casas > 0) {

        moverRainha(casas - 1);
        printf("%d Casa para a esquerda.\n", casas);

    }
}

int main() {

    //Movimentação da TORRE:

    printf("Movimentação da Torre:\n");

    moverTorre(5);
    printf("\n");

    //Movimentação do BISPO:

    printf("Movimentação do Bispo:\n");

    moverBispo(5);
    printf("\n");

    //Movimentação da RAINHA:

    printf("Movimentação da Rainha:\n");

    moverRainha(8);
    printf("\n");

    //Movimentação do CAVALO:

    printf("Movimentação do Cavalo:\n");

    int z = 1;

    for(int x = 1; x <= 1; x++) {

        while(z <= 2) {

            printf("%d Casa para cima\n", z);
            z++;

        }

        printf("%d Casa para a direita", x);
        printf("\n");

    }

    printf("\n");


    return 0;
}
