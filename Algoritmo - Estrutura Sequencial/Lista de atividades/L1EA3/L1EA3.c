#include <stdio.h>

void main (void)
{
    float  CompTer, LargTer, ValPagar;
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &CompTer);
    printf("Digite a largura do terreno: ");
    scanf("%f",&LargTer);
    ValPagar = (CompTer*LargTer)*13;
    printf("O valor total a pagar é: R$ %.2f\n", ValPagar);
}