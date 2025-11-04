#include <stdio.h>

void main (void)
{
    int  Numero, NumInv, Alg1, Alg2, Alg3, Alg4;
    printf("Digite um número de 4 algarismos: ");
    scanf("%i", &Numero);
    Alg1 = Numero/1000;
    Alg2 = (Numero/100)%10;
    Alg3 = (Numero%100)/10;
    Alg4 = Numero%10;
    NumInv = (Alg4*1000) + (Alg3*100) + (Alg2*10) + Alg1;
    printf("Seu número inverso: %i \n", NumInv);
}