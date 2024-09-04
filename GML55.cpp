//GML55 - Matriz bidimensional e variaveis globais
/*Gabriel Mechi Lima - 07/05/2024
Criar uma tabela de 5 linhas X 20 colunas
com numeração a partir de 10 DE 10 EM 1O
e então, apresenta-la na tela
usa variaveis globais para a quantidade de linhas e colunas
*/
 
#include<stdio.h>
 //variaveis globais (ANTES do main())
 
 int QTLINHAS = 10;
 int QTCOLUNAS = 20;
 
 /*outro modo de variavel global:
 Sem definição do tipo nem como uma atribuição usando '='
 #define QTLINHAS 10
 #define QTCOLUNAS 20
*/
 
 main()
 {
 	int Mat[QTLINHAS][QTCOLUNAS];              //reserva espaço para QTLINHAS * QTCOLUNAS = QTLINHAS 
 	int i, j;                    //i=linha j=coluna
 	int n = 10;
 	
 	for(i = 0; i < QTLINHAS; i++)                 //linhas  de 0 a 4
       for(j = 0; j < QTCOLUNAS; j++)                //colunas de 0 a 9
	    {
		 Mat[i][j] = n;
		 n = n + 10;
		} 	
 	
//apresentação da matriz
 	for(i=0; i < QTLINHAS; i++)
	    {
	    for(j=0; j < QTCOLUNAS; j++) 	
	         printf("%4d\t", Mat[i][j]);
		}
 	   printf("\n");
 	   
 	
 	
 	
 	
 	
 	
 	
 }