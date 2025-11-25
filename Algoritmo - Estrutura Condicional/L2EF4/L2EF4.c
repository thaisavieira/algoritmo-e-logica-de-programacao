#include <stdio.h>
#include <string.h>

void main (void)

{
    char Senha[5];
    printf("Digite a sua senha: ");
    scanf("%s", &Senha);
    if (strcmp(Senha, "4531") == 0)
        printf("Acesso permitido.\n");
    else
        printf("Acesso negado.\n");
}