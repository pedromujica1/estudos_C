/* 

1) Escreva um programa que leia o código de um determinado produto e 
mostre a sua classificação. Utilize a tabela abaixo como referência: 

Código | Descrição 
   1   | Alimento não-perecível 
   2   | Alimento perecível 
   3   | Vestuário 
   4   | Limpeza 

------------------------------------------------------------------------- 
*/
#include <stdio.h>

int main(){
  int codigo;

  printf("Digite o código do produto: ");
  scanf("%d", &codigo);

  switch(codigo){
    case 1:
      printf("Alimento não-perecível.\n");
      break;
    case 2:
      printf("Alimento perecível.\n");
      break;
    case 3:
      printf("Vestuário.\n");
      break;
    case 4:
      printf("Limpeza.\n");
      break;
    default:
      printf("A descrição do produto não foi encontrada!.\n");
      break;
  }
  return 0;
}
/*

4) Crie um software para recepção de um hotel que peça pro cliente 
inserir o código da opção desejada, que ele insira seu nome e se 
a opção não for a 1 pergunte qual o número do quarto e posteriormente 
imprima uma mensagem para o pessoal da recepção.  

ex: o cliente "Nome_Cliente" do quarto "Num_Quarto" solicitou 
"Opção_Desejada" 

Codigo   |   Opção 
  1      |   Fazer Check-in 
  2      |   Serviço de quarto 
  3      |   Fazer pedido 
  4      |   Solicitar outros Serviço 

------------------------------------------------------------------------- 


5) Suponha que você esteja desenvolvendo um programa para o caixa da  
mercearia do seu bairro. Esse programa deve ser capaz de pesquisar o 
valor unitário de um produto do comércio recebendo como entrada apenas o  
código identificador dele. Para isso criou a seguinte tabela: 

Cod_Produto   |   Nome_Produto      |   Valor_Produto 
    1         |    Arroz            |       29.90 
    2         |    Feijão           |       7.99    
    3         |    Bolacha          |       1.75     
    4         |    Copo Americano   |       0.99 
    5         |    Morangos         |       6.25 
    6         |    Cadeira de Praia |       65.45 
    7         |    Pão Francês      |       0.89 
    8         |    Coca-Cola        |       8.35 
    9         |    Pão de queijo    |       1.51 
    10        |    Café             |       15.86 

------------------------------------------------------------------------- 

6) Um banco concederá um crédito especial aos seus clientes, variável com 
o saldo médio no último ano. Faça um algoritmo que leia o saldo médio de um 
cliente e calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem 
informando o saldo médio e o valor do crédito. 

Saldo médio Percentual 

de 0 a 200 nenhum crédito 
de 201 a 400 20% do valor do saldo médio 
de 401 a 600 30% do valor do saldo médio 
acima de 601 40% do valor do saldo médio 

------------------------------------------------------------------------- 

7) Crie um software que diga se o número do tipo inteiro é unidade, 
dezena, centena, unidade de milhar, dezena de milhar, centena de milhar ou milhão 

------------------------------------------------------------------------- 

8) Faça um programa que receba 4 notas, calcule e mostre a média 
aritmética e mensagem que está na tabela a seguir: 

0,0 – 4,9  Reprovado 
5,0 – 6,9  Exame 
7,0 – 10,0 Aprovado 

------------------------------------------------------------------------- 

9) Leia o código de um determinado produto e mostre sua classificação. 
Utilize a seguinte tabela como referência: 

Código    |  Classificação 
1         |  Alimento não-perecível 
2, 3 ou 4 |  Alimento perecível 
5 ou 6    |  Vestuário 
7         |  Higiene Pessoal 
8 até 15  |  Limpeza e Utensílios Domésticos 
Qualquer  |  outro código Código inválido 

------------------------------------------------------------------------- 

10) O cardápio de uma casa de lanches é dado pela tabela abaixo: 

Código | Produto_Preço     | Valor 
100    |  Cachorro quente  | R$ 1,70 
101    |  Bauru Simples    | R$ 2,30 
102    |  Bauru com ovo    | R$ 2,60 
103    |  Hamburguer       | R$ 2,40 
104    |  Cheeseburguer    | R$ 2,50 
105    |  Refrigerante     | R$ 1,00 

Crie um software que apresente os códigos e opções 
quando o cliente digitar o código apresente o valor 
do produto. 

*/ 
