#include <stdio.h>

void main (void)
{
    int  Idade, TotalDias;
    printf("Digite a sua idade: ");
    scanf("%i", &Idade);
    while (Idade > 0)
    {
        TotalDias = Idade * 365;
        printf("A sua idade em dias: %i \n", TotalDias);
        printf("Digite a sua idade: ");
        scanf("%i", &Idade);

    }
    
}
