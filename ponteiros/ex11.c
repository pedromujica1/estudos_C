#include <stdio.h>
int main(){
    int meu_vetor[5];

    for (int i = 0; i < 5; i++){
        printf("Insira o valor %d do vetor: ",i);
        scanf("%d",&meu_vetor[i]);
    }
    //Imprimir o dobro dos valores com ponteiros
    for (int i = 0; i < 5; i++){
        if (meu_vetor[i]%2 == 0){
            printf("Endereço de memória do vetor[%d]: %p\n",i, &meu_vetor[i]);
        }
        
    }

    return 0;
}