#include <stdio.h>

void main (void)
{
   float  PesoKg, PesoGr;
   printf("Digite o seu pelo em kilos: ");
   scanf("%f", &PesoKg);
   PesoGr = PesoKg * 1000;
   printf("O seu peso em kilos convertido para gramas é: %.2f g \n", PesoGr);
}
