#include <stdio.h>

void main (void)
{
    int  HorarioEnt, HorarioSai, TempEmpresa, hhEnt, mmEnt,hhSai, mmSai, TotMin;
    printf("Digite o horário de entrada no formato hhmm: ");
    scanf("%i", &HorarioEnt);
    printf("Digite o horário de saída no formato hhmm:  ");
    scanf("%i", &HorarioSai);
    hhEnt = HorarioEnt / 100;
    mmEnt = HorarioEnt % 100;
    hhSai = HorarioSai / 100;
    mmSai = HorarioSai % 100;
    TotMin = (hhSai*60+mmSai) - (hhEnt*60+mmEnt);
    TempEmpresa = (TotMin/60*100) + (TotMin % 60);
    printf("Tempo que o empregado ficou na empresa (hhmm): %i \n", TempEmpresa);

}