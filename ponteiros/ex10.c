#include <stdio.h>

int main(){
    int meu_vetor[5];

    for (int i = 0; i < 5; i++){
        printf("Insira o valor %d do vetor: ",i);
        scanf("%d",&meu_vetor[i]);
    }
    //Imprimir o dobro dos valores com ponteiros
    for (int i = 0; i < 5; i++){
        int *p_novo_valor;
        p_novo_valor = &meu_vetor[i];
        *p_novo_valor = meu_vetor[i]* 2;
        printf("Endereço do vetor atualizado[%d]: %d\n",i, meu_vetor[i]);
    }

    return 0;
}