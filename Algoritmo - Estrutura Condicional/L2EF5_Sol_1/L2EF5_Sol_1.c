#include <stdio.h>

void main (void)
{
    int  Numero, Resto;

    printf("Digite um número inteiro: ");
    scanf("%i", &Numero);
    
    Resto = Numero % 2;

    if (Resto == 0)
        printf("O número é par.\n");
    else
        printf("O número é ímpar.\n");
}