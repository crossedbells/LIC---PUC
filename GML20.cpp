//GML21 - Digitar ano bissexto
/*Gabriel Mechi Lima - 26/03/2024

Entrar com um ano no intervalo de 1600 a 5000
dizer se o ano e bissexto ou  nao
Um ano e bissexto quando:
é divisivel por 4 e nao divisivel por 100
OU
e divisivel por 400*/

#include<iostream>

main()
{
	int ano;
	
	printf("Digite o ano:  ");
	scanf("%d", &ano);
	
	if (ano<1600 || ano>5000)
	   printf("Ano invalido\n");
	   
	else
	{
		if (((ano%4 == 0) && (ano%4 != 100)) || (ano%400 == 0))
		  printf("O ano %d e bissexto", ano);
		  
        else 
          printf("O ano %d nao e bissexto", ano);
		
		
	
	}
	
	system("pause");
	
	
	
}