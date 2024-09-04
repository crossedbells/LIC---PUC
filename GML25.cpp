//GML25 - multiplos de 9
//Gabriel Mechi Lima - 27/03/2024
/*apresentar a contagem de 0 a 500 com tabulaçao
indicando os numeros de 9 com um "x"*/

#include<iostream>
main()
{
	int n;
	n = 0;
	
	while (n <= 500)

	{
		if (n % 9 == 0)
		  printf("%dx\t", n);
	
	    else 
		  printf("%d\t", n);
	    n = n + 1;
	
	}
	
	printf("\n");
	
	
}
