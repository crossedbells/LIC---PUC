//GML17 - Comparar 2 numeros inteiros
//Gabriel Mechi Lima

/*Entrar com 2 numeros inteiros e dizer se:
sao iguais ou qual o maior e qual o menor
digitar os 2 numeros separados por espaco*/

#include<iostream>
main()
{
	int a, b;
	
	printf("Digite 2 numeros inteiros separados por espaco:  ");
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
	
	/*if(a>b)
	  printf("%d e maior",a);
	else if(b>a)
	  printf("%d e maior",b);
	else if(a=b)
	  printf("Sao iguais ");*/
	  
	system("pause");	
	
	
}