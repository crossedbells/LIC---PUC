//GML36 - Qualquer tabuada
//Gabriel Mechi Lima - 08/04/2024
/*Solicitar o indicador da tabuada
Apresentar essa tabuada de 0 até 20
recilar o programa saindo com indicador zero*/

#include<stdio.h>
main()
{
	int n, x;
	
    do
	{
	
	printf("\nDigite um numero para encotrar suas tabuada(zeros para sair):  ");
	scanf("%d", &x);
	
	if(x != 0)
	for(n = 1; n <= 20; n++)
	{
	
		printf("%d  x  %d = %d\n", n, x, n*x);
		
		
	}

    }
	
	while(n != 0);
	

	
}