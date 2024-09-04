//GML60 - Estrutura de dados
/*Gabriel Mechi Lima - 15/05/2024
Solicitar os seguintes dados de um aluno:
nome, sexo idade e media final
(usamos neste teste 4 dados de tipos diferentes)
criar uma estrutura contendo esses tipos
criar uma função que recebe e apresenta esses 4 dados
reciclar o programa saindo quando for digitado apenas Enter
*/

//agregado homogeneo = string 


#include<stdio.h>
void funcAluno(char n[40], char sex, int age, float mid);    // nome sexo idade e media
void fclear();  //função para limpar o buffer do teclado


main()
{
struct staluno       //staluno é apenas o nome da estrutura (não aloca espaço na memoria)	
	{
		char nome[40];
	    char sexo;
		int idade;
		float media;
	};    //ou } aluno
	
struct staluno aluno;        //cria variavel alno do tipo estrutura
	                         //aqui aloca espaço na memoria para a estrutura
	
	    do
	    {
	    	printf("\nNome (enter para sair): ");
	    	gets(aluno.nome);
	    	if(aluno.nome[0] == '\0')   //testa a string para sair com enter
	    	  break;
	    	
			printf("Sexo: ");
			scanf("%c", &aluno.sexo);
			fclear();
			
			printf("Idade: ");
			scanf("%d", &aluno.idade);  
	    	
	    	printf("Media: ");
			scanf("%f", &aluno.media);
	    	
	    	
	    //apresenta os dados do aluno
	    funcAluno(aluno.nome, aluno.sexo, aluno.idade, aluno.media);
	    	
	    fclear();
	    
	    }
  
    while (1);
}

//definição da função
void funcAluno(char n[40], char sex, int age, float mid)
{
	printf("+-------------------------------------------------------------------------------------------------------+\n");
	printf("%s\t ", n);    //apresenta string
	printf("\tSexo: %c\t\t", sex);
	printf("%d anos \t\t", age);
	printf("Nota media: %4.1f\n", mid);
	printf("+-------------------------------------------------------------------------------------------------------+");
}

//para limpeza do buffer do teclado
//necessaio principalmente quando usar: scanf("%c, &xxx)

void fclear()
{
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n') {}
}