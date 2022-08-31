/*) Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor para fazer o retorno.*/
#include <stdio.h>
void ler3numeros(int*retornarnumero)
{
int vet[3], i;
  for(i=0;i<3; i++){
  printf("digite um numero: ");
  scanf("%d",&vet[i]);
  retornarnumero[i]=vet[i];}
  
  }

int main(void) 
{
  int vet[3],i;
  ler3numeros(vet);
  for(i=0;i<3; i++){
  printf("%d,",vet[i]);}
}
    