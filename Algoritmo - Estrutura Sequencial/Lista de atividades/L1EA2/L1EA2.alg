Inicio
  Inteiro : QtdeAluMasc, QtdeAluFem;
  Real : PorcMasc, PorcFem;
  
  Leia(QtdeAluMasc, QtdeAluFem);
  PorcMasc <- QtdeAluMasc/(QtdeAluMasc+QtdeAluFem) * 100;
  PorcFem <- QtdeAluFem/(QtdeAluMasc+QtdeAluFem) * 100;
  Escreva(PorcMasc, PorcFem);
Fim
