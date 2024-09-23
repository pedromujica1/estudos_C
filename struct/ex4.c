#include <stdio.h>
#include <string.h>

int main(){
    struct aluno{
        char nome[20];
        char num_matricula[5];
        float nota_prova1;
        float nota_prova2;
        float nota_prova3;
        float media;
        char situacao[10];
    };
    //Redefinindo inicialização do struct
    typedef struct aluno aluno;
    //Salvando struct em uma array
    aluno dados[5];
    
    //Definindo Variáveis
    float maior_p1 = 0.0;
    float menor_media = 100.0;
    float maior_media = 0.0;
    //Cada valor do vetor vai armazenar a posição do
    //aluno com maior nota na prova 1
    //aluno com maior media
    //aluno com menor media
    int indexes[3];

    //Inserindo dados
    for (int i = 0; i < 5; i++){
        printf("\n");
        printf("Digite seu nome: ");
        scanf("%20[^\n]s",dados[i].nome);
        while (getchar() != '\n');

        printf("Digite seu número de matrícula: ");
        scanf("%5[^\n]s",dados[i].num_matricula);
        while (getchar() != '\n');

        printf("Digite a nota da primiera prova: ");
        scanf("%f",&dados[i].nota_prova1);
        if (dados[i].nota_prova1 > maior_p1){
            maior_p1 = dados[i].nota_prova1;
            indexes[0] = i;
        }
        while (getchar() != '\n');

        printf("Digite a nota da segunda prova: ");
        scanf("%f",&dados[i].nota_prova2);
        while (getchar() != '\n');

        printf("Digite a nota da terceira prova: ");
        scanf("%f",&dados[i].nota_prova3);
        while (getchar() != '\n');

        dados[i].media = (dados[i].nota_prova1 + dados[i].nota_prova2 + dados[i].nota_prova3) / 3.0;
        if (dados[i].media > maior_media){
            maior_media = dados[i].nota_prova1;
            indexes[1] = i;
        }
        if (dados[i].media < menor_media){
            menor_media = dados[i].media;
            indexes[2] = i;
        }

        //Situação
        if (dados[i].media >= 6.0){
            strcpy(dados[i].situacao,"Aprovado");
        } else {
            strcpy(dados[i].situacao,"Reprovado");
        }
    }
    
  
    for (int i = 0; i <5;i++){
        printf("\n");
        printf("Aluno %d:\n",i+1);
        printf("Nome: %s\n",dados[i].nome);
        printf("Número de matrícula: %s\n",dados[i].num_matricula);
        printf("Nota da primeira prova %.2f\n",dados[i].nota_prova1);
        printf("Nota da segunda prova %.2f\n",dados[i].nota_prova2);
        printf("Nota da terceira prova %.2f\n",dados[i].nota_prova3);
        printf("Média: %.2f\n",dados[i].media);
        printf("Situação do aluno: %s\n",dados[i].situacao);
        printf("--------------------------------");
    }
    printf("\nAluno com maior nota na prova 1: %s\n",dados[indexes[0]].nome);
    printf("Aluno com maior média: %s\n",dados[indexes[1]].nome);
    printf("Aluno com menor média: %s\n",dados[indexes[2]].nome);    
}