/*Evolua o programa que tem a função cadastrarCliente, para fazer as validações
dos dados. Cada validação deve ser feita em uma função diferente, conforme lista
abaixo. A função cadastrarCliente deve chamar cada uma dessas funções. A função
main deve imprimir se o cadastro foi realizado com sucesso ou se houve erro,
informando onde foi o erro:
• função validarNome: recebe o nome digitado, e valida se nome tem até 20
caracteres; • função validarSexo: recebe o sexo digitado, e valida é um sexo
válido (opções: m e M para masculino; f e F para feminino, o e O para outro). •
função validarCPF: recebe o cpf digitado, e valida é um cpf válido; • função
validarNacimento: recebe o data digitada, e valida é uma data válida.
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dados {
  char nome[50];
  char dataNascimento[15];
  char sexo[2];
  char cpf[12];
} pessoas;
int validarNome(pessoas posicaoPessoa);
int validarDataNascimento(pessoas posicaoPessoa);
int validarSexo(pessoas posicaoPessoa);
int cadastrarCliente();
int validarCPF(pessoas posicaoPessoa);

int main() 
{
  pessoas pessoas;
  switch (cadastrarCliente()) {
  case 0:
    printf("Cadastro realizado!");
    break;
  case -1:
    printf("Cadastro não realizado!");
    break;
  }
}
int validarNome(pessoas posicaoPessoa) 
{
  int validar = 0;
  if (strlen(posicaoPessoa.nome) > 20)
    return -1;
  else {
    return 0;
  }
}
int validarDataNascimento(pessoas posicaoPessoa) 
{
  int dia;
  int mes;
  int ano;

  // Transformar string em inteiro utilizando o valor do 0 em ASCII - o valor do
  // caracter

  dia = (posicaoPessoa.dataNascimento[0] - '0') * 10;
  dia += (posicaoPessoa.dataNascimento[1] - '0');

  mes = (posicaoPessoa.dataNascimento[3] - '0') * 10;
  mes += (posicaoPessoa.dataNascimento[4] - '0');

  ano = (posicaoPessoa.dataNascimento[6] - '0') * 1000;
  ano += (posicaoPessoa.dataNascimento[7] - '0') * 100;
  ano += (posicaoPessoa.dataNascimento[8] - '0') * 10;
  ano += (posicaoPessoa.dataNascimento[9] - '0');
  if ((dia > 31 || dia < 1) || (mes > 12 || mes < 1) ||
      (ano < 1900 || ano > 2022)) {
    return -1;
  } else {
    return 0;
  }
}

int validarSexo(pessoas posicaoPessoa) 
{
  if ((posicaoPessoa.sexo[0] == 'o') || (posicaoPessoa.sexo[0] == 'O') ||
      (posicaoPessoa.sexo[0] == 'f') || (posicaoPessoa.sexo[0] == 'F') ||
      (posicaoPessoa.sexo[0] == 'M') || (posicaoPessoa.sexo[0] == 'm'))
    return 0;
  else
    return -1;
}
int validarCPF(pessoas posicaoPessoa) 
{
  int tam = strlen(posicaoPessoa.cpf);
  for (int i = 0; i < 11; i++) {
    if ((posicaoPessoa.cpf[i] < 47 || posicaoPessoa.cpf[i] > 58) ||
        (tam < 10 || tam > 11))
      return -1;
    else
      return 0;
  }
}

int cadastrarCliente() 
{
  int validar = 0;
  pessoas pessoas;
  printf("Nome: ");
  fgets(pessoas.nome, 49, stdin);

  if (validarNome(pessoas) != 0) {
    printf("Nome inválido!\n");
    return -1;
  }
  printf("Data de Nascimento: ");
  fgets(pessoas.dataNascimento, 14, stdin);
  validarDataNascimento(pessoas);
  if (validarDataNascimento(pessoas) != 0) {
    printf("Data inválida!\n");
    return -1;
  }
  printf("Sexo: ");
  fgets(pessoas.sexo, 14, stdin);
  if (validarSexo(pessoas) != 0) {
    printf("sexo inválido\n");
    return -1;
  }

  printf("CPF: ");
  fgets(pessoas.cpf, 12, stdin);
  if (validarCPF(pessoas) != 0) {
    printf("CPF inválido!\n");
    return -1;
  }

  return 0;
}