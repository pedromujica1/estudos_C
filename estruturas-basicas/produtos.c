#include <math.h>
#include <stdio.h>

int main(){  
    float valor_produto;
    char nome_produto[50];
    float desconto;
    
    printf("Insira o nome do produto: ");
    scanf("%s",nome_produto);
    printf("Insira o valor do produto: ");
    scanf("%f",&valor_produto);
    printf("Insira a porcentagem de desconto: ");
    scanf("%f",&desconto);
    
    float valor_final = valor_produto-((valor_produto*desconto)/100);
    printf("O produto %s, com %f de desconto vai custar %.2f\n",nome_produto,desconto,valor_final);
    //printf("Ola! %s. Voce tem ou vai fazer %d anos este ano\n",nome,idade);
    return 0;
}