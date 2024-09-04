//GML56 - Tabela de multiplicação 20 X 20
/*Gabriel Mechi Lima - 07/05/2024
Criar uma tabela 20 X 20 contendo:
em cada linha os multiplos de seu primeiro elemento por ex:
a linha 1 apresentar os elementos: 1, 2, 3,..... 20
a linha 2: 2, 4, 6, 8...... 40
a linha 3: 3, 6, 9..... 60
etc.
e depois de montada apresentar a tabela
*/
 
#include<stdio.h>
main()
{
	int Mat[20][20];       //reserva espaço para 20x20=400 numeros inteiros
	int i, j;           //i=linha j=coluna
	int first;        //primeiro numero da linha-   //equivale ao i
	int n;           //o numero a ser carregado na matriz
	
	for(i=0; i<20; i++)
	{
		first = i + 1;                                          
	    n = first;
	    for(j=0; j<20; j++)    //Outras soluções em foto #lic
	    {
	    	Mat[i][j] = n; 
	    	n = n + first;
	}
    

	}
    //apresentação da matriz
 
 	for(i=0; i < 20; i++)
	    {
	    for(j=0; j < 20; j++) 	
	         printf("%2d ", Mat[i][j]);
		}
 	   printf("\n");
	
	
	
	
}