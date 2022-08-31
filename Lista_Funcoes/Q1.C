/*1) Crie um programa que tenha uma função soma e a função main. A função main deve ler dois
valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A
Função main deve imprimir o resultado da soma.*/
#include <stdio.h>
int soma (valor1,valor2)
{
  int resultado;
  resultado = valor1 + valor2;
  return (resultado);
}
int main(void) 
{
  int n1,n2,resultado;
  printf("Digite um numero: ");
  scanf("%d",&n1);

  printf("Digite um numero: ");
  scanf("%d",&n2);

  resultado = soma(n1,n2);
  printf("%d + %d = %d",n1,n2,resultado);
}