/*)Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário
e retornar as três letras. A função main deve imprimir essas três letras.*/
#include <stdio.h>
     struct {
  char let[3];
}letras;


void ler3letras()
{
  
  for(int i =0;i<3;i++){
    scanf("%c", &letras.let[i]);
    getchar();
  }
}

int main(){
  ler3letras();
  for(int i =0;i<3;i++){
    printf("%c ", letras.let[i]);
  }
}

  
   


    
