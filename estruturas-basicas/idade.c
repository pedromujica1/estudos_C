#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){
    int ano_nasc;
    printf("INSIRA O ANO DE NASCIMENTO: ");
    scanf("%d", &ano_nasc);
    //int comparacao =  strcmp(senha, "1234");
    // Verifica se a senha é igual a "1234"
    if (ano_nasc <= 2006){
        printf("VOCÊ É MAIOR DE IDADE. BEM-VINDO AO MUNDO REAL!\n");
    }
    else{
        printf("VOCÊ É MENOR DE IDADE. APROVEITE! \n");
    }
    return 0;
    
   
    
}