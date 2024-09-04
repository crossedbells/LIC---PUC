//GML22 - Dias do mes
/*Gabriel Mechi Lima - 26/03/2024

Entrar com o ano entre 1600 e 500 e o mes
dizer quantos dias esse mes tem
considerar que os meses: 4, 6, 9 e 11 possuem 30 dias 
considerar que o mes t2 pode ter 28 ou 29 dias conforme 
teste do ano bissexto 
os meses restantes, possuem todos os 31 dias
dar a memsagem: "No an... o mes ... possui.... dias */

#include <stdlib.h>
#include <stdio.h>

main()
{
	 int mes, dias, ano;
	   printf("Digite o ano:  ");
	scanf("%d", &ano);
	 
	   printf("Digite o mes:  ");
	scanf("%d", &ano);
	  
	if(ano<1600||ano>5000)
	{
	   printf("Ano invalido\n");
	   exit(0);   //saida do programa (funçao da biblioteca stdlib.h)
	   
	if((mes == 4)||(mes == 6)||(mes == 9)||(mes == 11))
	  dias = 30;
	else if (mes == 2)
	   {
	   	if(((ano%4 == 0) && (ano%100 != 0))|| (ano%400 == 0))
	  dias = 29;
	  
	else 
	  dias = 28;
	   	
	   	
   }
	else 
	  dias = 31;
	  
	printf("No ano %d o mes %d possui %d dias\n", ano, mes, dias);
	
	system("pause");	
		
	}




	

	
	
	
	
}