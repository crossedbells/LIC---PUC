//GML16- - Indicar a estacao do ano
//Gabriel Mechi Lima - 20/03/2024

#include<iostream>
#include<ctype.h>

main() 
{
	char est;      //define uma cairavel que pode conter um caracter
	
	printf("Digite uma estacao do ano (P,V,O,I):   ");
	scanf("%c", &est);
	est = toupper(est); //transforma em maiuscula
	
	if(est == 'P')
	  printf("Primavera\n");
	else if(est == 'V')
	  printf("Verao\n");
	else if(est == 'O')
	  printf("Outono\n");
	else if(est == 'I')
	  printf("Inverno\n");
	else
	  printf("Ding ding ding nao existe\n\n");
	
	
	system("pause");
	
	
	
	
	
	
	
	
}