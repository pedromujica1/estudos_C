#include <stdio.h>

int main(){
    int minhaMatriz[3][3] = {{90,1,2},{0,6,9},{8,7,2}};
    int somaLinha[3];

    for(int i = 0; i < 3; i++)
    {
        for (int j =0; j< 3 ;j++){
            somaLinha[i]+= minhaMatriz[i][j];
        }
        /* code */
    }
    printf("[");
    for (int i = 0; i < 3; i++)
    {
       printf("%d ",somaLinha[i]);
    }
    printf("]");
    
    

    return 0;
}