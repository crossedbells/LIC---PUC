//GML47 - Função sem retorno
/*Gabriel Mechi Lima - 24/04/2024
Criar uma função que calcula o dobro de um numero inteiro
Reciclar o programa saindo ao digitar zero*/

#include<stdio.h>
void fdobro(int num);  //prototipo da função

int main()
{
	int n;
	
	do 
	{
		printf("\nDigite um numero inteiro (0 para sair):    ");
		scanf("%d", &n);
		if(n != 0)
		   fdobro(n);
		
		
	}
	
    while (n != 0);
	
}

//definição da função 
void fdobro (int num)
{
	printf("O dobro de %d eh %d\n", num, num*2);
}