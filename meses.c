/*
2) Escreva um programa que indique o número de dias existentes em um 
mês. 

Número de dias |          Mês 
  28           |           02 
  30           |      04, 06, 09, 11 
  31           | 01, 03, 05, 07, 08, 10, 12 

------------------------------------------------------------------------- 
*/
#include <stdio.h>
int main(){
  int mes;

  printf("Digite o número do mês: ");
  scanf("%d", &mes);
  int meses_des[] = {1,2,3,4,5,6,7,8,9,10,11,12};
  int meses_dias[]= {31,31,28,31,30,31,30,31,31,30,31,30,31};

  printf("%d\n",meses_dias[mes]);

  
}