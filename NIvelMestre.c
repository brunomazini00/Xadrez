#include <stdio.h>

// Torre: Movimento Horizontal para direita.
void movimentoTorre(int casas){

    if (casas == 0)
        return ;

    printf("Direita\n");
    movimentoTorre(casas - 1); //Recursividade

}

//Rainha: Movimento horizontal para esquerda
void movimentoRainha(int casas){

    if (casas == 0)
        return;

        printf("Esquerda\n");
        movimentoRainha (casas - 1); //Recursividade
}

//Bispo: Loop externo = movimento vertical
//       Loop interno = movimento horizontal
//       Loops aninhados com recursividade
void movimentoBispo(int casas){

if (casas == 0)
        return;

 for (int v = 0; v < 1; v++) 
    {
        printf("Cima\n"); // Parte vertical do movimento
        
        // Loop Interno: Controle Horizontal
        for (int h = 0; h < 1; h++) 
        {
            printf("Direita\n"); // Parte horizontal do movimento
        }
    }
    movimentoBispo (casas - 1); //Recursividade
    
}


int main(){

    int MoverTorre = 5; 
    int MoverBispo = 5; 
    int MoverRainha = 8; 
    

    printf("=================TORRE===================\n");
    movimentoTorre(MoverTorre);
    
    printf("=================BISPO===================\n");
    movimentoBispo(MoverBispo);

    printf("=================Rainha===================\n");
    movimentoRainha(MoverRainha);

    printf("=================Cavalo===================\n");

    for (int i = 0, j = 0; i < 2; i++, j++) 
    {
        // Loop Interno: Executa os passos dentro de cada fase
        // k será usado para contar os passos
        for (int k = 0; k < 3; k++) 
        {
            // Movimento Vertical (i == 0)
            if (i == 0) {
                if (k < 2) { // Precisa de 2 passos verticais
                    printf("Cima\n");
                    continue; // Pula para a próxima iteração do loop interno (k)
                } else {
                    break; // Sai do loop interno pois completou os 2 passos
                }
            }
            
            //Movimento Horizontal (i == 1)
            if (i == 1) {
                // Precisa de apenas 1 passo horizontal
                printf("Direita\n");
                break; // Sai do loop interno e finaliza o movimento
        }
    }
}    
    

    return 0;
} 