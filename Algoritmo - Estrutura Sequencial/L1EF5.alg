Inicio  
  Inteiro : QtdeDias;
  Real : ValDupl, TaxaJurDiaria, ValPagar;
  Leia(ValDupl, TaxaJurDiaria, QtdeDias);
  ValPagar <- (TaxaJurDiaria/100 * QtdeDias * ValDupl) + ValDupl;
  Escreva(ValPagar);
Fim