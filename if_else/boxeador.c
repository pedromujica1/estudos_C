#include <stdio.h> 

int main(){ 

    //Declaração das variáveis 
    float peso; 

    printf("BOXEADOR. Bem vindo ao sistema de classificação de pesos!\n"); 
    //Inserção de dados por meio do usuário 

    printf("Digite o seu peso (KG): "); 

    scanf("%f",&peso); 
    //VERIFICAÇÃO DA CLASSIFICAÇÃO DO ALUNO 

    //IMPRESSÃO DE CLASSIFICAÇÃO 

    if(peso<= 50.80){ 

        printf("BOXEADOR PESO MOSCA\n");
        printf("BOA LUTA! VAI PRECISAR. \n");  

    } 

    else if(peso > 50.80 && peso <= 57.15){ 

        printf("BOXEADOR PESO PENA\n");
        printf("BOA LUTA! MELHOR DO QUE O PESO MOSCA.\n"); 

    }  

    else if (peso > 57.15 && peso<= 61.23) {  

        printf("BOXEADOR PESO LEVE\n");
        printf("BOA LUTA!\n"); 

    }
    else if (peso > 61.23 && peso<= 72.58) {  

        printf("BOXEADOR PESO MÉDIO\n");
        printf("Quase Peso Pesado!\n"); 

    }  
    else if (peso > 90.71) {  

        printf("BOXEADOR PESO PESADO\n");
        printf("Leo Stronda está orgulhoso!\n"); 

    }  


    return 0; 

} 
