//GML26 - Contagem de multiplos
//Gabriel Mechi Lima - 27/03/2024
/*A partir de 250, apresentar os 100 primeiros numeros multiplos de 7
que sao divisiveis por 3 e nao sao impares*/

#include<iostream>
main()
{
   int n, cont;
   n = 250;
   cont = 0; 
   
   while (cont <= 100)
    {
       
	    if(n % 7 == 0 && n % 3 == 0 && n % 2 != 0)
	     {
	     printf("%d\t", n);
	     cont = cont + 1;
         }
    	
     n = n + 1;
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
	}
	
	
	
	
	
	
	
	
	
	
}