//7Faça um programa que verifique se um número é primo

#include <stdio.h>
int main()
{
  int numero;
  printf("Digite um numero");
  scanf("%d",&numero);
  if(numero %2 == 1)
  {
    printf("O numero %d é primo",numero);
  }
  else
  {
    printf("O numero não é primo");
  }
}