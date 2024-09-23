#include <stdio.h>
#include <string.h>

int main(){
    //declarando string
    char minha_string[1000];
    char strings2[10];

    scanf("%1000[^\n]s",minha_string);
    printf("String digitada: %s\n", minha_string);
    //Limpa o buffer de memória para próxima leitura de dados
    while (getchar() != '\n');

    //gets()
    //fgets(string,tamanho,stdin)
    //puts()
    fgets(strings2,10,stdin);
    printf("Segunda string printada pelo puts:\n");
    puts(strings2);

    // strcpy("string_nova","string_antiga");
    //Concatenar: strcat("string1","string2");
    //Comparar strings: strcmp("str1","str2")
    //Tamanho da string: strlen(string)

    return 0;
    
}