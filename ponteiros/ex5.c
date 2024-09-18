#include <stdio.h>

int main() {
    //Declaração de variáveis
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    //Declaração de ponteiros
    int *ptrInteiro;
    float *ptrReal;
    char *ptrCaractere;

    //Associe as variáveis aos ponteiros (use &)
    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrCaractere = &caractere;

    //Imprime os valores e endereços antes da modificação
    printf("Antes da modificação:\n");
    printf("Inteiro: %d, Endereço: %p\n", inteiro, (void*)ptrInteiro);
    printf("Real: %.2f, Endereço: %p\n", real, (void*)ptrReal);
    printf("Caractere: %c, Endereço: %p\n", caractere, (void*)ptrCaractere);

    //Modificando os valores usando os ponteiros
    *ptrInteiro = 20;
    *ptrReal = 6.28;
    *ptrCaractere = 'B';

    //Imprime os valores e endereços após a modificação
    printf("\nApós a modificação:\n");
    printf("Inteiro: %d, Endereço: %p\n", inteiro, (void*)ptrInteiro);
    printf("Real: %.2f, Endereço: %p\n", real, (void*)ptrReal);
    printf("Caractere: %c, Endereço: %p\n", caractere, (void*)ptrCaractere);
    scanf("%[^\n]");

    return 0;
}
