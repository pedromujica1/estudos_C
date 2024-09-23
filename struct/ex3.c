#include <stdio.h>
#include <string.h>

int main(){
    struct aluno_universidade{
        char nome[20];
        char num_matricula[5];
        char curso[20];
    };
    //Redefinindo inicialização do struct
    typedef struct aluno_universidade aluno_universidade;
    //Salvando struct em uma array
    aluno_universidade info_alunos[5];
    //Inserindo dados
    for (int i = 0; i < 5; i++){
        printf("\n");
        printf("Digite seu nome: ");
        scanf("%20[^\n]s",info_alunos[i].nome);
        while (getchar() != '\n');

        printf("Digite seu número de matrícula: ");
        scanf("%5[^\n]s",info_alunos[i].num_matricula);
        while (getchar() != '\n');

        printf("Digite seu curso: ");
        scanf("%20[^\n]s",info_alunos[i].curso);
        while (getchar() != '\n');
    }
    //Imprimindo na tela os 3 alunos salvos no array
    for (int i = 0; i <5;i++){
        printf("\n");
        printf("Aluno %d:\n",i+1);
        printf("Nome: %s\n",info_alunos[i].nome);
        printf("Número de matrícula: %s\n",info_alunos[i].num_matricula);
        printf("Curso: %s\n",info_alunos[i].curso);
        printf("--------------------------------");
    }
    
}