/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cliente {
    int id_client;
    char nome[30];
    char sobrenome[30];
    char data_nasc[30];
    char email[10];
    char telefone[15];
    struct Cliente *proximo; //ponteiro para o próximo
    struct Cliente *anterior; //ponteiro para o anterior
};

//Insere nome e sobrenom
void inserir_no_final(struct Cliente **ponteiro, int id_client, 
char nome[30],  
char sobrenome[30], 
char data_nasc[30],  
char email[10],char telefone[15]) {
    // Espaço para alocar o nó
    struct Cliente *newCliente = (struct Cliente*)malloc(sizeof(struct Cliente));
    
    //Definindo novos dados
    newCliente->id_client = id_client; //Define valor do nó
    newCliente->nome[30] = nome[30];
    newCliente->sobrenome[30] = sobrenome[30];
    newCliente->data_nasc[30] = data_nasc[30];
    newCliente->email[10] = email[10];
    newCliente->telefone[15] = telefone[15];
    
    
    newCliente->proximo = NULL; // o próximo é null
    

    if (*ponteiro == NULL) { 
        newCliente->anterior = NULL; // o nó anteriro é null
        *ponteiro = newCliente; // define como primeiro nó
        return;
    }

    struct Cliente *temp = *ponteiro; //ponteiro temporario para percorrer o nó
    while (temp->proximo != NULL) {
        temp = temp->proximo; //percorre até o ultimo nó
    }
    temp->proximo = newCliente; //o ultimo nó aponta para um novo nó
    newCliente->anterior = temp; // o novo nó aponta para o anterior
}

void inserir_no_inicio(struct Cliente **ponteiro,int id_client, 
char nome[],  
char sobrenome[], 
char data_nasc[],  
char email[],char telefone[])
{
    
    struct Cliente *newClienteIni = (struct Cliente*)malloc(sizeof(struct Cliente));
    newClienteIni->id_client = id_client; //Define valor do nó
    strcpy(newClienteIni->nome,nome);
    strcpy(newClienteIni->sobrenome,sobrenome);
    strcpy(newClienteIni->data_nasc, data_nasc);
    strcpy(newClienteIni->email, email);
    strcpy(newClienteIni->telefone,  telefone);
    
    //Definindo a inserção no inicio
    newClienteIni->anterior = NULL;
    newClienteIni->proximo = *ponteiro;

    if (*ponteiro != NULL) {
        (*ponteiro)->anterior = newClienteIni;
    }

    *ponteiro = newClienteIni;
}

void listar_clientes(struct Cliente *ponteiro){
    struct Cliente *impressao = ponteiro;

    while (impressao!= NULL){
        printf("%d <-> ", impressao->id_client);
        printf("%s <-> ", impressao->nome);
        printf("%s <-> ", impressao->sobrenome);
        printf("%s <-> ", impressao->data_nasc);
        printf("%s <-> ", impressao->email);
        printf("%s <-> ", impressao->telefone[15]);
        
    }
    printf("NULL (a lista esta vazia): \n");
}




int main()
{
    printf("Hello World");

    return 0;
}
