//Faça um programa que calcula o fatorial de um número
#include <stdio.h>
int main()
{
  int numero,fat;
  printf("Digite um numero: ");
  scanf("%d", &numero);
   for (fat = 1; numero >1; numero--)
  {
    fat=fat*numero;
  }
  printf("%d",fat);
}
