#include <stdio.h>
int main (){
    //Encontrar maior elemento de 1 matriz
    int minhaMatriz[3][4] = { {0,0,0,0}, {9,3,41,86}, {96,32,75,23} };
    //
    int contPares = 0;
    int contImpares = 0;
    //printf("%d\n", maior);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if(minhaMatriz[i][j]%2 ==0){
                contPares+=1;
            }
            else{
                contImpares+=1;
            }
        }
       
    }
    printf("O Número de elementos pares na Matriz é: %d\n", contPares);
    printf("O Número de elementos impares na Matriz é: %d\n", contImpares);
    
    return 0;
}