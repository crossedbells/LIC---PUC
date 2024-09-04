//GML59 - Matriz bidimensional - passagem para função
/*Gabriel Mechi Lima - 14/05/2024
Criar uma matriz com 5  linhas x 10 colunas 
com numeração sequencial a partir de 1
criar uma funçao para a apresentaçao da matriz
criar uma outra funçao que dobra todos esses valores da matriz
apresentar novamente a matriz agora com os valores duplicados 
*/

#include<stdio.h>

void fMostra(int M[5][10]);
void fDobra(int M[5][10]);

main()
{
	int mat[5][10];  //reserva espaço para 5 * 10 = 50 numeros inteiros
	int i, j;     //i = linha e j = coluna 
	int n = 1;
	
	for(i=0; i<5; i++)
	    for(j=0; j<10; j++)
        {
		mat[i][j] = n;
		n++;
		}	
	
	//o nome da matriz SEM suas dimensoes, representa o endereço do primeiro elemento
	//no cas0 de matriz temos: mat é o mesmo que &mat[0][0]
	
	fMostra(mat);   //aqui estamos passando o ENDEREÇO da matriz para uma função
	fDobra(mat);
	printf("\nA matriz original foi dobrada para:\n ");
	fMostra(mat);
	

}

//funções

void fMostra(int M[5][10])
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<10; j++)
		  printf("%2d ", M[i][j]);
		printf("\n");
	}
	
	printf("\n\n");

}

void fDobra(int M[5][10])   //dobra os valores da matriz
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<10; j++)
		M[i][j] = M[i][j]*2;
	
	}
	
	printf("\n\n");

}