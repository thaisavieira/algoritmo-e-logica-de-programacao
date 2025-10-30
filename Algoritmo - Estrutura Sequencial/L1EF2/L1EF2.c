#include <stdio.h>

void main (void)
{
   int  QtdeDias;
   float   ValDiaria, ValHosped;
   printf("Digite o valor da diária: ");
   scanf("%f", & ValDiaria);
   printf("Digite a quantidade de dias: ");
   scanf("%i", & QtdeDias);
   ValHosped = ValDiaria * QtdeDias;
   printf("Valor da hospedagem: R$ %.2f\n", ValHosped);
}