#include <stdio.h>

void main (void)

{
   char  Sexo;
   float  Altura, PesoIdeal;
   printf("Digite o seu sexo (F ou M): ");
   scanf("%c",&Sexo);
   printf("Digite a sua altura: ");
   scanf("%f",&Altura);
   if ((Sexo == 'M') || (Sexo == 'm'))
      PesoIdeal = (72.7*Altura) - 58;
   if ((Sexo == 'F') || (Sexo == 'f'))
      PesoIdeal = (62.1 * Altura) - 44.7;
   printf("O seu peso ideal é: %2.f \n", PesoIdeal);
}