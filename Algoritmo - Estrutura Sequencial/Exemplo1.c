#include <stdio.h>

void main (void)
{
  int  Idade, TotalDias;
  printf("Digite a sua idade: ");            
  scanf("%i", & Idade);
  TotalDias = Idade * 365 ;
    printf("Você viveu aproximadamente %i dias. \n",TotalDias);     
}