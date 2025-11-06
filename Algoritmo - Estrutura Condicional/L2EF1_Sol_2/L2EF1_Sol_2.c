#include <stdio.h>

void main (void)

{
   float  SalFunc, SalFuncReaj;
   printf("Digite o salário do funcionário: ");
   scanf("%f", &SalFunc);
   if (SalFunc<=300)
      SalFuncReaj = 1.35*SalFunc;
   else
      SalFuncReaj = 1.15*SalFunc;
   printf("O salário reajustado do funcionário é: R$ %.2f \n", SalFuncReaj);
}
