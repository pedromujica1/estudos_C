#include <stdio.h>
#include <string.h>

int main(){
    char palavra[13];
    char palavra_reversa[13];
    int repeticoes = 1;
    printf("Insira sua string: ");
    scanf("%13[^\n]s",palavra);
    int pos = 0;

    while (getchar() != '\n');

    int tamanho_str = strlen(palavra);
    for(int i = tamanho_str-1; i >= 0; i--)
    {
        palavra_reversa[pos] = palavra[i];
        pos++;
    }
    printf("%s\n",palavra_reversa);
    
    int iteracoes = 0;
    while(repeticoes && iteracoes < strlen(palavra_reversa)){
        if (palavra[iteracoes] != palavra_reversa[iteracoes]){
            repeticoes = 0;
        }
        else {
            iteracoes++;

        }
    }
    if (repeticoes == 0){
        puts("Palavra não é palindromo\n");
    }
    else{
        puts("Palavra é palindromo!");
    }
    
    return 0;
}