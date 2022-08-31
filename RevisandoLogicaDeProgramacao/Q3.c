//3-Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas
#include <stdio.h>
int main()
{
  int v1,v2,x;
  printf("digite o valor 1:");
  scanf("%d",&v1);

  printf("digite o valor 2:");
  scanf("%d",&v2);
  
  x = v1;
  v1 = v2;
  v2=x;
  printf("valor 1: %d, valor 2: %d", v1,v2);
}