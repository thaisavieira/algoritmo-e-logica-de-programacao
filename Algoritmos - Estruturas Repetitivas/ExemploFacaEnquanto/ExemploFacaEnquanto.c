#include <stdio.h>


void main (void)
{
    int  Idade, TotalDias;
    char Continua;

    do{
        printf("Digite a sua idade: ");
        scanf("%i",&Idade);
        TotalDias = Idade*365;
        printf("Sua idade em dias: %i\n", TotalDias);
        printf("Deseja continuar? [S] ou [N]\n");
        scanf(" %c", &Continua);
    } while(Continua == 'S' || Continua == 's');
}
