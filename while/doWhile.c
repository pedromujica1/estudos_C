#include <stdio.h>

int main(){
    printf("Hello Do While\n");
    int iterator = 0;

    do {
        printf("Iterador Teste %d\n",iterator);
        iterator++;
    }
    while (iterator<11);
    return 0;


}