/*3) Calculadora. Crie um software que peça e leia 2 valores, pergunte 
qual o operador matemático que será utilizado "+  -  *  /" e imprima o 
resultado da conta. Exemplo num1=10 operador=+ num2=5 
vai imprimir de resultado = 15 

---------------------------------------------------------------------*/
#include <stdio.h>
int main(){
    float num1, num2;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch(operador){
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            printf("O operador não existe!\n");

    }
        
}