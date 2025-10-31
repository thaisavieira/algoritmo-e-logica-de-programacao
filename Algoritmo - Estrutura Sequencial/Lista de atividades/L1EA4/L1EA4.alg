Inicio
  Real : QtdeHorTrab, QtdeHorExtra, SalMin, 
         ValHorTrab, ValHorExtra, SalFinal;  
  Leia(QtdeHorTrab, QtdeHorExtra, SalMin);
  ValHorTrab <- 0.075 * SalMin;
  ValHorExtra <- 0.15 * SalMin;
  SalFinal <- (QtdeHorTrab * ValHorTrab) + (QtdeHorExtra * ValHorExtra);
  Escreva(SalFinal);
Fim