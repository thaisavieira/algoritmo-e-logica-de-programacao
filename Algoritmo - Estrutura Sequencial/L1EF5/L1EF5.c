#include <stdio.h>
void main (void)
{
    int  QtdeDias;
    float  ValDupl, TaxaJurDiaria, ValPagar;
    printf("Digite o valor da duplicata: ");
    scanf("%f", &ValDupl);
    printf("Digite o valor da taxa de juros diária: ");
    scanf("%f", &TaxaJurDiaria);
    printf("Digite a quantidade de dias: ");
    scanf("%i", &QtdeDias);
    ValPagar = (TaxaJurDiaria/100 * QtdeDias * ValDupl) + ValDupl;
    printf("Valor total a pagar: R$ %.2f\n", ValPagar);
}