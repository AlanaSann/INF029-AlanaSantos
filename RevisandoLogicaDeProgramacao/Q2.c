// 2FaC'a um programa que leia a idade de duas pessoas e imprima a soma das idades
#include <stdio.h>
int main ()
{
  int i, idade, soma = 0;
  for (i = 0; i < 2; i++)
    {
      printf ("Digite a idade: ");
      scanf ("%d", &idade);
      soma = soma + idade;
    }
  printf ("\nA soma das idades e : %d", soma);
}

