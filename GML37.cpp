//GML37 - Fibonacci
//Gabriel Mechi Lima - 08/04/2024
/*Apresentar os 30 primeiros numeros da serie de fibonacci*/

#include<iostream>
main()
{
	int n, z, count, soma;
	n = 0;
	z = 1;
	
	printf("Serie de fibonacci\n");
	printf("%d\t %d\t", n, z);
	
	for(count = 3; count <= 30; count++)
	{
	  soma = n + z;
      printf("%d\t", soma);

	  z = n;
	  n = soma;
	
	
	


    }
	
	
	

	
	
	
}