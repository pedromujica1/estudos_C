#include <stdio.h>
int main(){
    struct agenda{
        char horario[4];
        char data[11];
        char compromisso[30];
    };
    typedef struct agenda agenda;
    int qtdade_eventos;
    printf("Digite a quantidade de eventos para serem salvos na agenda: ");
    scanf("%d",&qtdade_eventos);
    while (getchar())
    

    return 0;

}