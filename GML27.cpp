//GML27 - Contagem do-while
/*Gabriel Mechi - 02/04/2024      
Contar de 1600 até 2023 de 10 em 10 
usando tabulação e o comando do-while
*/

#include<iostream>
main()
{
	int n;
	n = 1600;
	
	do //SEMPRE executa o bloco de codigo pelo menos 1 vez
	   //mesmo que a expressão do while for falsa!
	{
		printf("%d\t", n);
		n = n + 10;
		
    }   
	while (n <= 2023);
	
	printf("\n");
	
	
	
	
	
	
	
	
}