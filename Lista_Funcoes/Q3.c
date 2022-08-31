/*) Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do usuário e imprimir o fatorial dele, ou se não é possível calcular o fatoria*/
#include <stdio.h>
int fatorial (valor)
{
  int fat;
  for(fat=1;valor > 1;valor --){
    fat = fat * valor;
  }
  return (fat);
}
int main(void) 
{
  int n1,resultado;
  printf("Digite um numero: ");
  scanf("%d",&n1);
  
  resultado = fatorial(n1);
  printf("%d",resultado);
}