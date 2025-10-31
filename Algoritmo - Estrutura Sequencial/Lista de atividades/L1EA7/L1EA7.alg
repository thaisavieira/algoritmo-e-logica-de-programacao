Inicio
   Inteiro : Numero, NumInv, Alg1, Alg2, Alg3, Alg4;   
   Leia(Numero);
   Alg1 <- Numero div 1000;
   Alg2 <- (Numero div 100) mod 10;
   Alg3 <- (Numero mod 100) div 10;
   Alg4 <- Numero mod 10;
   NumInv <- (Alg4 * 1000) + (Alg3 * 100) + (Alg2 * 10) + Alg1;
   Escreva(NumInv);  
Fim