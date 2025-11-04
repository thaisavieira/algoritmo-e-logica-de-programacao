#include <stdio.h>

void main (void)
{
    int  NumConta;
    int  LeitAnterior, LeitAtual, Consumo;
    float  ValConta;
    printf("Digite o seu número da conta: ");
    scanf("%i", &NumConta);
    printf("Digite a leitura anterior: ");
    scanf("%i", &LeitAnterior);
    printf("Digite a leitura atual: ");
    scanf("%i", &LeitAtual);
    Consumo = LeitAtual - LeitAnterior;
    ValConta = Consumo * 0.25;
    printf("Consumo de energia foi de: %i Kw/h \n", Consumo);
    printf("O valor da sua conta é: R$ %.2f \n", ValConta);
}