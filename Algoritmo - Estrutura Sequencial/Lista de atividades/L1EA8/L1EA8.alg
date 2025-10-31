Inicio
  Inteiro : HorarioEnt, HorarioSai, TempEmpresa, hhEnt, mmEnt, hhSai, mmSai, TotMin;  
  Leia(HorarioEnt, HorarioSai);
  hhEnt <- HorarioEnt div 100;
  mmEnt <- HorarioEnt mod 100;
  hhSai <- HorarioSai div 100;
  mmSai <- HorarioSai mod 100;
  TotMin <- (hhSai * 60 + mmSai) - (hhEnt * 60 + mmEnt);
  TempEmpresa <- (TotMin div 60 * 100) + (TotMin mod 60);
  Escreva(TempEmpresa);
Fim  
  
  