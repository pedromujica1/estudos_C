#include <stdio.h>
int main(){
    struct agenda{
        char horario[4];
        char data[11];
        char compromisso[30];
    };
    //Altera inicialização do struct 
    typedef struct agenda agenda;

    //Usuário insere a quantidade de eventos a serem salvos
    int qtdade_eventos;
    printf("Bem vindo a agenda!\n");
    printf("Digite a quantidade de eventos para serem salvos na agenda: ");
    scanf("%d",&qtdade_eventos);
    //Limpando buffer da memória
    while (getchar() != '\n');

    //Declara Array para salvar eventos digitados pelo usuário
    agenda eventos[qtdade_eventos];
    //Inserção de dados pelo usuário
    for (int i = 0; i < qtdade_eventos; i++){
        printf("\n");
        printf("Insira o horário do evento: ");
        scanf("%4[^\n]s",eventos[i].horario);
        while (getchar() != '\n');

        printf("Insira a data do evento: ");
        scanf("%11[^\n]s",eventos[i].data);
        while (getchar() != '\n');

        printf("Insira a descrição do evento: ");
        scanf("%30[^\n]s",eventos[i].compromisso);
        printf("Informações dos eventos salvos!\n");
        while (getchar() != '\n');
    

    }
    //Printando Resultados
    for (int j = 0; j < qtdade_eventos; j++){
        printf("\n");
        printf("Evento %d",j);
        printf("\nHorário: %s",eventos[j].horario);
        printf("\nData: %s",eventos[j].data);
        printf("\nDescrição: %s",eventos[j].compromisso);
        printf("\n");
    }
    
    return 0;

}