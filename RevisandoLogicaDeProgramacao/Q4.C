//4-Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas sem utilizar variável auxiliar
#include <stdio.h>
int main()
{
  int v1,v2;
  
  printf("digite o valor 1:");
  scanf("%d",&v1);
  
  printf("digite o valor 2:");
  scanf("%d",&v2);
  
  printf(" valor 1: %d \n valor 2: %d", v1,v2);

  v1 = v1 + v2; 
  v2 = v1 - v2;
  v1 = v1-v2;
  
  printf("\n\n valor 1: %d \n valor 2: %d", v1,v2);
 
}