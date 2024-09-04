//GML30 - Contagem do-while
/*Gabriel Mechi - 02 /04/2024      

Incrementar o programa 17 com do-while
*/


#include<iostream>
main()
{
	int a, b;
	
	do {
	printf("Digite 2 numeros inteiros separados por espaco(zeros para sair):  ");
	scanf("%d %d", &a, &b);
	
	if(a == b)
	   printf("Sao iguais\n");
	else 
	{
		if(a>b)
		   printf("%d e maior\n ", a);
		else if(b>a)
		   printf("%d e maior\n ", b);   
		
	}
	
		}
	
	/*if(a>b)
	  printf("%d e maior",a);
	else if(b>a)
	  printf("%d e maior",b);
	else if(a=b)
	  printf("Sao iguais ");*/
	  
	 while( a != 0 || b != 0);
	 	
	
	
}