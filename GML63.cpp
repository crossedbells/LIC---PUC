//GML6 - Estrutura aninhada em estrutura
/*Gabriel Mechi Lima - 20/05/2024
baseado nos programas 61 e 62 anteriores:
considera apenas 1 aluno, solicitanto o seu endereço
criar uma estrutura de endereõ e utilizala dentro da estrutura do aluno
reciclar o programa saindo quando for digitado apenas enter
*/


#include<iostream>
void funcAluno(char n[40], char s, int i, char e[40], char m[20], char c[9], float md);
void fclear();


main()
{
struct stender
{
	char ender[40];
	char munic[20];
	char cep[9];
};

 struct staluno
{
	char nome[40];
	char sexo;
	int idade;
	struct stender enda; //estrutura aninhada
    float media;
} aluno;  //criar a variavel aluno do tipo estrutura 

do
{
	printf("\nNome (ENTER para sair):");
		gets(aluno.nome);                                   //gets(amigos[i].nome);
	        if(aluno.nome[0] == '\0')    //testa string vazia
	        break;
	        
		printf("\nSexo: ");
	    scanf("%c", &aluno.sexo);
	    fclear();
	
	    printf("\nIdade: ");
		scanf("%d", &aluno.idade);
		fclear();
		
		//campos da estrutura aninhada
		
		printf("\nEndereco: ");
		gets(aluno.enda.ender);
        printf("\nMunicipio: ");
		gets(aluno.enda.munic);
        printf("\nCEP: ");
		gets(aluno.enda.cep);
        
		printf("\nNota media:   ");
		scanf("%f", &aluno.media);
		
		//apresenta os dados do aluno
	    funcAluno(aluno.nome, aluno.sexo, aluno.idade, aluno.enda.ender, aluno.enda.munic, aluno.enda.cep, aluno.media);
	    
	    fclear();  //limpa o buffer do teclado
	
	
}  while(1);

	
}

//definição da função
void funcAluno(char n[40], char s, int i, char e[40], char m[20], char c[9], float md)
{
	printf("+-------------------------------------------------------------------------------------------------------+\n");
	printf("Nome: %s", n);
	printf("\tSexo: %c\t\t", s);
	printf("%d anos\t\n", i);
	printf("Endereco: %s - %s CEP: %s\n", e, m, c);
	printf("Nota media: %4.1f\n", md);
	printf("+-------------------------------------------------------------------------------------------------------+\n");

	
}

//para limpeza do buffer do teclado
void fclear()
{
	char carac;
	while((carac = fgetc(stdin)) != EOF && carac != '\n') {}    //while sem fazer nada dentro do mesmo
	                                                           //stdin = standart input (entrada do teclado)
	                                                           //EOF = end of file
}	
	
