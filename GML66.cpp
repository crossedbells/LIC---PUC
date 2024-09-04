//GML66 - Funções usando matriz bidimensional
/*Gabriel Mechi Lima - 22/05/2024
Criar uma matriz de 10 linhas x 20 colunas
com numeração sequencial a partir de 1 
criar uma funcao que apresenta essa matriz na tela 
criar uma funcao que duplica todos os valores da matriz
criar uma funcao que zera todos os numero divisiveis  
reapresentar a matriz apos cada operaçao 
este é um exemplo de passagem de argumento POR REFERENCIA
matrizes sempre sao passadas por referencia 
*/

#include<iostream>

void mostrarMat(int mat[10][20]);
void duplicarMat(int mat[10][20]);
void zeroMat(int mat[10][20]);

main()
{
	int mat[10][20];
	int l, c;               //linha && coluna
	int n = 1;
	
	for(l=0; l<10; l++)
      for(c=0; c<20; c++)
	  {
	   mat[l][c] = n;
	   n++;	
	  }	
	
	mostrarMat(mat);      //aqui matriz é o endereço do primeiro elemento: &matriz[0][0]
    duplicarMat(mat);     //esse endereço é passado para as funções POR REFERENCIA   !
    mostrarMat(mat);
	zeroMat(mat);
	mostrarMat(mat);
}
//apresenta a matriz
void mostrarMat(int m[10][20])   //aqui m é uma referencia a matriz (não uma copia)
{
    
	for(int l=0; l<10; l++)
	   {
	   for(int c=0; c<20; c++)
	   printf("%4d ", m[l][c]);
	   printf("\n");
	   }
	   
	printf("\n");
}

void duplicarMat(int m[10][20])
{
    
	for(int l=0; l<10; l++)
	   for(int c=0; c<20; c++)
        m[l][c] =  m[l][c] *  2; //= mat [l][c];
	   
	   	
}

void zeroMat(int m[10][20])
{
    
	for(int l=0; l<10; l++)
	   {
	   for(int c=0; c<20; c++)
        if(m[l][c] % 9 == 0)
            m[l][c] = 0;
       }
	   	
}

