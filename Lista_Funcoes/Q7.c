/*Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do
usuário e retornar as três palavras. A função main deve imprimir essas três palavras.*/
#include <stdio.h>

     struct {
  char letras[15];
}palavras[3];


void ler3letras()
{
  
  for(int i =0;i<3;i++){
    fgets(palavras[i].letras,14,stdin);
  }
}

int main()
{
  ler3letras();
  for(int i =0;i<3;i++){
    puts(palavras[i].letras);
  }
}

  
   


    
