#include <stdio.h>

int main(){
    int matrix[2][2] = {{1,2},{1,6}};

    int num_bascar = 1;
    int num_existe = 0;

    int *ponteiro_busca = &matrix[0][0];

    for (int i = 0; i < 2*2; i++)
    {
        if (*(ponteiro_busca+i) == num_bascar){
            num_existe = 1;
            break;
            
        }
        else{
            num_existe=0;
        }
    }
    if (num_existe == 1){
        printf("O número está na matriz");
    }
    else{
        printf("O número não está na matriz");
    }
    printf("\n");
    
    
}