#include <stdio.h>
#include <stdlib.h>

struct Lista{
    int valor;
    struct Lista *proximo; //Ponteiro aponta para o próximo nó
    struct Lista *anterior; //Ponteiro aponto para o nó anterior
};

void inserir_final(struct Lista **ponteiro,int valor){

    //Alocando
    struct Lista *newLista = (struct Lista*)malloc(sizeof(struct Lista));
    newLista->valor = valor; //Define o valor do nó
    newLista->proximo =  NULL; //Define o valor do próximo

    if(*ponteiro == NULL){
        newLista -> anterior=NULL; //O nó anterior é null
        *ponteiro = newLista;
        return;
    }
    struct Lista *temp = *ponteiro;
    while (temp ->proximo !=NULL){
        temp = temp ->proximo;
    }
    temp ->proximo = newLista;
    newLista ->anterior = temp;
    
}
