//GML28 - Calculo dos cubos com reciclagem
/*Gabriel Mechi - 02/04/2024      
Entrar com um numero inteiro qualquer e apresentar o seu cubo
reciclar o programa saindo somente ao digitar zero
*/

#include<iostream>
main()
{
     int n;
     
     do{
     	printf("\nDigite um numero para encontrar seu cubo (0 para sair):   ");
     	scanf("%d", &n);
     	
     	if(n != 0)
     	printf("O cubo de %d = %d\n", n, n*n*n);
	
	
	 }
     
     while(n != 0);





}