#include <stdio.h>

void main (void)
{
    float  CompTer, LargTer, QtdeTela;
    printf("Digite o comprimento do terreno: ");
    scanf("%f",& CompTer);
    printf("Digite a largura do terreno: ");
    scanf("%f", &LargTer);
    QtdeTela = 2 * (CompTer+ LargTer);
    printf("A quantidade necesária de tela é: %.2f m \n", QtdeTela);
}