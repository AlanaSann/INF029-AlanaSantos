//Faça um programa que leia 10 números do usuário e informe quais deles são primos. Além disso, mostre a soma de todos os números primos existentes.

#include <stdio.h>
int
main ()
{
  int numero[10], i, soma = 0;
  for (i = 0; i < 10; i++)
    {
      printf ("\nDigite um numero: ");
      scanf ("%d", &numero[i]);
    }
  for (i = 0; i < 10; i++)
    {
      if (numero[i] % 2 == 1)
	{
	  printf ("\n o numero %d C) primo", numero[i]);
	  soma = soma + numero[i];
	}
    }
  printf ("\n%d", soma);
}

