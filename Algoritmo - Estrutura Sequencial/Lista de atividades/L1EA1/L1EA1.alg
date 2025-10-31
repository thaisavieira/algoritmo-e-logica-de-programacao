Inicio
  Inteiro : HHMMSS, TotSegundos;
  Leia(HHMMSS);
  TotSegundos <- (HHMMSS div 10000) * 3600 + (HHMMSS mod 10000 div 100) * 60 + (HHMMSS mod 10000 mod 100);
  Escreva(TotSegundos);
Fim