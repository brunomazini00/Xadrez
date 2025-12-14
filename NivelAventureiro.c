#include <stdio.h>

int main(){

    int MovimentoTorre = 5; //Cinco casas para a direita.
    int MovimentoBispo = 5; //Cinco casas na diagonal para cima e à direita
    int MovimentoRainha = 8; //Oito casas para a esquerda.
    int MovimentoCavalo =1; // Movimento em l

    printf("=================TORRE===================\n");

    for (int i = 0; i < MovimentoTorre; i++){
        printf("Direita\n");
    }
    
    printf("=================BISPO===================\n");

   int j = 0;
   while (j < MovimentoBispo) {

     printf("Cima, Direita\n");
     j++;
   }
   
   printf("=================Rainha===================\n");

   int k = 0;
   do {

    printf("Esquerda\n");
    k++;
   } while (k < MovimentoRainha);

   printf("\n");

    printf("=================Cavalo===================\n");
    
    while (MovimentoCavalo > 0) // Um passo para esquerda
    {
        for (int l = 0; l < 2; l++) // Dois passos para baixo
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");

        MovimentoCavalo--;
    }
    
    

    return 0;
}