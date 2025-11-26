Inicio
   Inteiro : RegEsc;
   Real : Nota1, Nota2, Media;
   
   Leia(RegEsc); 
   Enquanto RegEsc > 0 Faça
   Inicio
     Leia(Nota1, Nota2);
     Media <- (Nota1 + Nota2)/2;	 
     Escreva(Media);
     Se Media >= 6 Então	  
        Escreva("Aprovado");
     Senão	  
        Escreva("Reprovado");	  	 
     Leia(RegEsc); 
   Fim
Fim