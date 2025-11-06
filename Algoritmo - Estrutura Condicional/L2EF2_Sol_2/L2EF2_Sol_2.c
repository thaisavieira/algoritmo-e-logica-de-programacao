#include <stdio.h>

void main (void)

{
   char  TipoInvest;
   float  ValAplic, ValFinal;
   printf("Digite o tipo de investimento: ");
   scanf("%c", &TipoInvest);
   printf("Digite o valor da aplicação: ");
   scanf("%f",&ValAplic);
   if (TipoInvest=='1')
      ValFinal = 1.03*ValAplic;
   else
      ValFinal = 1.04 * ValAplic;
   printf("O valor final é: R$ %2.f \n", ValFinal);
}