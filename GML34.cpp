//GML34 - Contagem de multiplos de 6
//Gabril Mechi Lima - 03/04/2024
/*Apresentar os 100 primeiros multiplos de 6
DICA: iniciar pelo proprio numero 6*/

#include<iostream>
main()
{
    int n, cont;
    n = 6;
    
    for(cont = 1; cont <= 100; cont++)
    {
    	printf("%d\t", n);
    	n = n + 6;
    	
	}
		
	
}






/*int i;
	
	printf("\nContagem dos 100 primeiros numeros de 6\n");
	for(i=6; i <= 600; i= i + 6)
	   printf("%d\t", i);
	printf ("\n");*/