#include <stdio.h>
#include  <string.h>

int main(){
    int n_inicial;
    int prograssao[10];

    scanf("%d",&n_inicial);
    for (int i = 0; i < 10; i++)
    {
        n_inicial += 2;
        prograssao[i] = n_inicial;
        /* code */
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",prograssao[i]);
        /* code */
    }
    
    

    return 0;
}