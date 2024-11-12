#include  <stdio.h>

int main(){
    struct livro{
        char autor[10];
        char nome_obra[10];
        int ano_publicacao;
    };
    printf("Insira os dados dos livros!\n");
    typedef struct livro Livro;
    //Declarando struct para salvar dados de 5 livros
    Livro dados[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Digite o nome do autor: ");
        scanf("%[^\n]s",dados[i].autor);
        while (getchar() != '\n');
        
        printf("\n");
        printf("Digite o nome da obra: ");
        scanf("%[^\n]s",dados[i].nome_obra);
        while (getchar() != '\n');

        printf("\n");
        printf("Digite a data de publicação: \n");
        scanf("%d",&dados[i].ano_publicacao);
        while( getchar() != '\n');

        /* code */
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Livro %d\n",i);
        printf("Nome do livro: %s ",dados[i].nome_obra);
        printf("Ano publicação: %d ",dados[i].ano_publicacao);
        printf("Autor do livro: %s ",dados[i].autor);
        printf("\n");
        /* code */
    }
    
    
    

    return 0;
}