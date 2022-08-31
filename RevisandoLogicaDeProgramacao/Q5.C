//5-Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou menor

#include <stdio.h>
int main()
{
  int idade;
    {
     printf("\ndigite sua idade: ");
     scanf("%d", &idade);
     if(idade< 18)
    {
     printf("Voce e menor de idade");
    }
    else
    {
    printf(" Voce e maior de idade");
    }

    }
}
