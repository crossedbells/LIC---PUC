//GML49 - Função Ppar ou impar
/*Gabriel Mechi Lima - 24/04/2024
Criar uma funçao que verifica se um numero é par ou impar
retornando os caracteres: 'p' se for par ou 'i' se for impar
reciclar o programa saindo ao digitar zero*/

#include<iostream>
char fparimpar(int x); //prototipo de função

main()
{
	int n;
	
	do
	{
		printf("\nDigite um numero inteiro (0 para sair):   ");
		scanf("%d", &n);
		if(n != 0)
		{
			if(fparimpar(n) == 'p')
			   printf("O numero %d eh PAR\n", n);
		    if(fparimpar(n) == 'i')
		       printf("O numero %d eh IMPAR\n", n);
		       
		       
			
			
			
			
			
		}
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}