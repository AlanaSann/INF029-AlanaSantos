//FaC'a um programa que leia os dados de nome, idade, sexo e cpf de 5 pessoas. Ao final imprima tudo. Utilize vetor e struct.
#include <stdio.h>
int
main ()
{
  int i;
  struct dados
  {
    char nome[50];
    int idade;
    char sexo[15];
    int cpf;
  } pessoas[5];
  for (i = 0; i < 5; i++)
    {

      printf ("Digite o Nome: ");
      fgets (pessoas[i].nome, 50, stdin);

      printf ("\nDigite a idade: ");
      scanf ("%d", &pessoas[i].idade);
      getchar ();
      printf ("\nDigite seu sexo:");
      fgets (pessoas[i].sexo, 15, stdin);

      printf ("\nDigite seu cpf:");
      scanf ("%d", &pessoas[i].cpf);
      getchar ();

    }
  for (i = 0; i < 5; i++)
    {
      printf ("\n\n --------- Lendo os dados da struct ---------\n\n");
      printf ("Nome ...........: %s", pessoas[i].nome);
      printf ("Idade.....: %d", pessoas[i].idade);
      printf ("Sexo ...: %s", pessoas[i].sexo);
      printf ("cpf ...: %d", pessoas[i].cpf);

    }
}
