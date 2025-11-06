#include <stdio.h>

void main (void)

{
   float  SalFunc, SalFuncReaj;
   printf("Digite o salário do funcionário: ");
   scanf("%f", &SalFunc);
   if (SalFunc <= 300)
      SalFuncReaj = (0.35*SalFunc)+SalFunc;
   else
      SalFuncReaj = (0.15*SalFunc) + SalFunc;
   printf("O salário do funcionário reajustado é de: R$ %2.f \n", SalFuncReaj);
}