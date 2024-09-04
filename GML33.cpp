//GML33 - Contagem usando "for"
//Gabril Mechi Lima - 03/04/2024
/*Contar de 1 a 100
Contar de 50 a 300 em 3 em 3
Contar de 1000 a 200 decrescente de 5 em 5
utilizar system("pause") entre as contagens*/


#include<iostream>
main()
{
	int i;
	
	printf("\nContagem de 1 a 100\n");
	for(i=1; i <= 100; i++)
	   printf("%d\t", i);
	printf ("\n");
	system("pause");
	
	printf("\nContagem de 50 a 300 de 3 em 3\n");
	for(i=50; i <= 300; i = i+3)
	   printf("%d\t", i);
	printf ("\n");
	system("pause");
	
	printf("\nContagem de 1000 a 200 decrescente de 5 em 5\n");
	for(i=1000; i >= 200; i = i-5)
	   printf("%d\t", i);
	printf ("\n");
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
}