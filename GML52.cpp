//GML52 - Função fatorial
/*Gabriel Mechi Lima - 07/05/2024

Implementar a função fatorial(N)
onde N é um numero inteiro entre 1 e no maximo 12
fatorial de N:    N! = N * (N-1) * (N-2) * (N-3) *.....* 1
Por definição 0! = 1
Testar a função reciclando o programa (sair apos digitar zero) */

#include<stdio.h>

int Fatorial(int n);  //prototipo da função

main()
{
	int N;
	do{
		printf("\nDigite um numero inteiro (maximo 12 e 0 para sair):     ");
		scanf("%d", &N);
		if(N == 0)
		   break;    //sai fora do loop
		
		if(N < 0 || N > 12)
		{
			printf("Numero invalido; Digite um entre 0 e 12\n");
			continue;  //retorna ao inicio do loop
			
		}
		
		printf("Fatorial de %d = %d\n", N, Fatorial(N));
		
		
	}
	
	
	while (N != 0);
	
	
}

int Fatorial(int n)
{
	int fat = 1;
	
	for(int i = n; i >= 1; i--)
	    fat = fat * i;
	return fat;
	
	
	/* if(n <= 1)
	      return 1;
	    else
	      return n * FatorialR(n-1)
	      
	      OUTRA FORMA DE FAZER */
	
	
	
}
