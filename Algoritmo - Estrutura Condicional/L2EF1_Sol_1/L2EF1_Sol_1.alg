Inicio
   Real : SalFunc, SalFuncReaj;
   Leia(SalFunc);
   Se SalFunc <= 300 Então
      SalFuncReaj <- (0.35 * SalFunc) + SalFunc;
   Senão
      SalFuncReaj <- (0.15 * SalFunc) + SalFunc;
   Escreva(SalFuncReaj);   
Fim
