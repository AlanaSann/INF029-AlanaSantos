/*2) Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores (primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o resultado da subtração.*/
#include <stdio.h>
float subtracao (valor1,valor2,valor3)
{
  float resultado;
  resultado = (valor1 - valor2) - valor3;
  return (resultado);
}
int main(void) 
{
  float n1,n2,n3,resultado;
  printf("Digite um numero: ");
  scanf("%f",&n1);

  printf("Digite um numero: ");
  scanf("%f",&n2);

  printf("Digite um numero: ");
  scanf("%f",&n3);

  resultado = subtracao(n1,n2,n3);
  printf("%2.f - %2.f - %2.f = %2.f",n1,n2,n3,resultado);
}