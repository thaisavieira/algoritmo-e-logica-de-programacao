#include <stdio.h>

void main (void)
{
float  Nota1, Nota2, Nota3, Nota4, Media;
printf("Digite a nota da prova 1: ");
scanf("%f", &Nota1);
printf("Digite a nota da prova 2: ");
scanf("%f", &Nota2);
printf("Digite a nota da prova 3: ");
scanf("%f", &Nota3);
printf("Digite a nota da prova 4: ");
scanf("%f", &Nota4);
Media = (Nota1+Nota2+Nota3+Nota4)/4;
printf("Sua média é: %2.f. \n", Media);
if (Media >= 5)
    printf("Aluno aprovado.\n");
else
    printf("Aluno reprovado.\n");
}