//GML57 - Tabela com cabeçalhos numericos
/*Gabriel Mechi Lima - 08/05/2024
Criar uma tabela de caracteres 'x' 22x26
apresentar a tabela acrescentando uma linha superior
e uma coluna a esquerda com os respectivos indices
*/
//Outras soluções em foto #lic

#include <stdio.h>

main()
{
	char tab[22][26];
	int i, j;               //i = linha j=coluna
	
	   for(i=0; i<22; i++)        //gera a tabela                            
	       for(j=0; j<26; j++)    
	       tab[i][j] = 'x';
	          
       printf("\t");       //linha superior 
       for(j=0; j<26; j++)
		 printf("%2d ", j);
         printf("\n\n");
        
	   
	   for(i=0; i<22; i++)              //apresentaçao da tabela 
	{  printf("%2d\t ", i);
		  for(j=0; j<26; j++) 
		  printf("%c  ", tab[i][j]);
          printf("\n");
    }

}