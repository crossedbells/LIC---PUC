/*GML - Ativ03 - Consistência de data
Gabriel Mechi Lima 
Programa para verificar uma deterimanada data entrada pelo usuário
Sendo apresentados: 
- dias completos já decoridos desde o início do ano até a data especificada (formato DD/MM/AAAA)

-a quantidades de dias que faltam até o final do ano especificado

- a quantidade total de dias do ano em questão

Sair quando 0
*/

//Verificar programas 38; 28; APAGAR DEPOIS PERDAO SE EU ESQUECER DISSO PROFESSOR!!!!!!!!!!!

#include<stdio.h>

int fAnoBissexto(int a);   //retorna 1 se o ano for bissexto e 0 se não
	
int fDataInvalida(int d, int m, int a); //verifica se uma data é valida indicando qual o erro (dia, mês ou ano)
	
int fDiasInicioAno(int d, int m, int a);  //retorna a quantidade de dias desde o incio do ano até a data inclusive
	
int fDiasFimAno(int d, int m, int a);   //retorna a quantidade de dias ue faltam para o fim do ano, caso necessario, usa a função do 
	


main()
{
	int dia, mes, ano;
	
	do
	{
		printf("Digite uma data no formato DD/MM/AAAA(zeros para sair): ");
		scanf("%d %d %d", &dia, &mes, &ano);
		  if(dia && mes && ano == 0)
		    break;
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	

	while()
	
	
	
	
	
	
}