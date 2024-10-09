#include <stdio.h>

int main(){
    printf("Bem-vindo!\n");
    //declarando float 
    float vetor[10] = {0.0,0.1, 0.2,0.3, 0.8,0.7, 0.8,0.9 ,0.5,0.6};
    for (int i = 0; i < 10; i++){
        //imprimindo endereços do vetor
        printf("Endereço do vetor[%d]: %p",i, &vetor[i]);
        //imprimindo valores do vetor
        printf("\nValor armazenado:  %.1f\n", vetor[i]);
        printf("\n");
    }
}