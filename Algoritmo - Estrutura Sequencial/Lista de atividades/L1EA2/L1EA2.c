#include <stdio.h>

void main (void)
{
    int  QtdeAluMasc, QtdeAluFem;
    float  PorcMasc, PorcFem;
    printf("Digite a quantidade de alunos: ");
    scanf("%i", &QtdeAluMasc);
    printf("Digite a quantidade de alunas: ");
    scanf("%i", &QtdeAluFem);
    PorcMasc = (float) QtdeAluMasc/(QtdeAluMasc+QtdeAluFem) * 100;
    PorcFem = (float) QtdeAluFem / (QtdeAluFem+QtdeAluMasc) * 100;
    printf("Porcentagem de alunos: %.1f%%\n", PorcMasc);
    printf("Porcentagem de alunas: %.1f%%\n", PorcFem);
}