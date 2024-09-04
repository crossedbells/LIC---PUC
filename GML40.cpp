//GML40 - Matriz unidimensional (vetor ou array)
/*Gabriel Mechi Lima - 10/04/2024
Entrar com 12 numeros inteiros e DEPOIS apresenta-los
na ordem de entrada e em ordem inversa*/

#include<iostream>
main()
{
	int n[12];          //reserva espaço para 12 numeros inteiros
	                  //(indexados de 0 a 11)
	                  
	int i; //entrada dos numeros
	
	for(i=0; i < 12; i++)
	{
		
		printf("%d Digite um numero inteiro qualquer:    ", i+1);
		scanf("%d", &n[i]);			
	}
	
	//apresentação dois numeros na ordem de entrada
	
	printf("\nEm ordem de entrada\n");
	for(i=0; i < 12; i++)
	    printf("%d\t", n[i]);
	
 	    printf("\n");
	
	printf("\nEm ordem inversa de entrada\n");
	for(i=11; i >= 0; i--)
	    printf("%d\t", n[i]);
	
	    printf("\n");
	
	
	
	
	
	
	
}