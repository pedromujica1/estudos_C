#include <stdio.h>

int main(){
    //Variáveis para argmazenarar valores 
    float val1,val2,val3;
    float desconto;

    printf("DIGITE O PRIMEIRO VALOR: ");
    scanf("%f",&val1);

    printf("DIGITE O SEGUNDO VALOR: ");
    scanf("%f",&val2);

    printf("DIGITE O TERCEIRO VALOR: ");
    scanf("%f",&val3);
    int soma = val1+val2+val3;
    printf("A SOMA DOS VALORES É: %d\n",soma);

    if (soma > 1000){
        desconto = 0.8 * soma;
        printf("O DESCONTO É: %.2f\n",desconto);
    } else{
        desconto = 0.5 *soma;
        printf("O DESCONTO É: %.2f\n",desconto);
    }


    return 0;

}