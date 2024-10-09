#include <stdio.h>
int main(){
    int n1,n2;
    printf("Digite um número: ");
    scanf("%d",&n1);
    printf("Digite outro número: ");
    scanf("%d",&n2);
    int *p1,*p2;
    p1 = &n1;
    p2 = &n2;
    if (p1 > p2){
        printf("Esse é o conteúdo do maior endereço: %d\n",n1);
    }
    else{
        printf("Esse é conteúdo do maior endereço: %d\n",n2);
    }

    return 0;
}