Inicio
   Real : SalFunc, SalFuncReaj;
   Leia(SalFunc);
   Se SalFunc <= 300 Então
      SalFuncReaj <- 1.35 * SalFunc;
   Senão
      SalFuncReaj <- 1.15 * SalFunc;
   Escreva(SalFuncReaj);   
Fim