#include <stdio.h>

int main(){

    int MovimentoTorre = 5; //Cinco casas para a direita.
    int MovimentoBispo = 5; //Cinco casas na diagonal para cima e à direita
    int MovimentoRainha = 8;//Oito casas para a esquerda.

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
   

    return 0;
}