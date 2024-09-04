//GML44 - Criptografia Cesar
/*Gabriel Mechi Lima - 17/04/2024
Entrar com um texto de até 50 caracteres apresentando-o na tela
criptografa-lo acrescentando o valor de deslocamento 10
apresentar o texto criptografado
descriptografar e reapresentar o texto original
reciclar o prgrama saindo ao digitar ENTER*/

#include<iostream>
main()
{
	int i;
	char text[51];
	
	do
	{
	printf("Digite um texto qualquer(ENTER para sair):   ");
	gets(text);
	if(text[0] == '\0')
	  break;
	
    printf("\nSeu texto era: %s\n", text);  
    
    printf("\nSeu texto criptografado:\n");
    i=0;
    while(text[i] != '\0')
    {
    	text[i] = text[i] + 10;
    	i++;	
	}
		
	printf("%s\n", text);	
	
	printf("\nSeu texto descriptografado:\n");
    i=0;
    while(text[i] != '\0')
    {
    	text[i] = text[i] - 10;
    	i++;	
	}
		
	printf("%s\n\n", text);	
	}
	
	while(text[0] != '\0');

	

	
	
}