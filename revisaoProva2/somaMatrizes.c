#include <stdio.h>

int main(){
    int minhaMatriz[3][3] = {{90,1,2},{0,6,9},{8,7,2}};
    int outraMatriz[3][3] = {{0,1,2},{0,6,9},{8,7,2}};
    int somaMatriz[3][3];

    for(int i = 0; i < 3; i++)
    {
        for (int j =0; j< 3 ;j++){
            somaMatriz[i][j] = minhaMatriz[i][j] + outraMatriz[i][j];
        }
        /* code */
    }
    printf("[");
    for (int i = 0; i < 3; i++)
    {
        for (int j =0; j<3; j++){
            printf("%d ",somaMatriz[i][j]);
        }
        printf("]\n");
        /* code */
    }
    
    

    return 0;
}