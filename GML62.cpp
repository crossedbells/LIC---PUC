//GML62 - Estrutura de amigos com reciclagem
/*Gabriel Mechi Lima - 20/05/2024
 Criar uma estrutura contendo os seguintes dados de cada amigo
 nome, celular, idade
 o grupo devera ter no máximo 50 amigos
 o programa deve reciclar e sair com nome for apenas um ENTER
 criar uma função que apresenta esses dados
*/

#include<iostream>

 void fGrupo(struct stamigo am[50]);
 void fclear();
 
 struct stamigo
{
	char nome[40];
	char celular[12];
	int idade;
	
};    //ou amigos[50];

main()
{
    struct stamigo amigos[50];                           //cria um vetor do tipo struct stamigo (reserva espaço)
    int i;
	i = 0;
	 
	do
	{
		printf("\nNome %d (ENTER para sair): ", i+1);
		gets(amigos[i].nome);                                   //gets(amigos[i].nome);
	    if(amigos[i].nome[0] == '\0')
	      break; 
	    
		printf("\nCelular: ");
	    gets(amigos[i].celular);
	
	    printf("\nIdade: ");
		scanf("%d", &amigos[i].idade);
        i++;
                                                                  
		fclear();

	}  while(i < 50);
    
     fGrupo(amigos); 
}
	
 
void fGrupo(struct stamigo am[50])
{  	system("cls");        //LIMPA A TELA
    int i = 0;
  	printf("\nGrupo de muitos amigos\n");
	printf("+-------------------------------------------------------------------------------------------------------+\n");
    
	//for(n=0; n<50; n++)
    
	while(am[i].nome[0] != '\0')
	{
		printf("%s\n", am[i].nome);
		printf("\nCelular:  %s\n", am[i].celular);
		printf("\n%d anos\n", am[i].idade);
        i++;

        printf("+-------------------------------------------------------------------------------------------------------+\n");
	}

            
}
	
void fclear()
{
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n') {}    //while sem fazer nada dentro do mesmo
	                                                           //stdin = standard input (entrada do teclado)
	                                                           //EOF = end of file
}	
	
	