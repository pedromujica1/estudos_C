#include <stdio.h>

int main(){
    char letra;
    printf("HELLO - SISTEMA DE VOGAIS");
    scanf("%c", &letra);
    switch (letra){
        case 'A':
            printf("VOGAL\n");
            break;
        case 'E': 
            printf("VOGAL\n");
            break;
        case 'I': 
            printf("VOGAL\n");
            break;
        case 'O': 
            printf("VOGAL\n");
            break;
        case 'U': 
            printf("VOGAL\n");
            break;
    default:
        printf("CONSOANTE\n");
    }
    return 0;
}