//GML42 - Uma string e seu tamanho
/*Gabriel Mechi Lima - 16/04/2024
Entrar com um texto de até 200 caracteres
apresenta-lo em seguida na tela e
calcular o seyu tamanho(isso é possivel porque a string termina com \0)*/

#include<iostream>
main()
{
	int i;
	char texto[201];   //a string sempre coloca '/0' apos o ultimo caracter
	
	printf("Digite um texto qualquer:  ");
	gets(texto);   //habilta o teclado para uma string  (get string)
	
	printf("O texto digitado foi:\n");
	printf("%s\n", texto);   //%s para string
	
	printf("\nOutra forma de apresentar uma string\n");
	puts(texto);	//mostra o texto     (put string)
	
	//calculo do tamanho (basta descobrir o indice(posiçao) do '\0' final da string)
	i = 0;
	while (texto[i] != '\0')
	     i = i + 1;   //ou i++
	     
    printf("\nO texto possui %d caracteres \n", i);
	
}
