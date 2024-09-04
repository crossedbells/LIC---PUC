//GML54 - Matriz bidimensional
/*Gabriel Mechi Lima - 07/05/2024
Criar uma tabela de 5 linhas X 10 columns
com numeração sequencial a partir de 1
e então, apresenta-la na tela
*/
 
 #include<stdio.h>
 
 main()
 {
 	int Mat[5][10];              //reserva espaço para 5 * 10 = 50 numeros inteiros 
 	int i, j;                    //i=linha j=coluna
 	int n = 1;
 	
 	for(i=0; i < 5; i++)                 //linhas  de 0 a 4
       for(j=0; j<10; j++)                //colunas de 0 a 9
	    {
		 Mat[i][j] = n;
		 n++;
		} 	
 	
//apresentação da matriz
 	for(i=0; i < 5; i++)
	    {
	    for(j=0; j < 10; j++) 	
	         printf("%4d\t", Mat[i][j]);
		}
 	   printf("\n");
 	   
 	
 	
 	
 	
 	
 	
 	
 }