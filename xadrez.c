#include <stdio.h>

int main () {
    //Variaveis de movimentação das peças
    int MOV_BISPO = 5;
    int MOV_TORRE = 5;
    int MOV_RAINHA = 8;
    int MOV_CAVALO = 8;


    printf("Movimentação das peças de xadrez: \n");
    printf("Movimento da torre: \n");
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Direita\n");
    }
    
    printf("\n---------------------------------\n");
    printf("Movimentação do bispo: \n");

    int contadorBispo = 1;
       
        while (contadorBispo <= MOV_BISPO) { 
        printf("Cima, direita\n");
        contadorBispo++;
       } 
       //criei o contador bispo para o while parar, a cada vez que ele roda
       //ele adiciona 1 ao contadorBispo, através do contadorBispo++;
       // e quando ele for maior ou igual a variavel MOV_BISPO, ele vai parar
    
    printf("\n-------------------------\n");   
    printf("Movimentação da rainha: \n");
    int contadorRainha = 1;
    
        do {
        printf("Esquerda\n");
        contadorRainha++;
    }   while (contadorRainha <= MOV_RAINHA);

    printf("\n---------------------------------\n");
    printf("Movimentação do cavalo: \n");
    int contadorCavalo = 1;
        do {
          if (contadorCavalo == 1) {
             printf("Iniciando Salto: PRA CIMAAA!!!\n");
          } else if (contadorCavalo ==8) {
            printf("Pouso Final: CIMA!\n");
          } else {
            printf("Cima\n");
          }
          

        contadorCavalo++; //aqui faz o loop acontecer
        } while (contadorCavalo <= MOV_CAVALO);
        
        

    return 0;
}
