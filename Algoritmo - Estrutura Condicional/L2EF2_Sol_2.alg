Inicio
   Caracter : TipoInvest;
   Real : ValAplic, ValFinal;
   Leia(TipoInvest, ValAplic);   
   Se TipoInvest = "1" Então
      ValFinal <- 1.03 * ValAplic;
   Senão
      ValFinal <- 1.04 * ValAplic;
   Escreva(ValFinal);
Fim