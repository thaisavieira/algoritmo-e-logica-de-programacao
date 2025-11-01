#include <stdio.h>

void main (void)
{
    int  HHMMSS, TotSegundos;
    printf("Insira hora no formato HHMMSS: ");
    scanf("%i",&HHMMSS);
    TotSegundos = (HHMMSS / 10000) * 3600 + (HHMMSS % 10000 / 100) * 60 + (HHMMSS % 10000 %100);
    printf("Conversão para segundos: %i \n",TotSegundos);
}