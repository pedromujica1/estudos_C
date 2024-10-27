#include <stdio.h>

int main(){
    int minhaMatriz[3][3] = {{90,1,2},{0,6,9},{8,7,2}};
    int outraMatriz[3][3] = {{0,1,2},{0,6,9},{8,7,2}};
    int multiplicacaoMatriz[3][3];

    for(int i = 0; i < 3; i++)
    {
        for (int j =0; j< 3 ;j++){
            multiplicacaoMatriz[i][j] = minhaMatriz[i][j] * outraMatriz[3-i-1][3-j-1];
        }
        /* code */
    }
    printf("Matriz resultante: \n");
    printf("[");
    for (int i = 0; i < 3; i++)
    {
        for (int j =0; j<3; j++){
            printf("%d ",multiplicacaoMatriz[i][j]);
        }
        printf("]\n");
        /* code */
    }
    
    

    return 0;
}