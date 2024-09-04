//GML61 - Estrutura de um grupo de 4 amigos
/*Gabriel Mechi Lima - 15/05/2024
 Criar uma estrutura contendo os seguintes dados de cada amigo
 nome, celular, idade
 o grupo devera ter 4 amigos
 criar uma função que apresenta esses dados
*/

#include<iostream>
#include<stdlib.h>
 void fGrupo(struct stamigo am[4]);
 void fclear();
 
 struct stamigo
{
	char nome[40];
	char celular[12];
	int idade;
	
};    //ou amigos[4];

main()
{
    struct stamigo amigos[4];                           //cria um vetor do tipo struct stamigo (reserva espaço)
    int i;
	 
	 
	do
	{
    for(i=0; i<4; i++)
	{
		printf("\nNome %d: ", i+1);
		gets(amigos[i].nome);                                   //gets(amigos[i].nome);
		
		printf("\nCelular: ");
	    gets(amigos[i].celular);
	
	    printf("\n\tIdade: ");
		scanf("%d", &amigos[i].idade);

        fclear();

	}	
	
	 fGrupo(amigos);                                                                               
	}

   while(1);
}
	
 void fGrupo(struct stamigo am[4])
{  	system("cls");        //LIMPA A TELA
  	printf("\nGrupo de 4 amigos\n");
	printf("+-------------------------------------------------------------------------------------------------------+\n");
    
	for(int n=0; n<4; n++)
	{
		printf("%s\n", am[n].nome);
		printf("Celular:  %s\n", am[n].celular);
		printf("%d anos\n", am[n].idade);

        printf("+-------------------------------------------------------------------------------------------------------+\n");
	}


}
	
void fclear()
{
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n') {}    //while sem fazer nada dentro do mesmo
	                                                           //stdin = standart input (entrada do teclado)
	                                                           //EOF = end of file
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

  	/*printf("+-------------------------------------------------------------------+");
    for(i=0; i<4; i++)
      fGrupo(amigos[i].nome, amigos[i].celular, amigos[i].idade);
	
        }

    while(1);*/
	
