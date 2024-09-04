//GML58 - Matriz bidimensional e suas coordenadas
/*Gabriel Mechi Lima - 08/05/2024
Criar uma matriz de caracteres bidimensional 20 x 30 (linhas  x colunas)
contendo pontos ('.') apresentando os numeros das linhas e colunas
solicitar as coordenadas de um ponto valido no formato: linha, colunas
gravar 'x' nessa posição
consistir se as coodernadas excedem os limites da matriz
reciclar esta operação saindo quando uma das coordenadas for -1
*/
                       
#include<stdio.h>

main()
{
	char mat[20][30];
	int i, j;             //i=linha j=coluna 
	
	//gera a matriz de caracters  
	  for(j=0; j<30; j++)
	      mat[i][j] = '.';
	      
	    
	    
	   //apresentar a matriz
	   //linha superior (numeros das colunas)    
	do
	{
       printf("Digite as coordenadas (linha, coluna) (-1 para sair): "  );                                          
	   scanf("%d %d", &i, &j);
	   mat[i][j] = 'x';
	    if(i == -1 || j == -1)
		  break;
		if(i < 0 || i > 19 || j < 0 || j > 29)
	   {
		  printf("Coordenda invalida!\n");
		  continue;
	   }
	      
	   printf("\t");     
       for(j=0; j<30; j++)
         printf("%2d ", j);
         printf("\n\n");
         
       for(int i=0; i<20; i++)            
	{  printf("%2d\t ", i);
		  for(j=0; j<30; j++) 
		  printf("%c  ", mat[i][j]);
     	  printf("\n");
    }
		
		
	}
	
    while(i != 1 || j != 1);	
	
}
	
	
	
	
	
