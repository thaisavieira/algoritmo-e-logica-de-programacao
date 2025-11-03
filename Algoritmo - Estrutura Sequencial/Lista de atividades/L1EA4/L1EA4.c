#include <stdio.h>

void main (void)
{
    float  QtdeHorTrab, QtdeHorExtra, SalMin, ValHorTrab, ValHorExtra, SalFinal;
    printf("Quantidade de horas trabalhadas: ");
    scanf("%f", &QtdeHorTrab);
    printf("Quantidade de hora extra: ");
    scanf("%f", &QtdeHorExtra);
    printf("Salário mínimo: ");
    scanf("%f", &SalMin);
    ValHorTrab = 0.075 * SalMin;
    ValHorExtra = 0.15*SalMin;
    SalFinal = (QtdeHorTrab*ValHorTrab) + (QtdeHorExtra*ValHorExtra);
    printf("Salário final: R$ %.2f \n", SalFinal);
}
