#include <stdio.h>
int main (){
    //Encontrar maior elemento de 1 matriz
    int minhaMatriz[3][4] = { {0,0,0,0}, {9,3,41,86}, {96,32,75,23} };
    //
    int maior = minhaMatriz[0][0];
    printf("%d\n", maior);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if(minhaMatriz[i][j] > maior){
                maior = minhaMatriz[i][j];
            }
        }
       
    }
    printf("O maior elemento da Matriz é: %d\n", maior);
    
    return 0;
}