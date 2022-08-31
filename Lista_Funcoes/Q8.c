/*Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do
cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve imprimir os dados do cliente.*/
#include <stdio.h>

struct dados{
  char nome[50];
  char dataNascimento[15];
  char sexo[15];
  char cpf[15];
  } pessoas[2];

void cadastrarCliente()
{

  for(int i=0;i<2;i++){
  
    printf("Nome: ");
    fgets(pessoas[i].nome,49,stdin);
  
    printf("Data de Nascimento: ");
    fgets(pessoas[i].dataNascimento,14,stdin);

    printf("Sexo: ");
    fgets(pessoas[i].sexo,14,stdin);

    printf("CPF: ");
    fgets(pessoas[i].cpf,14,stdin);
  }
}
  
  int main(void) 
{
    cadastrarCliente();
     for(int i=0;i<2;i++){
  
    printf("\nNome: ");
    puts(pessoas[i].nome);

    printf("Data de Nascimento: ");
    puts(pessoas[i].dataNascimento);

    printf("Sexo: ");
    puts(pessoas[i].sexo);

    printf("CPF: ");
    puts(pessoas[i].cpf);
  }
}