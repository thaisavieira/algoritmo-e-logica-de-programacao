#include <stdio.h>

void main (void)
{
    float  SalFixo, ValVendas, ValComissao, SalFinal;
    printf("Digite o salário fixo: ");
    scanf("%f", &SalFixo);
    printf("Digite o valor das vendas: ");
    scanf("%f", &ValVendas);
    ValComissao = ValVendas * 0.04;
    SalFinal = SalFixo + ValComissao;
    printf("O valor da comissão é de: R$ %.2f \n", ValComissao);
    printf("O valor do salário final é de: R$ %.2f \n", SalFinal);
}