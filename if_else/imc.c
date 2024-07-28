#include <stdio.h>
#include <math.h>

int main(){
  //Variáveis
  double peso, altura,imc;
  
  //Entrada de dados
  printf("DIGITE O PESO (KG): ");
  scanf("%lf",&peso);
  printf("DIGITE A ÁLTURA (METROS): ");
  scanf("%lf",&altura);


  //Cálculo e saída de dados
  imc = peso / pow(altura,2);
  printf("IMC = %.3f\n",imc);
  printf("\n");

  //CLASSIFICAÇÃO IMC
  if (imc < 18.5){
    printf("AVALIAÇÃO: ABAIXO DO NORMAL\n");
    printf("PREOCUPANTE!!\n");
  } else if (imc >= 18.5 && imc < 25){
    printf("AVALIAÇÃO: NORMAL\n");
    printf("PARÁBENS!!!\n");
  } else if (imc >= 25 && imc < 30){
    printf("AVALIAÇÃO: SOBREPESO\n");
    printf("GRAVE MAS NEM TANTO!!!\n");
  } else if (imc >= 30 && imc < 35){
    printf("AVALIAÇÃO: OBESIDADE LEVE\n");
    printf("ATENÇÃO!!!\n");
  } else if (imc >= 35 && imc < 40){
    printf("AVALIAÇÃO: OBESIDADE MODERADA\n");
    printf("SITUAÇÃO GRAVE!!!\n");
  } else if (imc >= 40){
    printf("AVALIAÇÃO: OBESIDADE MÓRBIDA\n");
    printf("EM CONDIÇÕES DE RISCO\n!!!");
  }
  return 0;
    
  
}