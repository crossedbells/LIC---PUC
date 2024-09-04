//GML43 - Operaçao numa string - substituiçao de caracteres
/*Gabriel Mechi Lima - 17/04/2024
Entrar com um texto de ate 100 caracteres
apresenta lo na tela e fazer as seguintes substituiçoes:
A por 4
E por 3
I por 1
O por 0
U por V
usa o comando switch
considerar as letras maisculas e minusculas 
reciclar o programa saindo ao digitar apenas ENTER (isso é: o primeiro caracter for igual a /0*/

#include<iostream>
main()
{
	int i;
	char text[101];
	
	do
	{
	printf("Digite um texto qualquer(ENTER para sair):   ");
	gets(text);
	
    printf("\nSeu novo texto era: %s\n", text);      //ou puts(text)
	
	i = 0;
	while(text[i] != '\0')
	{
	
	
	switch(text[i])
	{
		case'a':
	    case'A':
		    if(text[i] == 'a' || 'A' )
		    text[i] = '4';
		break;
		
		case'e':
	    case'E':
			if(text[i] == 'e' || 'E' )
		    text[i] = '3';
		break;
		
		case'i':
	    case'I':
			if(text[i] == 'i' || 'I' )
		    text[i] = '1';
		break;
		
		case'o':
	    case'O':
			if(text[i] == 'o' || 'O' )
		    text[i] = '0';
		break;
		
		case'u':
	    case'U':
			if(text[i] == 'u' || 'U' )
		    text[i] = 'V';
		break;
	}      
	i++;
    }
	printf("Seu novo texto e: %s\n\n", text);	
    }
 
    while(text[0] != '\0');



}
 