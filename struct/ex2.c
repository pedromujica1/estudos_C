#include <stdio.h>
#include <string.h>

int main(){
    struct aluno{
        char nome[30];
        int idade;
        char endereco[30];
    };
    //Redefinindo inicialização do struct
    typedef struct aluno aluno;
    //Salvando struct em uma array
    aluno dados_alunos[3];
    printf("Bem-vindo alunos!\n");
    printf("--------------------------------");
    printf("\nInsiram seus dados\n");
    //Inserindo dados
    for (int i = 0; i < 3; i++){
        printf("\n");
        puts("Digite seu nome:");
        scanf("%30[^\n]s",dados_alunos[i].nome);
        while (getchar() != '\n');

        puts("Digite sua idade:");
        scanf("%d",&dados_alunos[i].idade);
        while (getchar() != '\n');

        puts("Digite seu endereço:");
        scanf("%30[^\n]s",dados_alunos[i].endereco);
        while (getchar() != '\n');
    }
    //Imprimindo na tela os 3 alunos salvos no array
    for (int i = 0; i <3;i++){
        printf("\n");
        printf("Aluno %d:\n",i+1);
        printf("Nome: %s\n",dados_alunos[i].nome);
        printf("Idade: %d\n",dados_alunos[i].idade);
        printf("Endereço: %s\n",dados_alunos[i].endereco);
        printf("--------------------------------");
    }
    
}