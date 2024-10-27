#include <stdio.h>

int main(){
    int vetor_original[5];
    int vetor_invertido[5];
    int pos = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d",&vetor_original[i]);
    }


    //Alocando vetor invertindo na outra array vetor invertido
    for (int i = 4; i >= 0; i--){
        //printf("%d ",vetor_original[i]);
        vetor_invertido[pos] = vetor_original[i];
        pos+=1;
    }
    printf("Vetor invertido: [ ");
    //Imprimindo a outra arry
    for(int i = 0; i < 5; i++){
        
        printf("%d ",vetor_invertido[i]);
    }
    printf("]");

    


    
    


}