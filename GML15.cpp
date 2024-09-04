//GML15 - Teste par ou impar
//Gabriel Mechi Lima - 20/03/2024

#include<iostream>
main()
{
	int N;
	printf("Digite um numero inteiro:   ");
	scanf("%d", &N);
	
	if(N % 2 == 0)
	     printf("%d PAR\n",N);
    else 
	     printf("%d IMPAR\n",N);	
	
	system("pause");
	
}