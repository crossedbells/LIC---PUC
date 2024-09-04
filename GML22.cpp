//GML22 - Dias da semana - comando switch
//Gabriel Mechi Lima - 27/03/2024
/*Entrar com um numero inteiro qualquer
indicar o dia da semana
1 = domingo, 2 - segunda, 3 =- terca, etc;
caso necessario, indicar numero invalido
usar o comando switch*/

#include<iostream>

main()
{
	int dia;
	
	printf("Digite o dia da semana (1 a 7):     ");
	scanf("%d", &dia);
	
	switch (dia)
	{
		case 1:
			printf("Domingo\n");
			break;
	    case 2:
			printf("Segunda\n");
			break;
		case 3:
			printf("Terca\n");
			break;
		case 4:
			printf("Quarta\n");
			break;
		case 5:
			printf("Quinta\n");
			break;
		case 6:
			printf("Sexta\n");
			break;
		case 7:
			printf("Sabado\n");
			break;
		default:	 
		    printf("Caso ivalido bzzzt\n");
	
	
	}

	
	system("pause");	
	
}