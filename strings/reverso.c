#include <stdio.h>
#include  <string.h>
int main()
{
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    int tamanho = strlen(palavra);
    //printf("\n%s",palavra);
    //printf("TAMANHO: %d",tamanho);
    for (int i = tamanho; i>=0; i--){
        printf("%c",palavra[i]);    
    }
    printf("\n");
    return 0;
}