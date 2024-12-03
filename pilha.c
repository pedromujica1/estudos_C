/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct Pilha {
	char itens[MAX];
	int topo;
} Pilha;

void iniciarPilha(Pilha *ponteiro) {
	ponteiro->topo = -1;
}
int estaCheia(Pilha *ponteiro) {
	return ponteiro->topo ==MAX -1;
}
int estaVazia(Pilha *ponteiro) {
	return ponteiro->topo == -1;
}
void push (Pilha *ponteiro, char caractere) {
	if (estaCheia(ponteiro)) {
		printf("PILHA ESTC CHEIA!")
		return;
	}
	ponteiro -> itens[++ponteiro->topo]=caractere;
	printf("Elemento inserido")
}
void pop(Pilha *ponteiro){
    if (estaVazia(ponteiro)){
        
    }
    
}
int main() {
	printf("Savingg!");
}
