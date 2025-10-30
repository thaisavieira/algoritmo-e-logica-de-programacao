#include <stdio.h>

void main (void)
{
    float  PrecUnic, QtdeVend, ValPagar;
    printf("Digite o preco e a quantidade vendida: ");
    scanf("%f %f", &PrecUnic, &QtdeVend);
    ValPagar = PrecUnic * QtdeVend;
    printf("Valor a pagar: R$ %.2f\n",ValPagar );
}