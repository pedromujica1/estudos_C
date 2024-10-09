#include <stdio.h>

int main(){
    float minha_matriz [3][3]= {{0.1,0.2,0.3},{0.40,0.9,0.9},{0.8,0.3,0.1}};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            
            //imprimir endereço de memoria
            printf("Endereço da matriz [%d][%d]: %p\n",i, j, &minha_matriz[i][j]);
            //imprimir valor armazenado
            printf("Valor armazenado: %.1f\n", minha_matriz[i][j]);
        }
        printf("\n");
    }
}