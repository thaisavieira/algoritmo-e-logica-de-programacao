Inicio
   Caracter : TipoInvest;
   Real : ValAplic, ValCorrigido;
   Leia(TipoInvest, ValAplic);   
   Se TipoInvest = "1" Então
      ValCorrigido <- (0.03 * ValAplic) + ValAplic;
   Se TipoInvest = "2" Então
      ValCorrigidol <- (0.04 * ValAplic) + ValAplic;
   Escreva(ValCorrigido);
Fim