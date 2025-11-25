#include <stdio.h>

void main (void)
{
    int  Numero;
    printf("Digite um número inteiro: ");
    scanf("%i", &Numero);
    if (Numero % 2 == 0)
        printf("O número é par.\n");
    else
        printf("O número é ímpar.\n");
}