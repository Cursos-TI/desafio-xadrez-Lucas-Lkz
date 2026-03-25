#include <stdio.h>

int main () {
    //Variaveis de movimentação das peças
    int MOV_BISPO = 5;
    int MOV_TORRE = 5;
    int MOV_RAINHA = 8;
    int MOV_CAVALO1 = 2;
    int MOV_CAVALO2 = 1;
    int MOV_PEAO = 2;


    printf("Movimentação das peças de Xadrez\n");
    printf("Movimentação da Rainha:\n");

    int contadorRainha = 1;
    do
    {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= MOV_RAINHA);

    printf("\n ---------------------------\n");
    
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= MOV_BISPO; i++)
    {
        printf("Cima, direita\n");
    }

    printf("\n ---------------------------\n");
    printf("Movimentação da Torre:\n");
int contadorTorre = 1;
    while (contadorTorre <= MOV_TORRE)
    {
        printf("Cima\n");
        contadorTorre++;
    }

    printf("\n ---------------------------\n");
    printf("Movimentação do Cavalo:\n");

        for (int i = 1; i <= MOV_CAVALO1; i++)
    {
        printf("Cima\n");
        if (i == MOV_CAVALO1) {
            int j = 0;       
            do
            {
                printf("Direita\n");
                j++;
            } while (j < MOV_CAVALO2);
            
        }
        
    }

    printf("\n ---------------------------\n");
    printf("Movimentação do peão:\n");

    for (int i = 1; i <= MOV_PEAO; i++)
    {
        printf("Baixo\n");
    }
    
    
    
    
    

   return 0; 
}
