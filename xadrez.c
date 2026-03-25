#include <stdio.h>

int main () {
    //Variaveis de movimentação das peças
    int MOV_BISPO = 5;
    int MOV_TORRE = 5;
    int MOV_RAINHA = 8;
    int MOV_CAVALO = 8;
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

    for (int i = 1; i <= MOV_CAVALO; i++)
    {
        switch (i)
        {
        case 1:
            printf("Preparando pulo PRA CIMAAA!\n");
            break;
        
        case 8:
            printf("POUSO!!\n");
            break;
        
        default:
            printf("Cima!\n");
            break;
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
