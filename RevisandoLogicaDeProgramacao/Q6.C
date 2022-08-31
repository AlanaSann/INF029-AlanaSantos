//6-Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou menorO programa deve repetir essa ação até que uma idade negativa seja informada

#include <stdio.h>
int main ()
{
  int idade;
  do
    {
      printf ("\ndigite sua idade: ");
      scanf ("%d", &idade);
      if (idade < 18)
	{
	  printf ("\nVoce e menor de idade");
	}
      else
	{
	  printf ("\n Voce e maior de idade");
	}
      if (idade <= 0)
	{
	  printf ("\nfinalizando...");
	}
    }
  while (idade > 0);

}

