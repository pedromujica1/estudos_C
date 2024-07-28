#include <math.h>
#include <stdio.h>


int main(){  
    int ano_nasc;
    char nome[50];
    printf("Insira o seu ano de nascimento: ");
    scanf("%d",&ano_nasc);
    printf("Insira seu nome: ");
    scanf("%s",nome);
    int idade = 2024-ano_nasc;
    printf("Ola! %s. Voce tem ou vai fazer %d anos este ano\n",nome,idade);
    return 0;
}