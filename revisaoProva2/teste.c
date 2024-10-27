#include <stdlib.h>
#include <stdio.h>


int main( void )
{
    /* Vetor de entrada com elementos de valor duplicado */
    int vetor[5] = { 2, 10, 4, 10, 2};

    /* Vetor de saida */
    int saida[5];

    int i, j, n = 0;
    int tam = sizeof(vetor) / sizeof(int);

    /* Exibe Vetor de Entrada */
    printf("Antes: ");
    for( i = 0; i < tam; i++ )
        printf("%d ", vetor[i] );
    printf("\n");

    /* Remove elementos com valor duplicado */
    for( i = 0; i < tam; i++)
    {
        printf("ite i %d \n",i);
        printf("tbm n: %d\n",n);
        for( j = 0; j < n; j++ )
        {
            printf("ite j %d \n",j);
            if( vetor[i] == saida[j] ){
                printf("entrou\n");
            
                break;
            }
        }

        if( j == n )
        {
            saida[n] = vetor[i];
            n++;
        }
    }

    /* Exibe Vetor de Saida */
    printf("Depois: ");
    for( i = 0; i < n; i++ )
        printf("%d ", saida[i] );
    printf("\n");

    return 0;
}