#include <stdio.h>
int main(){
    int num1= 0;
    int num2 = 6;
    int *p_n1;
    int *p_n2;
    p_n1 = &num1;
    p_n2 = &num2;

    if (p_n1 > p_n2){
        printf("Esse é o maior endereço %p\n",p_n1);
    }
    else{
        printf("Esse é o maior endereço %p\n",p_n2);
    }
    return 0;
}