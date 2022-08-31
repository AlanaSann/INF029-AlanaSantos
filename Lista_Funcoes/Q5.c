/*) Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize
struct para fazer o retorno.*/
#include <stdio.h>
struct {
int numero[3];
}num;
void ler4numeros()
{
  int i;
  for(i=0;i<3;i++){
    scanf("%d",&num.numero[i]);
  }
}
int main()
{
  ler4numeros();
  int i;
  for(i=0;i<3;i++)
    {
    printf("%d ",num.numero[i]);
    }
}
  
   


    
