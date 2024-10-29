#include <stdio.h>

int main(){
    
    int vetor_entrada[5];
   
    int cont = 0;
    int repetidos =0;
    int vetor_normal[5];
    int index_limite = 0;
    int tamanho =  sizeof(vetor_entrada) / sizeof(int);

    for (int i = 0; i < 5; i++){
        scanf("%d",&vetor_entrada[i]);
    }

    for (int i = 0; i < tamanho; i++){
        for (cont = 0; cont < index_limite; cont++){
            if (vetor_entrada[i] == vetor_normal[cont]){
                break;
            }
        }
        if (index_limite == cont ){
            vetor_normal[index_limite] = vetor_entrada[i];
            index_limite++;
        }
    }

    for (int i = 0; i < index_limite; i++)
    {
        printf("%d ",vetor_normal[i]);
    }    
    return 0;

}