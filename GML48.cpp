//GML47 - Função com retorno
/*Gabriel Mechi Lima - 24/04/2024
Criar uma funçao que caluca a terceira potencia de um numero inteiro
recilcar o programa saindo ao digitar zero*/

#include<stdio.h>
int fterceira(int num); //prototipo da função

int main()
{
	int n;
	
	do
	{
		printf("\nDigite um numero inteiro (0 para sair):   ");
		scanf("%d", &n);
		
		if (n != 0)
		    printf("A terceira potencia de %d e %d\n", n, fterceira(n));
		    
		
	}
	while (n != 0);
	

}

//definição da função
int fterceira(int num)
{
	return num*num*num;
}